#include <iostream>

using namespace std;

/*Hacer un programa para ingresar cinco números y listar el máximo y el mínimo
de ellos.*/

int main()
{
    int a, b, c, d, e, may, men;

    cout << "Ingrese el primer numero: " << endl;
    cin >> a;

    cout << "Ingres el segundo numero: " << endl;
    cin >> b;

    cout << "Ingres el tercer numero: " << endl;
    cin >> c;

    cout << "Ingres el cuarto numero: " << endl;
    cin >> d;

    cout << "Ingres el quinto numero: " << endl;
    cin >> e;

    if( a > b ){
        may = a;
        men = b;
    }
    else{
        may = b;
        men = a;
    }

    if( c > may ){
        may = c;
    }
    else{
        if( c < men ){
            men = c;
        }
    }

    if( d > may ){
        may = d;
    }
    else{
        if( d < men ){
            men = d;
        }
    }

    if( e > may ){
        may = e;
    }
    else{
        if( e < men ){
            men = e;
        }
    }

    cout << "El numero mayor ingresado es: " << may << endl;

    cout << "El numero menor ingresado es: " << men << endl;

    return 0;
}
