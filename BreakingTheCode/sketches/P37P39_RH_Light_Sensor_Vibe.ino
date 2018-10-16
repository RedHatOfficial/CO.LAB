/******************************************************************************

  LilyPad Light Sensor with Vibration Code CC-SA: Alicia Gibb

  This example code turns on vibration motor when light is sensed (for example, when a page is turned).
  This code is used on Pages 37,39 of Breaking the Code v1

  Light Sensor connections:
     + pin to +
     - pin to -
     s pin to A2

    Vibe + pin to 10
    Vibe - pin to -

******************************************************************************/
 
#define LIGHT_SENSOR  A2
#define VIBE_PIN 10

int startupLightLevel;

void setup() {
  pinMode(LIGHT_SENSOR, INPUT);

  pinMode(VIBE_PIN, OUTPUT);

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

  if(abs(currentLightLevel - startupLightLevel) > 20)
  {
    Serial.println("Something has changed!");
    //Do things here
    digitalWrite(VIBE_PIN, HIGH);
  }
  else
  {
    Serial.println("Nothing new");
    digitalWrite(VIBE_PIN, LOW);
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
