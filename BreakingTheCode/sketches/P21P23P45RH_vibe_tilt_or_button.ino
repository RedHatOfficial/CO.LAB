/******************************************************************************

  LilyPad Buzzer Example Code from SparkFun Electronics (Public Domain)
  Remixed by Alicia Gibb

  This example code shows how to hook up a LilyPad Vibration motor to buzz when a button is pressed.

Used in Page 21, 23, 45 of Breaking the Code v1

Vibration motor connections:
     + pin to 10 (will also work with motor hooked directly to +)
     - to -

******************************************************************************/
// Which pin the buzzer is attached to
int VIBE_PIN = 10;


void setup()
{
  // Set the buzzer pin as an OUTPUT
  pinMode(VIBE_PIN, OUTPUT);
}

void loop()
{
  // Use the tone() function to play each note as if it were morse code
digitalWrite(VIBE_PIN, HIGH);

}
