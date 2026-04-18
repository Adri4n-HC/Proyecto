/* * Proyecto: Garra Robótica con Joysticks
 * Versión: 1.1.0 - Etapa 2 (Funcionalidad Básica)
 * Fecha: Abril 2026
 * Autores: [Hernandez Castro Luis Adrian // Juan Gonzalez David // Maroto May Alejandro // Sanchez Hernandez Alan // Zavala Cervantes Luis Daniel]
 */

#include <Arduino.h> // Mantenemos la cabecera para los prototipos de hardware

// [Hernandez Castro Luis Adrian] - Definiciones y Setup
// Definimos una estructura para organizar las coordenadas de la garra
typedef struct {
    int base;
    int hombro;
    int codo;
    int garra;
} EstadoBrazo;

// Inicialización de variables globales con valores de seguridad (90 grados)
EstadoBrazo brazo = {90, 90, 90, 90};

void setup() {
    Serial.begin(9600);
    
    // Configuración de pines de salida para los servomotores MG995
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    
    Serial.println("SISTEMA INICIALIZADO: Esperando entrada de joysticks...");
}

void loop() {
    // [Maroto May Alejandro] - Leer Joysticks
    // Lectura de los valores analógicos (0 - 1023) de los periféricos
    
    int rawX1 = analogRead(A0); // Joystick 1 - Eje X (Control Base)
    int rawY1 = analogRead(A1); // Joystick 1 - Eje Y (Control Hombro)
    int rawX2 = analogRead(A2); // Joystick 2 - Eje X (Control Codo)
    int rawY2 = analogRead(A3); // Joystick 2 - Eje Y (Control Pinza)

}
