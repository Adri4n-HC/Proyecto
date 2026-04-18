/* 
 * Proyecto: Garra Robótica con Joysticks
 * Versión: 1.1.0 - Etapa 2 (Funcionalidad Básica)
 * Fecha: Abril 2026
 * Autores: [Hernandez Castro Luis Adrian // Juan Gonzalez David // Maroto May Alejandro // Sanchez Hernandez Alan // Zavala Cervantes Luis Daniel]
 */

// Código para brazo robótico
// [Hernandez Castro Luis Adrian]

#include <Servo.h>

Servo sBase, sHombro, sCodo, sGarra;
int posBase = 90, posHombro = 90, posCodo = 90, posGarra = 90;

// Variables para joystick
int rawX1, rawY1;

void setup() {
  Serial.begin(9600);
  sBase.attach(9);
  sHombro.attach(10);
  sCodo.attach(11);
  sGarra.attach(12);

  // Posición inicial de seguridad
  sBase.write(posBase);
  sHombro.write(posHombro);
  sCodo.write(posCodo);
  sGarra.write(posGarra);
}

void loop() {

  // [Maroto May Alejandro] - Leer Joysticks
  rawX1 = analogRead(A0);
  rawY1 = analogRead(A1);

}
