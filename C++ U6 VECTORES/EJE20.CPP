#include <iostream>
#include <locale.h>
using namespace std;

/*20)
Dadas dos listas de 5 números cada una y sin números repetidos, cargarlas en dos vectores. 
Generar un tercer vector que contenga los elementos de ambos vectores intercalados. Mostrar en pantalla el nuevo vector.

Vector 1: [8, 10, -3, 5, 7]
Vector 2: [20, -8, 10, 9, 3]
Vector 3: [8, 20, 10, -8, -3, 10, 5, 9, 7, 3]
*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numVec1[5], numVec2[5], vecIntercalado[10], contImp = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese un número Vector 1: ";
        cin >> numVec1[i];

        cout << "Ingrese un número Vector 2: ";
        cin >> numVec2[i];
    }

    for (int x = 0; x < 10; x++)
    {
        if (x%2 == 0)
        {
            vecIntercalado[x] = numVec1[x/2];
        }else
        {
            vecIntercalado[x] = numVec2[contImp];
            contImp++;
        }
    }

    cout << "Vector intercalado:";

    for (int z = 0; z < 10; z++)
    {
        cout << " | " << vecIntercalado[z];
    }
    
    return 0;
}