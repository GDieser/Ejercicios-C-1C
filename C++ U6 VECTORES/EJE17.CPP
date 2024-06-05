#include <iostream>
#include <locale.h>
using namespace std;

/*17)
Dada una lista de 10 números, cargarlos en un vector. Luego detectar si en el vector hay elementos repetidos y
generar otro vector con los elementos repetidos reemplazados por ceros.

Ejemplo Vector 1: [8, 20, 20, -7, 15, 12, 15, -5, 11, 18]
Ejemplo Vector 2: [8, 0, 0, -7, 0, 12, 0, -5, 11, 18]
*/

int Repetidos(int vector[], int n)
{

    int vectorClon[10], contador = 0, contMas = 0;

    for (int x = 0; x < 10; x++)
    {
        vectorClon[x] = vector[x];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int y = 0; y < 10; y++)
        {
            if (vectorClon[i] == vector[y])
            {
                contador++;
            }

            if (contador > 1)
            {
                vectorClon[y] = 0;
                contador = 1;
                contMas++;
            }
        }
        if (contMas > 0)
        {
            vectorClon[i] = 0;
        }
        contador = contMas = 0;
    }

    cout << "Vector original:";

    for (int x = 0; x < 10; x++)
    {
        cout << " | " << vector[x];
    }

    cout << endl;
    cout << "Vector con repeticiones (si las hay):";

    for (int z = 0; z < 10; z++)
    {
        cout << " | " << vectorClon[z];
    }

    return 0;
}

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numVect[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un número: ";
        cin >> numVect[i];
    }

    Repetidos(numVect, 10);

    return 0;
}