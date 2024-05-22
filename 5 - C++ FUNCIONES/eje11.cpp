#include <iostream>

using namespace std;

/* 11) Hacer una función llamada contarDigitos que reciba por valor un número
entero y determine y devuelva la cantidad de dígitos del número. Por ejemplo,
si se recibe el número 840 debe devolver 3.

Hacer un programa que, a partir de un número que ingresa el usuario, informe
por pantalla la cantidad de dígitos del número ingresado.
*/

int contarDigitos( int d){

    int cont = 1; 

    if (d < 0)
    {
        d = d * -1;
    }

    while (d > 9)
    {
        d = d/10;
        cont++;
    }

    return cont;
    
}

int main()
{   
    int digito, r;

    cout << "Ingrese un número: " << endl;
    cin >> digito;

    r = contarDigitos(digito);

    cout << "El número contiene: " << r << " dígito/s" << endl;

    return 0;
}
