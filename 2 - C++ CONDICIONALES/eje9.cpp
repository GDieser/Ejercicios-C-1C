#include <iostream>

using namespace std;

/*Hacer un programa para ingresar tres números y listar el máximo de ellos.
*/

int main()
{
    int a, b, c, may;

    cout << "Ingrese el primer numero: " << endl;
    cin >> a;

    cout << "Ingres el segundo numero: " << endl;
    cin >> b;

    cout << "Ingres el tercer numero: " << endl;
    cin >> c;

    if( a > b ){
        may = a;
    }
    else{
        may = b;
    }

    if ( c > may ){
        may = c;
    }

    cout << "El numero mayor ingresado es: " << may;

    return 0;
}
