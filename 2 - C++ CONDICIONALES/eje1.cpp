#include <iostream>

using namespace std;

/*Hacer un programa para ingresar por teclado un número y luego emitir por
pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
Importante: Verifique que el programa emita UN SOLO CARTEL.
*/

int main()
{
    int n1;

    cout << "Ingrese un numero: ";
    cin >> n1;

    if( n1 > 0 ){
        cout << "El numero ingresado es positivo: " << n1;
    }
    else{
        if( n1 < 0 ){
            cout << "El numero ingresado es negativo: " << n1;
        }
        else{
                cout << "El numero ingresado es cero: " << n1;
        }
    }
    return 0;
}
