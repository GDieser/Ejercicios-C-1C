#include <iostream>
#include <locale.h>
using namespace std;

/*7)
Hacer un programa para llenar un vector de 10 elementos con el formato: 1, 0, 1, 0, 1, 0, 1, 0, 1, 0. 
Luego mostrar los números por pantalla. EL USUARIO NO INGRESA NINGÚN VALOR EN ESTE PROGRAMA.*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int vecNum[10];

    for (int i = 0; i < 10; i++)
    {
        if (i%2 == 0)
        {
            vecNum[i] = 1;
        }
        else
        {
            vecNum[i] = 0;
        }
    }

    for (int x = 0; x < 10; x++)
    {
        cout << "Vector " << (x + 1) << " : " << vecNum[x] << endl;
    }
    
    return 0;
}