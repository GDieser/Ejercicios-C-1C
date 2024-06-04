#include <iostream>
#include <locale.h>
using namespace std;

/*2)
Leer 10 números y guardarlos en un vector. Calcular el promedio y luego mostrar por pantalla los valores que son mayores al promedio.*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numero, numVec[10], promedio;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un número: ";
        cin >> numero;

        numVec[i] = numero;
    }

    for (int x = 0; x < 10; x++)
    {
        promedio += numVec[x];
    }

    promedio = promedio / 10;

    for (int z = 0; z < 10; z++)
    {
        if (numVec[z] > promedio)
        {
            cout << "El vector " << z + 1 << " con valor: " << numVec[z] << " es mayor que el promedio: " << promedio << endl;
        }
    }

    return 0;
}