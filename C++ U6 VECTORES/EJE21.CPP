#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

/*21)
Hacer un programa para ingresar las encuestas de edad efectuadas a 200 personas y
luego listar la cantidad de personas en cada rango
de edad según la siguiente tabla.

Década 0.	(Edad 1-9)	Cantidad de encuestados: 99
Década 1.	(Edad 10-19)	Cantidad de encuestados: 99
……………………………
Década 9.	(Edad 90-99)	Cantidad de encuestados: 99*/

int encuestas();

void encuestasTotales(int vect[], int tam);

int main()
{
    // Seed
    srand(time(0));

    setlocale(LC_ALL, "Spanish");

    const int TAM = 10;
    int rangos[TAM] = {}, encuesta;

    encuestasTotales(rangos, TAM);

    for (int i = 0; i < 10; i++)
    {
        cout << "Década " << (i) << " cantidad encuestados: " << rangos[i] << endl;
    }

    return 0;
}


int encuestas()
{
    int encuesta;
    encuesta = ((rand() % 9) + 1);
}

void encuestasTotales(int vect[], int tam)
{

    int totales = 200, contVueltas = 0, numAleatorio;

    while (totales > 10)
    {
        while (contVueltas < 10 && totales > 10)
        {
            numAleatorio = encuestas();
            totales -= numAleatorio;
            vect[contVueltas] += numAleatorio;
            contVueltas++;
        }
        contVueltas = 0;
    }

    //Que los últimos se carguen en un indice aleatorio
    vect[encuestas()] += totales;
}