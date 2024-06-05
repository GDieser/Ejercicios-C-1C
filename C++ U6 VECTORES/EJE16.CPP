#include <iostream>
#include <locale.h>
using namespace std;

/*16)
Dada una lista de 10 números, cargarlos en un vector. Luego detectar si en el vector hay algún elemento repetido y,
en caso de haberlo, indicarlo con un cartel “Hay Repetidos”.*/

int Repetidos(int vector[])
{

    int vectorClon, contador = 0;
    bool bandera = false;

    for (int i = 0; i < 10; i++)
    {
        vectorClon = vector[i];

        for (int z = 0; z < 10; z++)
        {
            if (vectorClon == vector[z])
            {
                contador++;
            }
        }

        if (contador > 2)
        {
            bandera = true;
        }

        contador = 0;
    }

    return bandera;
}

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numVect[10];
    bool contRepetidos;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un número: ";
        cin >> numVect[i];
    }

    contRepetidos = Repetidos(numVect);

    if (contRepetidos)
    {
        cout << "Hay repetidos!" << endl;
    }
    else
    {
        cout << "No hay repetidos!" << endl;
    }

    return 0;
}