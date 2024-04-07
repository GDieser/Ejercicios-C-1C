#include <iostream>

using namespace std;

/*Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por
teclado la longitud de los tres lados de un triángulo y luego listar qué tipo de
triángulo es:
- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.
*/

int main()
{
    int a, b, c;

    cout << "Ingrese el primer lado del triangulo: " << endl;
    cin >> a;

    cout << "Ingres el segundo lado del triangulo: " << endl;
    cin >> b;

    cout << "Ingres el tercer lado del triangulo: " << endl;
    cin >> c;

    if( a == b){
        if( b == c ){
            cout << "El triagulo es: EQUILATERO";
        }
        else{
            cout << "El triagulo es: ISOSELES";
        }
    }
    else{
        if( b == c ){
            cout << "El triagulo es: ISOSELES";
        }
        else{
            cout << "El triagulo es: ESCALENO";
        }
    }

    return 0;
}
