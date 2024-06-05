#include <iostream>
#include <locale.h>
using namespace std;

/*13)
Dada una lista de 10 números, cargarlos en un vector. Luego contar y listar la cantidad de números pares que aparecen en el vector.*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numVect[10], contPares = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un número: ";
        cin >> numVect[i];
    }

    for (int x = 0; x < 10; x++)
    {
        if (numVect[x]%2 == 0)
        {
            contPares++;
        }
    }

    cout << "Se ingresaron " << contPares << " de número pares, y son:";

    for (int z = 0; z < 10; z++)
    {
        if(numVect[z]%2 == 0)
        {
            cout << " " << numVect[z];
        }
        
    }
    
    return 0;
}