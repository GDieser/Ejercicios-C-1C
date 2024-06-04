#include <iostream>
#include <locale.h>
using namespace std;

/*1)
Hacer un programa para ingresar 10 números y guardarlos en un vector. Determinar e informar cuál es la suma de los valores del vector.
*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numero, numVec[10], suma = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese número para el vector " << (i + 1) << " : ";
        cin >> numero;

        numVec[i] = numero;
    }

    for (int x = 0; x < 10; x++)
    {
        suma += numVec[x];

        cout << "Vector " << (x+1) << " contiene: " << numVec[x] << endl;
    }
    
    cout << "La suma de los vectores es: " << suma << endl;
    
    
    return 0;
}