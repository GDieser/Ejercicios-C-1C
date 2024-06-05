#include <iostream>
#include <locale.h>
using namespace std;

/*14)
Dada una lista de 10 números, cargarlos en un vector. Luego contar y listar la cantidad de números primos que aparecen en el vector.*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numVect[10], contPrimos = 0, primo = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un número: ";
        cin >> numVect[i];
    }

    for (int x = 0; x < 10; x++)
    {
        for (int y = 1; y <= numVect[x]; y++)
        {
            if (numVect[x] % y == 0)
            {
                contPrimos++;
            }

        }
        if (contPrimos == 2)
        {
            primo++;
        }

        contPrimos = 0;
    }

    cout << "Se ingresaron " << primo << " de número pares, y son:";

    for (int z = 0; z < 10; z++)
    {
        for (int m = 1; m <= numVect[z]; m++)
        {
            if (numVect[z] % m == 0)
            {
                contPrimos++;
            }
        }
        if (contPrimos == 2)
        {
            cout << " " << numVect[z];
        }
        contPrimos = 0;
    }

    return 0;
}