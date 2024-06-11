#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void elegirOpcionesDelJuego(string &player1, string &player2, int &opcion);

void mostrarMenuEmbaucado(int &opcion);

void mostrarEstadisticas();

void mostrarCreditos();

void registarNombresJugadores(string &player1, string &player2);

void comenzarJuego(string &player1, string &player2);

void randomizarCartasParaPayers(string figura_ActualP1[], int TAM_P1, string naipe_ActualP1[], int TAM_N1, string figura_ActualP2[], int TAM_P2, string naipe_ActualP2[], int TAM_N2);

string randomizarCartaEmbaucadora();

void calcularPuntajesPlayers(string player, int &puntosPlayer, string naipe_ActualP[], int TAM_N, string figura_ActualP[], int TAM_A, string embaucadora);

int main()
{
    // Seed
    srand(time(0));
    setlocale(LC_ALL, "Spanish");

    int opcion;
    string player1, player2;

    do
    {
        elegirOpcionesDelJuego(player1, player2, opcion);

    } while (opcion != 0);

    return 0;
}

void elegirOpcionesDelJuego(string &player1, string &player2, int &opcion)
{

    mostrarMenuEmbaucado(opcion);

    switch (opcion)
    {
    case 1:
        registarNombresJugadores(player1, player2);
        break;

    case 2:
        mostrarEstadisticas();
        break;

    case 3:
        mostrarCreditos();
        break;

    case 0:
        cout << "Fin!";
        break;

    default:
        cout << "Error pruebe de nuevo!" << endl;
        mostrarMenuEmbaucado(opcion);
        break;
    }
}

void mostrarMenuEmbaucado(int &opcion)
{
    cout << "EMBAUCADO" << endl;
    cout << "----------------------" << endl;
    cout << "1 - JUGAR" << endl;
    cout << "2 - ESTADÍSTICAS" << endl;
    cout << "3 - CRÉDITOS" << endl;
    cout << "----------------------" << endl;
    cout << "0 - SALIR" << endl;
    cout << endl;

    cin >> opcion;
}

void registarNombresJugadores(string &player1, string &player2)
{

    char confirmar;

    do
    {
        cout << "EMBAUCADO" << endl;
        cout << "------------------------------------------------------------------------" << endl;

        cout << "Antes de comenzar deben registrar sus nombres: " << endl;
        cout << endl;

        cout << "¿Nombre del Jugador 1?: ";
        cin >> player1;
        cout << endl;

        cout << "¿Nombre del Jugador 2?: ";
        cin >> player2;
        cout << endl;
        cout << "------------------------------------------------------------------------" << endl;

        cout << "¿Confirmar nombres? (S/N) ";
        cin >> confirmar;
        cout << endl;

    } while (confirmar != 'S' && confirmar != 's');

    comenzarJuego(player1, player2);
}

void comenzarJuego(string &player1, string &player2)
{
    int const TAM_N = 5;
    int puntosPlayer1 = 0, puntosPlayer2 = 0;
    char opcion;

    string figura_ActualP1[TAM_N] = {}, naipe_ActualP1[TAM_N] = {};
    string figura_ActualP2[TAM_N] = {}, naipe_ActualP2[TAM_N] = {};
    string embaucadora;

    for (int i = 0; i < 3; i++)
    {
        cout << "EMBAUCADO" << endl;
        cout << "------------------------------------------------------------------------" << endl;
        cout << "RONDA #" << (i + 1) << endl;
        cout << player1 << " vs " << player2 << endl;
        cout << endl;
        cout << player1 << " (" << puntosPlayer1 << " puntos)" << endl;

        randomizarCartasParaPayers(figura_ActualP1, TAM_N, naipe_ActualP1, TAM_N, figura_ActualP2, TAM_N, naipe_ActualP2, TAM_N);

        // Payer 1
        for (int x = 0; x < 5; x++)
        {
            cout << naipe_ActualP1[x] << " de " << figura_ActualP1[x] << endl;
        }

        cout << endl;
        cout << player2 << " (" << puntosPlayer2 << " puntos)" << endl;

        // Player 2
        for (int y = 0; y < 5; y++)
        {
            cout << naipe_ActualP2[y] << " de " << figura_ActualP2[y] << endl;
        }

        cout << endl;
        embaucadora = randomizarCartaEmbaucadora();
        cout << "Embaucadora: " << embaucadora << endl;
        cout << "------------------------------------------------------------------------" << endl;

        if (i < 1)
        {
            cout << endl;
            cout << "Puntajes obtenidos:" << endl;
            cout << "------------------------------------------------------------------------" << endl;
            calcularPuntajesPlayers(player1, puntosPlayer1, naipe_ActualP1, TAM_N, figura_ActualP1, TAM_N, embaucadora);
            cout << endl;
            calcularPuntajesPlayers(player2, puntosPlayer2, naipe_ActualP2, TAM_N, figura_ActualP2, TAM_N, embaucadora);
            cout << "------------------------------------------------------------------------" << endl;
        }
        else
        {
            if (puntosPlayer1 >= 20)
            {
                cout << player1 << ", ¿Deseas modificar la carta embaucadora actual "<< embaucadora <<"? (S/N): ";
                cin >> opcion;
                cout << endl;
                if (opcion == 's' || opcion == 'S')
                {
                    embaucadora = randomizarCartaEmbaucadora();
                    cout << "Nueva enbaucadora: " << embaucadora << endl;
                }
            }

            if (puntosPlayer2 >= 20)
            {
                cout << player2 << ", ¿Deseas modificar la carta embaucadora actual "<< embaucadora <<"? (S/N): ";
                cin >> opcion;
                cout << endl;
                if (opcion == 's' || opcion == 'S')
                {
                    embaucadora = randomizarCartaEmbaucadora();
                    cout << "Nueva embaucadora: " << embaucadora << endl;
                }
            }
        }
    }
}

