#include <iostream>
#include <locale.h>
using namespace std;

/*12)
Dada una lista de 10 números, cargarlos en un vector. Luego ingresar un número e informar la cantidad de veces que ese número aparece en el vector.*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numVect[10], numero, indice = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un número: ";
        cin >> numVect[i];
    }

    cout << "Ingrese un número para buscar en los vectores: ";
    cin >> numero;

    for (int x = 0; x < 10; x++)
    {
        if (numVect[x] == numero)
        {
            indice++;
        }
    }

    cout << "Se encontraron: " << indice << " coincidencias.";
    
    return 0;
}