#include <iostream>
#include <limits>
#include "Controlador.hpp"

void mostrarMenu() {
    std::cout << "\n=====================================\n";
    std::cout << " CALCULADORA KATA (Patrón Controlador) \n";
    std::cout << "=====================================\n";
    std::cout << "1. Sumar\n";
    std::cout << "2. Restar\n";
    std::cout << "3. Multiplicar\n";
    std::cout << "4. Dividir\n";
    std::cout << "5. Salir\n";
    std::cout << "Seleccione una opción: ";
}

int main() {
    CalculadoraControlador controlador;
    int opcion = 0;

    while (true) {
        mostrarMenu();

        if (!(std::cin >> opcion)) {
            std::cout << "\n[Error] Entradas no numéricas no permitidas.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (opcion == 5) {
            std::cout << "\n¡Hasta luego!\n";
            break;
        }

        if (opcion >= 1 && opcion <= 4) {
            double a, b;
            std::cout << "Ingrese el primer número: ";
            std::cin >> a;
            std::cout << "Ingrese el segundo número: ";
            std::cin >> b;

            // La vista delega el cálculo al controlador
            RespuestaCalculo res = controlador.procesarOperacion(opcion, a, b);

            if (res.exito) {
                std::cout << "\n>>> Resultado: " << res.resultado << "\n";
            } else {
                std::cout << "\n>>> [Error]: " << res.mensajeError << "\n";
            }
        } else {
            std::cout << "\n[Error] Opción no válida. Intente de nuevo.\n";
        }
    }

    return 0;
}