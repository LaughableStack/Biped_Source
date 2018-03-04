#include <Servo.h>
Servo servantA;
Servo servantB;
Servo servantC;
Servo servantD;
Servo servantE;
Servo servantF;
Servo servantG;
void stop() {
  servantA.attach(22);
  servantB.attach(24);
  servantC.attach(26);
  servantD.attach(28);
  servantE.attach(30);
  servantF.attach(32);
  servantG.attach(34);
  
  servantA.write(90);
  
  servantB.write(95);
  servantE.write(80);
  servantF.write(95);
  
  servantC.write(90);
  servantD.write(100);
  servantG.write(85);
}
void setup() {
  stop();
  /*delay(1000);
  servantA.write(180);
  delay(1000);
  servantA.write(0);*/
  step();
}
void step() {
  servantA.write(0);
  
  servantB.write(125);
  
  servantE.write(60);
  delay(5000);
  servantA.write(180);
  delay(5000);
  servantB.write(95);
  servantE.write(80);
  servantF.write(95);

  servantC.write(65);
  
  servantD.write(130);
  /*servantA.write(65);
  servantB.write(65);
  servantE.write(125);
  servantF.write(110);*/
}
void loop() {
  // put your main code here, to run repeatedly:

}
