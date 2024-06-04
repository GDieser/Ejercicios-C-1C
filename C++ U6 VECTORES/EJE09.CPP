#include <iostream>
#include <locale.h>
using namespace std;

/*9)
Dada una lista de 20 números enteros, cargarlos en un vector. Determinar e informar con un cartel aclaratorio si el vector está 
ordenado estrictamente en forma creciente. Por ejemplo: el vector [1, 3, 5, 7, 9] está ordenado estrictamente. El vector [1,  5,  3,  7] no lo está.*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int vecNum[20], ultimo;
    bool ordenado = true;

    for (int i = 0; i < 20; i++)
    {
        cout << "Ingrese un número: ";
        cin >> vecNum[i];
    }

    for (int x = 0; x < 20; x++)
    {
        if ( x == 0 || vecNum[x] > ultimo && ordenado == true)
        {
            ultimo = vecNum[x];
            ordenado = true;
        }else
        {
            ordenado = false;
        }
        
    }

    if (ordenado)
    {
        cout << "Vectores ordenados!" << endl;
    }else
    {
        cout << "Vectores no ordenados!" << endl;
    }
    
    return 0;
}