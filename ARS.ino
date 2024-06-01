#include <PRIZM.h>
PRIZM prizm;

void setup() {
  prizm.PrizmBegin();
  prizm.setMotorInvert(1, 1);
} 

void loop() {
  {
    if (prizm.readLineSensor(3) == 0) {
    prizm.setMotorPowers(125, 30);
  }
  
  if (prizm.readLineSensor(3) == 1) {
    prizm.setMotorPowers(30, 125);
  }
  }

  if (prizm.readSonicSensorCM(4) > 25) {
    prizm.setMotorPowers(50, 50);
  } else {
    prizm.setMotorPowers(125, 125);
  }

  if (prizm.readLineSensor(3) == 1) {
    prizm.setRedLED(LOW);
  } else {
    prizm.setRedLED(HIGH);
  }

  delay(50);
}
