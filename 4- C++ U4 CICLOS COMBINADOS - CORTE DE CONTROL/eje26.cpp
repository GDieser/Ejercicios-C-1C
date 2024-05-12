#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Inicializar la semilla para generar números aleatorios

    // Mensaje de bienvenida
    cout << "Bienvenido al juego de piedra, papel o tijera!" << endl;

    // Opciones del juego
    string opciones[3] = {"piedra", "papel", "tijera"};
    

    // Obtener la elección del jugador
    cout << "Elige tu opción: piedra, papel o tijera: ";
    string eleccionJugador;
    cin >> eleccionJugador;

    // Generar la elección aleatoria de la computadora
    int indiceComputadora = rand() % 3;
    string eleccionComputadora = opciones[indiceComputadora];

    // Mostrar las elecciones
    cout << "Tu elección: " << eleccionJugador << endl;
    cout << "La elección de la computadora: " << eleccionComputadora << endl;

    // Determinar el resultado
    if (eleccionJugador == eleccionComputadora) {
        cout << "Empate!" << endl;
    } else if ((eleccionJugador == "piedra" && eleccionComputadora == "tijera") ||
               (eleccionJugador == "papel" && eleccionComputadora == "piedra") ||
               (eleccionJugador == "tijera" && eleccionComputadora == "papel")) {
        cout << "¡Felicidades! ¡Ganaste!" << endl;
    } else {
        cout << "¡Ups! La computadora gana." << endl;
    }

    return 0;
}

