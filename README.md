@'
# Calculadora Kata - Patrón Controlador

Este proyecto es una calculadora escrita en C++ que aplica el **Patrón Controlador (GRASP)** para separar la Interfaz de Usuario de la Lógica de Negocio.

## Estructura del Código
* `Calculadora.hpp` (Modelo): Solo realiza operaciones matemáticas.
* `Controlador.hpp` (Controlador): Orquesta el flujo y maneja errores (ej. división por cero).
* `main.cpp` (Vista): Interfaz por consola.

## Cómo ejecutar en Windows
Hacer doble clic en `iniciar.bat` para compilar la fuente UTF-8 y abrir la calculadora correctamente.
'@ | Out-File -Encoding utf8 README.md