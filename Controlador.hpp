#ifndef CONTROLADOR_HPP
#define CONTROLADOR_HPP

#include "Calculadora.hpp"
#include <string>

// Estructura simple para devolver el resultado a la vista
struct RespuestaCalculo {
    bool exito;
    double resultado;
    std::string mensajeError;
};

class CalculadoraControlador {
private:
    Calculadora modelo;

public:
    RespuestaCalculo procesarOperacion(int opcion, double a, double b) {
        RespuestaCalculo respuesta;
        respuesta.exito = true;
        respuesta.resultado = 0.0;
        respuesta.mensajeError = "";

        try {
            switch (opcion) {
                case 1:
                    respuesta.resultado = modelo.sumar(a, b);
                    break;
                case 2:
                    respuesta.resultado = modelo.restar(a, b);
                    break;
                case 3:
                    respuesta.resultado = modelo.multiplicar(a, b);
                    break;
                case 4:
                    respuesta.resultado = modelo.dividir(a, b);
                    break;
                default:
                    respuesta.exito = false;
                    respuesta.mensajeError = "Opción de operación no válida.";
                    break;
            }
        } catch (const std::invalid_argument& e) {
            respuesta.exito = false;
            respuesta.mensajeError = e.what();
        }

        return respuesta;
    }
};

#endif // CONTROLADOR_HPP