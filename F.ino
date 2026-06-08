

#include <Servo.h>

Servo base;
Servo garra;

void setup() {
  base.attach(9);
  garra.attach(10);
}

void loop() {
  // Posição inicial
  base.write(0);
  garra.write(180); // Aberta
  
  

  

}
