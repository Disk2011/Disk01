

#include <Servo.h>

Servo base;
Servo garra;
Servo hasteA;
Servo hasteB;

void setup() {
  base.attach(9);
  hasteA.attach(10);
  hasteB.attach(11);
  garra.attach(12);
}

void loop() {
  // Posição inicial
  base.write(0);
  hasteA.write(0); //  Cima baixo
  hasteB.write(0); //  Frente e trás
  garra.write(180); // Aberta
  
  

  

}
