/******************************************************************************

  LilyPad Buzzer Example Code from SparkFun Electronics (Public Domain)
  Remixed by Alicia Gibb

  This example code shows how to hook up a LilyPad Vibration motor to buzz and LEDs to light when a button is pressed.

Used in Page 09, 55 of Breaking the Code v1

 Vibration motor connections:
     + pin to 10
     - to -

 LED connections:
     + pin to 9
     - to -

******************************************************************************/
// Which pin the buzzer is attached to
int LED_PIN = 9;


void setup()
{
  // Set the buzzer pin as an OUTPUT
  pinMode(LED_PIN, OUTPUT);

}

void loop()
{
  // Use the tone() function to play each note as if it were morse code
digitalWrite(LED_PIN, HIGH);
}
