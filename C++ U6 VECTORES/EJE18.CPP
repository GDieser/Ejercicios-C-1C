#include <iostream>
#include <locale.h>
using namespace std;

/*18)
Dada una lista de 10 números, cargarlos en un vector. Luego ingresar dos números a y b menores a 10.
Determinar e informar cuál es el valor máximo en el vector considerando los elementos que están entre las posiciones a y b.*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numeroA, numeroB, vecNum[10], maximo = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un número: ";
        cin >> vecNum[i];
    }

    cout << "Ingrese en número A: ";
    cin >> numeroA;

    cout << "Ingrese en número B: ";
    cin >> numeroB;

    if (numeroA > numeroB)
    {
        for (int x = numeroB; x < numeroA; x++)
        {
            if (maximo == 0 || vecNum[x] > maximo)
            {
                maximo = vecNum[x];
            }
        }
    }
    else
    {
        for (int x = numeroA; x < numeroB; x++)
        {
            if (maximo == 0 || vecNum[x] > maximo)
            {
                maximo = vecNum[x];
            }
        }
    }

    cout << "El valor maximo es: " << maximo;

    return 0;
}