#include <iostream>
#include <locale.h>
using namespace std;

/*19)
Dadas dos listas de 10 números cada una y sin números repetidos, cargarlas en dos vectores. 
Generar un tercer vector que contenga solamente aquellos elementos que están repetidos en ambos vectores. Mostrar en pantalla el nuevo vector. 

Vector 1: [8, 10, -3, 5, 7]
Vector 2: [10, -8, 5, 9, -3]
Vector 3: [10, -3, 5]
*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numVec1[10], numVec2[10], vecRepetidos[10], contRepetidos = 0, contRepetidos2 = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un número Vector 1: ";
        cin >> numVec1[i];

        cout << "Ingrese un número Vector 2: ";
        cin >> numVec2[i];
    }

    for (int z = 0; z < 10; z++)
    {
        for (int x = 0; x < 10; x++)
        {
            if (numVec1[z] == numVec2[x])
            {
                contRepetidos++;
            }   
        }
    }

    for (int m = 0; m < 10; m++)
    {
        for (int y = 0; y < 10; y++)
        {
            if (numVec1[m] == numVec2[y])
            {
                vecRepetidos[contRepetidos2] = numVec1[m];
                contRepetidos2++;
            }   
        }
    }

    cout << "Vectores repetidos: ";

    for (int c = 0; c < contRepetidos; c++)
    {
        cout << " | " << vecRepetidos[c];
    }
    
    return 0;
}