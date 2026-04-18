/* * Proyecto: Garra Robótica con Joysticks
 * Versión: 1.0.0 - Etapa 2 (Funcionalidad Básica)
 * Fecha: Abril 2026
 * Autores: [Hernandez Castro Luis Adrian//Juan Gonzalez David//Maroto May Alejandro//Sanchez Hernandez Alan//Zavala Cervantes Luis Daniel]
 */
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
