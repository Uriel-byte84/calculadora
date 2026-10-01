#ifndef CALCULADORA_HPP
#define CALCULADORA_HPP

#include <stdexcept>

class Calculadora {
public:
    double sumar(double a, double b) const {
        return a + b;
    }

    double restar(double a, double b) const {
        return a - b;
    }

    double multiplicar(double a, double b) const {
        return a * b;
    }

    double dividir(double a, double b) const {
        if (b == 0.0) {
            throw std::invalid_argument("No se puede dividir por cero.");
        }
        return a / b;
    }
};

#endif // CALCULADORA_HPP