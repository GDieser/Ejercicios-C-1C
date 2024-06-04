#include <iostream>
#include <locale.h>
using namespace std;

/*3)
Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el valor máximo y su posición dentro del vector.*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numero, vecNum[10], maximo, posicion;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un número: ";
        cin >> numero;
        cout << endl;

        vecNum[i] = numero;
    }

    for (int x = 0; x < 10; x++)
    {
        if (x == 0)
        {
            maximo = vecNum[x];
            posicion = x + 1;

        }else if( vecNum[x] > maximo)
        {
            maximo = vecNum[x];
            posicion = x + 1;
        }
    }

    cout << "El valor maximo fue: " << maximo << " . Ubicación dentro de los vectores: " << posicion << endl;

    return 0;
}