void randomizarCartasParaPayers(string figura_ActualP1[], int TAM_P1, string naipe_ActualP1[], int TAM_N1, string figura_ActualP2[], int TAM_P2, string naipe_ActualP2[], int TAM_N2)
{
    int const TAM_F = 4, TAM_N = 5, TAM_T = 10;
    int RAN_F, RAN_N, contCartas = 0;

    string figura[TAM_F] = {"Picas", "Corazon", "Trebol", "Diamantes"};
    string naipe[TAM_N] = {"10", "J", "Q", "K", "A"};

    string figura_Actual[TAM_T];
    string naipe_Actual[TAM_T];

    // Genero 10 cartas randoms todas distintas (al fin...)
    while (contCartas < TAM_T)
    {
        // Numeros randoms
        RAN_F = rand() % TAM_F;
        RAN_N = rand() % TAM_N;

        // Bandera repetidos
        bool noRepetida = true;

        // Comparo con todos
        for (int i = 0; i < contCartas; i++)
        {
            if (figura_Actual[i] == figura[RAN_F] && naipe_Actual[i] == naipe[RAN_N])
            {
                noRepetida = false;
            }
        }

        // Guardo la carta con figura y naipe random
        if (noRepetida)
        {
            figura_Actual[contCartas] = figura[RAN_F];
            naipe_Actual[contCartas] = naipe[RAN_N];
            contCartas++;
        }
    }

    // Divido en los 2 players
    for (int x = 0; x < 10; x++)
    {
        if (x < 5)
        {
            figura_ActualP1[x] = figura_Actual[x];
            naipe_ActualP1[x] = naipe_Actual[x];
        }
        else 
        {
            figura_ActualP2[x - 5] = figura_Actual[x];
            naipe_ActualP2[x - 5] = naipe_Actual[x];
        }
    }
}

string randomizarCartaEmbaucadora()
{

    int const TAM_F = 4;
    int RAN_F;

    string figura[TAM_F] = {"Picas", "Corazon", "Trebol", "Diamantes"};

    RAN_F = (rand() % TAM_F);

    return figura[RAN_F];
}

void calcularPuntajesPlayers(string player, int &puntosPlayer, string naipe_ActualP[], int TAM_N, string figura_ActualP[], int TAM_A, string embaucadora)
{
    cout << player << ": ";
    for (int i = 0; i < 5; i++)
    {
        if (figura_ActualP[i] != embaucadora)
        {
            if (naipe_ActualP[i] == "10")
            {
                cout << " 10 ";
                puntosPlayer += 10;
            }
            else if (naipe_ActualP[i] == "J")
            {
                cout << " 11 ";
                puntosPlayer += 11;
            }
            else if (naipe_ActualP[i] == "Q")
            {
                cout << " 12 ";
                puntosPlayer += 12;
            }
            else if (naipe_ActualP[i] == "K")
            {
                cout << " 15 ";
                puntosPlayer += 15;
            }
            else if (naipe_ActualP[i] == "A")
            {
                cout << " 20 ";
                puntosPlayer += 20;
            }
        }
    }
    cout << " = " << puntosPlayer << " puntos." << endl;
}

void mostrarEstadisticas()
{

    cout << "ESTADÍSTICAS:" << endl;
    cout << endl;
}

void mostrarCreditos()
{
    cout << "CREDITOS: " << endl;
    cout << endl;
}
