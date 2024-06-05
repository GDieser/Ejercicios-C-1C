#include <iostream>
#include <locale.h>
using namespace std;

/*11)
Dada una lista de 10 números, cargarlos en un vector. Luego ingresar un número e informar el primer índice donde ese número aparece en el vector.
En caso de no aparecer se mostrará el valor índice igual a -1.*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numVect[10], numero, primerIndice;
    bool indice = true;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un número: ";
        cin >> numVect[i];
    }

    cout << "Ingrese un número para buscar entre los vectores: ";
    cin >> numero;

    for (int x = 0; x < 10; x++)
    {
        if (indice == true && numVect[x] == numero)
        {
            primerIndice = x + 1;
            indice = false;
        }
    }

    if (indice == false )
    {
        cout << "La primer coincidencia fue en el indice: " << primerIndice << endl;
    }
    else
    {
        cout << "Inidice: -1";
    }

    return 0;
}