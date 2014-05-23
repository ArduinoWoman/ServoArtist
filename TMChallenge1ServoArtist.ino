/* The Tech Museum of Innovation  - www.thetech.org

"Servo Artist" - May 24th 2014
Challenge - 1 Move your Servo

author: Tenaya Hurst - Arduino Woman

1 Servo
8 jumper wires

Notice there are two ways to program your servo, the loop runs continuously from
one pattern to the next.  Try changing these, commenting in or out one or the other
Which do you prefer?  Which has the output of the movement you want to control?

*/

#include <Servo.h>  // servo library

Servo servo1;  // servo control object

void setup()
{
  servo1.attach(9);
}

void loop()
{
  int position;

  servo1.write(90);    // Tell servo to go to 90 degrees

  delay(1000);         // Pause to give it time to move

  servo1.write(180);   // Tell servo to go to 180 degrees

  delay(1000);         // Pause to give it time to move

  servo1.write(0);     // Tell servo to go to 0 degrees

  delay(1000);         // Pause to give it time to move
 
  for(position = 0; position < 180; position += 2)
  {
    servo1.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }

  for(position = 180; position >= 0; position -= 1)
  {                                
    servo1.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }
}

