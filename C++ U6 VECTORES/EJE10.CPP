#include <iostream>
#include <locale.h>
using namespace std;

/*10)
Dada una lista de 20 números, cargarlos en un vector. Determinar e informar la cantidad de “rupturas” que tiene el vector con respecto 
a un orden estrictamente creciente. Ejemplo: el vector 1,3,4,2,4,4,6,8,1,7,9 tiene 3 rupturas.*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int vecNum[20], ultimo, contRuptura = 0;
    bool ordenado = true;

    for (int i = 0; i < 20; i++)
    {
        cout << "Ingrese un número: ";
        cin >> vecNum[i];
    }

    for (int x = 0; x < 20; x++)
    {
        if ( x == 0 || vecNum[x] > ultimo)
        {
            ultimo = vecNum[x];
            ordenado = true;
        }else
        {
            ordenado = false;
            contRuptura++;
            ultimo = vecNum[x];
        }
        
    }

    cout << "Cantidad de rupturas: " << contRuptura << endl;

    
    
    return 0;
}