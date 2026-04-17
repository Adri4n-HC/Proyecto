#  Planificación del Proyecto: Garra con Joysticks

##  Objetivos del Proyecto
* **Objetivo General:** Desarrollar un sistema de control de hardware para una garra robótica que responda de manera precisa y fluida a las señales de dos joysticks analógicos.
* **Objetivos Específicos:**
    * Implementar un algoritmo de suavizado para el movimiento de los servomotores.
    * Diseñar un circuito de protección para evitar picos de corriente en los motores.
    * Documentar el consumo de energía en diferentes estados de carga.

##  Producto Mínimo Viable (MVP)
Para la primera entrega, el sistema debe cumplir con:
1. Control de 3 ejes (Base, codo, Brazo, Pinza).
2. Lectura estable de los joysticks sin "jitter" (ruido eléctrico).
3. Botón de "Home" para regresar la garra a una posición segura.

##  Diagrama a Bloques del Hardware
* **Entrada:** 2x Joysticks Analógicos (Ejes X, Y).
* **Procesamiento:** Microcontrolador Arduino UNO.
* **Actuación:** Servomotores de alto torque para la base y micro-servos para la pinza.
* **Alimentación:** Fuente regulada externa de 6v a 15A.

## 📋 Lista de Componentes y Roles
| Componente | Cantidad | Función |
| :--- | :---: | :--- |
| Servomotor MG995 | 4 | Movimiento de carga pesada (Base, hombro, codo y garra). |
| Joystick KY-023 | 2 | Control de 4 ejes (Base, Hombro, Codo y Pinza). |
| Estructura echa de acrilico | 1 | Chasis físico de la garra. |

## 🔗 Enlaces Relacionados
* [Ver Documentación Completa](./docs/)
* [Esquemas Electrónicos](./hardware/schematics/)
