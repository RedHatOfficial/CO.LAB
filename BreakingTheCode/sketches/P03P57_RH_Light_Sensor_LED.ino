/******************************************************************************

  LilyPad Light Sensor Code CC-SA: Alicia Gibb

  This example code turns on LEDs when light is sensed (for example, when a page is turned).

  Used for pages 03, 57 in Breaking the Code v1

  Light Sensor connections:
     + pin to +
     - pin to -
     s pin to A2

    LED + pin to 9
    LED - pin to -

******************************************************************************/
 
#define LIGHT_SENSOR  A2
#define LED 9

int startupLightLevel;

void setup() {
  pinMode(LIGHT_SENSOR, INPUT);

  pinMode(LED, OUTPUT);

  startupLightLevel = averageAnalogRead(LIGHT_SENSOR); //Get the starting state  

  Serial.begin(9600);
  Serial.println("Changing light sensor example");
}

void loop() {

  //Check the light sensor to see if we have a state change
  int currentLightLevel = averageAnalogRead(LIGHT_SENSOR);
  Serial.print("startupLightLevel: ");
  Serial.print(startupLightLevel);
  Serial.print(" level: ");
  Serial.println(currentLightLevel);

  if(abs(currentLightLevel - startupLightLevel) > 5)
  {
    Serial.println("Something has changed!");
    //Do things here
    digitalWrite(LED, HIGH);
  }
  else
  {
    Serial.println("Nothing new");
    digitalWrite(LED, LOW);
  }

  delay(250);

}

//Takes an average of readings on a given pin
//Returns the average
int averageAnalogRead(byte pinToRead)
{
  byte numberOfReadings = 8;
  unsigned int runningValue = 0; 

  for(int x = 0 ; x < numberOfReadings ; x++)
    runningValue += analogRead(pinToRead);
  runningValue /= numberOfReadings;

  return(runningValue);  
}
