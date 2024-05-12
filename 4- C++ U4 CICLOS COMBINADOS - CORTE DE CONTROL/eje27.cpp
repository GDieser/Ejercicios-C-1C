#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    int lado = 5; // Tamaño del cuadrado
    int duracion = 100; // Duración en milisegundos de cada paso de la animación
    int movimiento = 1; // Cantidad de movimiento en cada paso

    // Bucle para la animación
    while (true) {
        // Limpiar la consola
        cout << "\033[2J\033[H";

        // Dibujar el cuadrado
        for (int i = 0; i < lado; ++i) {
            for (int j = 0; j < lado; ++j) {
                if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }

        // Actualizar la posición del cuadrado
        lado += movimiento;

        // Invertir la dirección si el cuadrado alcanza los bordes de la pantalla
        if (lado <= 1 || lado >= 20)
            movimiento = -movimiento;

        // Esperar antes de dibujar el siguiente cuadro
        this_thread::sleep_for(chrono::milliseconds(duracion));
    }

    return 0;
}

