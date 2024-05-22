#include <iostream>

using namespace std;

/* 9) Escribir una función que reciba un número y retorne 1 si el número recibido es
perfecto y 0 si no es perfecto.

Hacer un programa para que, dada una lista de números que finaliza con cero,
informe cuántos de ellos eran perfectos. Utilizar la función solicitada.
*/

bool Perfecto(int num){

    int acu = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            acu += i;
        }
    }

    cout << acu << endl;

    if (acu == num)
    {
        return true;
    }else
    {
        return false;
    } 
}

int main()
{

    int num, cont = 0;
    bool p;

    cout << "Ingrese un número: " << endl;
    cin >> num;

    while (num != 0)
    {

        p = Perfecto(num);

        if (p)
        {
            cont++;
        }

        cout << "Ingrese un número: " << endl;
        cin >> num;
    }

    if (cont == 0)
    {
        cout << "No se ingresaron perfectos" << endl;
    }else
    {
        cout << "Se ingresaron: " << cont << " número/s perfecto/s." << endl;
    }

    return 0;
}
