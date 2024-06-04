#include <iostream>
#include <locale.h>
using namespace std;

/*5)
Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el menor de los impares y el mayor de los pares.
Suponer que habrá al menos un número par y uno impar.*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int vecNum[10], menorImpar, mayorPar = 0;
    bool menImpar = true;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un número: ";
        cin >> vecNum[i];
    }

    for (int x = 0; x < 10; x++)
    {
        if (vecNum[x] % 2 == 0)
        {
            if (vecNum[x] > mayorPar)
            {
                mayorPar = vecNum[x];
            }
        }
        else
        {
            if (menorImpar == true || vecNum[x] < menorImpar)
            {
                menorImpar = vecNum[x];
            }
        }
    }

    cout << "El menor de los impares: " << menorImpar << ". El mayor de los pares: " << mayorPar << endl; 

    return 0;
}