#include <Servo.h>

// Create four servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {

  // Attach each servo to a digital pin
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);

  unsigned long startTime = millis();

  // Run the Sweep motion for 2 seconds
  while (millis() - startTime < 2000) {

    // Move from 0° to 180°
    for (int pos = 0; pos <= 180 && millis() - startTime < 2000; pos++) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(10);
    }

    // Move back from 180° to 0°
    for (int pos = 180; pos >= 0 && millis() - startTime < 2000; pos--) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(10);
    }
  }

  // Hold all servos at 90 degrees
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
}

void loop() {
  // Keep all servos at 90 degrees
}