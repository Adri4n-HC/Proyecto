// Cdigo para brazo robotico //
//[Hernandez Castro Luis Adrian]
#include <Servo.h>
Servo sBase, sHombro, sCodo, sGarra;
int posBase = 90, posHombro = 90, posCodo = 90, posGarra = 90;

void setup() {
  Serial.begin(9600);
  sBase.attach(9); sHombro.attach(10); sCodo.attach(11); sGarra.attach(12);
  // Posición inicial de seguridad
}
