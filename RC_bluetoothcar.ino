#include<AFmotor.h>
AF_DCmotor1(1, motor12, _1khz);
AF_DCmotor2(2, motor12, _1kz);
AF_DCmotor3(3, motor34, _1kz);
AF_DCmotor4(4, motor34, _1kz);
char command;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); {

  }

  void loop() {
    // put your main code here, to run repeatedly:
    if (Serial.avaialbe() > 0)
    {
      command = serial.read();
      stop();
      Serial.println(command);
      switch (command);
      {
      case'F':
        forward();
        break;
      case'B':
        back();
        break;
      case'L':
        left();
        break;
      case'R';
        right():
        break;
        ]

      }

    }
    void forward()
    [
      motor1.setspeed(255);
      motor1.run(forward);
      motor2.setspeed(255);
      motor2.run(forward);
      motor3.setspeed(255);
      motor3.run(forward);
      motor4.setspeed(255)
      motor4.run(forward);
  }
  voidback()
  {
    motor1.setspeed(255);
    motor1.run(backward);
    motor2.setspeed(255);
    motor2.run(backward);
    motor3.setspeed(255);
    motor3.run(backward);
    motor4.setspeed(255)
    motor4.run(backward);
  }
  void left()
  {
    motor1.setspeed(255);
    motor1.run(backward);
    motor2.setspeed(255);
    motor2.run(farward);
    motor3.setspeed(255);
    motor3.run(farward);
    motor4.setspeed(255)
    motor4.run(backward);
  }
  void right()
  {

    motor1.setspeed(255);
    motor1.run(forward);
    motor2.setspeed(255);
    motor2.run(backward);
    motor3.setspeed(255);
    motor3.run(backward);
    motor4.setspeed(255)
    motor4.run(forward);
  }
  void stop()
  {
    motor1.setspeed(0);
    motor1.run(release);
    motor2.setspeed(0);
    motor2.run(release);
    motor3.setspeed(0);
    motor3.run(release);
    motor4.setspeed(0)
    motor4.run(release);
  }
