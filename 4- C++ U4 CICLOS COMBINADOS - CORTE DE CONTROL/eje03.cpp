#include <iostream>

using namespace std;

/*3
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero y luego informar el porcentaje de números 
primos y el porcentaje de números no primos. Se informan 2 resultados al final.
*/

int main()
{
    int num, i, cont = 0, primo = 0, porcentaje1, porcentaje2, totales = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    while (num != 0)
    {
        for (i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                cont++;
            }
        }
        if (cont == 2)
        {
            primo++;
        }
        totales++;
        cont = 0,
        
        cout << "Ingrese un numero: " << endl;
        cin >> num;
    }

    porcentaje1 = (primo * 100)/totales;
    porcentaje2 = 100 - porcentaje1;

    cout << "Porcentaje de primos: " << porcentaje1 << "%, Porcentaje de NO primos: " << porcentaje2 << "%"  <<endl;
    

    return 0;
}
