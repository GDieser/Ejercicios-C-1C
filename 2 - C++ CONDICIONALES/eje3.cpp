#include <iostream>

using namespace std;
/*Hacer un programa para ingresar por teclado un número y luego informar por
pantalla con un cartel aclaratorio si el mismo es par o impar.
*/

int main()
{
    int n1;

    cout << "Ingrese un numero: ";
    cin >> n1;

    if( n1%2 == 0 ){
            cout << "El numero " << n1 << " es par";
    }
    else{
        cout << "El numero " << n1 << " no es par";
    }

    return 0;
}
