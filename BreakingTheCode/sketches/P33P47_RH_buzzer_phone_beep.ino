/******************************************************************************

  LilyPad Buzzer Example Code from SparkFun Electronics (Public Domain)
  Remixed by Alicia Gibb

  This example code shows how to hook up a LilyPad Buzzer to play a simple song
  using the tone() function and setting variables for each note.

Used in Page 33, 47 of Breaking the Code v1

  Buzzer connections:
     + pin to 5
     - to -

******************************************************************************/
// Which pin the buzzer is attached to
int buzzerPin = 5;

// Notes and frequencies
const int C = 1046;


void setup()
{
  // Set the buzzer pin as an OUTPUT
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  // Use the tone() function to play each note as if it were morse code
  tone(buzzerPin, C);
   delay(300);
  noTone(buzzerPin);
     delay(300);
  tone(buzzerPin, C);
   delay(300);
  noTone(buzzerPin);
  delay(3000);

}
