#include <iostream>

using namespace std;
/*Hacer un programa para ingresar por teclado dos n�meros y luego informar por
pantalla con un cartel aclaratorio si el primer n�mero es m�ltiplo del segundo.*/

int main()
{
    int a, b;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    if( a%b == 0 ){
            cout << "El primer numero: " << a << " es multiplo del segundo: " << b ;
    }
    else{
        cout << "El primer numero: " << a << " no es multiplo del segundo: " << b ;
    }

    return 0;
}
