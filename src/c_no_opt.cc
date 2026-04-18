/* * Proyecto: Garra Robótica con Joysticks
 * Versión: 1.2.0 - Etapa 2 (Funcionalidad Básica)
 * Fecha: Abril 2026
 * Autores: [Hernandez Castro Luis Adrian // Juan Gonzalez David // Maroto May Alejandro // Sanchez Hernandez Alan // Zavala Cervantes Luis Daniel]
 */

#include <Servo.h>
Servo sBase, sHombro, sCodo, sGarra;
int posBase = 90, posHombro = 90, posCodo = 90, posGarra = 90;

void setup() {
  Serial.begin(9600);
  sBase.attach(9); sHombro.attach(10); sCodo.attach(11); sGarra.attach(12);
  // Posición inicial de seguridad
}
// [Maroto May Alejandro]
void loop() {
  // Lectura de los Joysticks (Pines A0 a A3)
  int valBase = analogRead(A0);
  int valHombro = analogRead(A1);
  int valCodo = analogRead(A2);
  int valGarra = analogRead(A3) ;
  //[Sánchez Hernandez Alan]
  // Convertir valores analógicos (0-1023) a grados (0-180)
  int targetBase = map(valBase, 0, 1023, 0, 180);
  int targetHombro = map(valHombro, 0, 1023, 45, 135); // Restringido para proteger estructura
  int targetCodo = map(valCodo, 0, 1023, 0, 180);
  int targetGarra = map(valGarra, 0, 1023, 10, 90);   // Restringido para la pinza
}
