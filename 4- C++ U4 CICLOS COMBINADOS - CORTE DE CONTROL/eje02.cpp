#include <iostream>

using namespace std;

/*2
Hacer un programa para ingresar una lista de 10 números y luego informar cuántos de los números ingresados son primos. 
Se informa 1 resultado al final.
*/

int main()
{
    int num, cont = 0, i, y, primo = 0;

    for ( i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> num;

        for ( y = 1; y <= num; y++)
        {
            if (num % y == 0 )
            {
                cont++;
            }
        }

        if (cont == 2)
        {
            primo++;
        }
        cont = 0;
        
    }
    cout << "La cantidad de primos son: " << primo << endl;

    return 0;
}
