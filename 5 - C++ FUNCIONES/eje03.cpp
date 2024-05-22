#include <iostream>

using namespace std;

/* 3) Hacer una función llamada EsPrimo que determine si un número es primo o
no. La función debe recibir el número y devolver true si es primo o false si no lo
es. La función no debe mostrar nada por pantalla.

Hacer un programa para ingresar un número y, utilizando EsPrimo, emita luego
un cartel indicando si el número ingresado es primo o no es primo.
*/

bool EsPrimo(int num)
{

    int cont = 0;
    bool primo;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cont++;
        }
    }

    if (cont == 2)
    {
        primo = true;
    }
    else
    {
        primo = false;
    }

    return primo;
}

int main()
{
    int numero, primo;

    cout << "Ingrese un número: " << endl;
    cin >> numero;

    primo = EsPrimo(numero);

    if (primo)
    {
        cout << "Es primo" << endl;
    }
    else
    {
        cout << "No es primo" << endl;
    }

    return 0;
}
