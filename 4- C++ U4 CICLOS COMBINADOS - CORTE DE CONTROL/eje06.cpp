#include <iostream>

using namespace std;

/*6
Dada una lista de números todos distintos entre sí y que finaliza con un cero, determinar e informar con un cartel aclaratorio si 
los números primos de la lista están ordenados de menor a mayor. Los números primos pueden no ser consecutivos, pero sí deben estar ordenados.
Por ejemplo:
Ejemplo A: 4, 5, 7, 12, 13, 0. Se emite un cartel que diga “Ordenados” (5, 7 y 13)
Ejemplo B: 2, 10, 3, 5, 11, 7, 14, 0. Se emite un cartel que diga “Desordenados” (2, 3, 5, 11 y 7).
*/

int main()
{
    int num, contPrimo = 0, cont1 = 0, primo = 0, primoMayor, contPrimoFinal = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    while (num != 0)
    {
        for (int i = 1; i <= num; i++)
        {
            if (num%i == 0)
            {
                cont1++;
            }
        }

        if (cont1 == 2)
        {
            contPrimo++;
            if (primo == 0 || num > primo)
            {
                primo = num;
                contPrimoFinal++;
            }
        }
        
        cout << "Ingrese un numero: " << endl;
        cin >> num;

        cont1 = 0;
    }

    if (contPrimoFinal == contPrimo)
    {
        cout << "Ordenados" << endl;
    }else
    {
        cout << "No ordenado" << endl;
    }

    return 0;
}
