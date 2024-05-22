#include <iostream>

using namespace std;

/* 5) Hacer una función llamada Redondear que reciba como parámetro un número
float y devuelva un número entero con el redondeo del mismo.

Por ejemplo:
Si recibe 7.78, debe devolver 8.
Si recibe 7.48, debe devolver 7.
Si recibe 7.5, debe devolver 8.

Hacer un programa para ingresar un número y, utilizando Redondear, emita
luego un cartel indicando el número redondeado.
*/

int Redondeo( float num){

    int numero;

    numero = num;
    num = num - numero;

    if (num >= 0.5)
    {
        num = numero + 1;
    }else
    {
        num = numero;
    }

    return num;
    
}

int main()
{   
    int r;
    float num;

    cout << "Ingrese un número: " << endl;
    cin >> num;

    r = Redondeo(num);

    cout << "El entero final es: " << r << endl;

    return 0;
}
