#include <iostream>

using namespace std;

/* 4) Hacer una función llamada EsPrimoSophieGermain que reciba un número
entero y determine si el mismo es un número primo de Sophie Germain. Debe
devolver verdadero si lo es y falso si no lo es.
NOTA: En teoría de números, se dice que un número natural es un número
primo de Sophie Germain, si el número n es primo y 2*n+1 también lo es.

Ejemplo:
El número 2 es número primo de Sophie Germain porque:
2 es primo
2*2+1 → 5 es primo.

Hacer un programa para ingresar un número un número y, utilizando
EsPrimoSophieGermain, emita luego un cartel indicando si el número
ingresado es primo Sophie Germain o no lo es.
*/

bool EsPrimoSophieGermain (int num){

    int cont = 0, primerPrimo;
    bool primo;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0 )
        {
            cont++;
        }
    }

    if (cont == 2)
    {
        primerPrimo = 2 * num + 1;
    }
    
    cont = 0;
    for (int x = 1; x <= primerPrimo; x++)
    {
        if (primerPrimo % x == 0)
        {
            cont++;
        }
    }

    if (cont == 2)
    {
        primo = true;
    }else
    {
        primo = false;
    }
    
    return primo;
    
}

int main()
{   
    int numero, primoSophie;

    cout << "Ingrese un número: " << endl;
    cin >> numero;

    primoSophie = EsPrimoSophieGermain(numero);

    if (primoSophie)
    {
        cout << "El número es primo de Sophie Germain " << endl;
    }else
    {
        cout << "El número no es primo de Sophie Germain" << endl;
    }

    return 0;
}
