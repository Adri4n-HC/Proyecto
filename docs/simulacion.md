# Evidencias de la Etapa 2: Simulación del Circuito

Se realizó la validación del esquema de conexiones utilizando un simulador interactivo.

# Componentes Simulados

* 1x Arduino UNO R3 (Microcontrolador principal)

* 4x Microservos SG90 9g (Mecanismo de la Garra de 4 GDL)

* 2x Módulos de Joystick (Control de dirección y apertura)

* 2x Protoboards (Para la distribución de energía)



# Puntos Verificados en la Simulación

1. Pines de Control: Se comprobó que el Arduino puede gestionar las 4 señales PWM para los servos y las 4 entradas analógicas de los joysticks.

2. Lógica de Mapeo: El código convierte correctamente la lectura del joystick (0-1023) en un ángulo para los servos (0-180°).

3. Distribución de Tierra: Se confirmó la conexión de una tierra común (GND) para todos los componentes.

<img width="1080" height="1014" alt="image" src="https://github.com/user-attachments/assets/56bac7e0-4487-4ff7-9f68-a08c240762f3" />

