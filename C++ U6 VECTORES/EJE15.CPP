#include <iostream>
#include <locale.h>
using namespace std;

/*15)
Dada una lista de 5 números, cargarlos en un vector. Armar luego otro vector de 9 elementos donde por cada 2 elementos del vector original
intercale el promedio de ellos. Por ejemplo: [2, 4, 6, 8, 10],  el vector queda: [2, 3, 4, 5, 6, 7, 8, 9, 10].*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numVector[5], promVec[9];

    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese un número: ";
        cin >> numVector[i];
    }

    for (int x = 0; x < 9; x++)
    {
        if (x % 2 == 0)
        {
            promVec[x] = numVector[x / 2];
        }
    }

    for (int m = 0; m < 9; m++)
    {
        if (m % 2 != 0)
        {
            promVec[m] = (promVec[m-1] + promVec[m+1]) / 2;
        }
    }

    cout << "Vectores y su promedio:";

    for (int z = 0; z < 9; z++)
    {
        cout << " " << promVec[z];
    }

    return 0;
}