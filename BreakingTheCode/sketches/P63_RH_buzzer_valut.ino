/******************************************************************************

  LilyPad Buzzer Example Code from SparkFun Electronics (Public Domain)
  Remixed by Alicia Gibb

  This example code shows how to hook up a LilyPad Buzzer to play a simple song
  using the tone() function and setting variables for each note.

Used in Page 63 of Breaking the Code v1

  Buzzer connections:
     + pin to 5
     - to -

******************************************************************************/
// Which pin the buzzer is attached to
int BUZZER_PIN = 5;

// Notes and frequencies
const int C = 1046;
const int D = 1175;
const int E = 1319;
const int F = 1397;
const int G = 1568;
const int A = 1760;
const int B = 1976;
const int C1 = 2093;
const int D1 = 2349;

int delayTime = 500; 


void setup()
{
  // Set the buzzer pin as an OUTPUT
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop()
{
  // Use the tone() function to play each note as if it were morse code
 tone(BUZZER_PIN, G);
  delay(delayTime);
  tone(BUZZER_PIN, C1);
  delay(300);
  tone(BUZZER_PIN, D1);
  delay(300);
  // Use noTone() to shut off the buzzer and delay to create a 'rest'
  noTone(BUZZER_PIN);  
  delay(9000);  

}
