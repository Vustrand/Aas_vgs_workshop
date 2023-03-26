#include <Servo.h> //importerer Servobibliotek
#define servoPin 9 //Definerer hvilken 

Servo myservo; //Kaller servoen vår myservo

int angle = 0; //Variabel kalt angle

void setup() {
  myservo.attach(servoPin); //Kobler servoPin 9 til myservo

}

void loop() {
  //Sender ulike vinkler til servoen
  myservo.write(90);
  delay(1000);
  myservo.write(179);
  delay(1000);
  myservo.write(10);
  delay(1000);

  //Sweep fra 0 til 179 grader:
  for (angle = 0; angle <= 179; angle += 1) {
    myservo.write(angle);
    delay(15);
  
  //Tilbake fra 179 til 0 grader:
  for (angle = 179; angle >= 0; angle -= 1) {
    myservo.write(angle);
    delay(30);
  }

  }
delay(1000);
}