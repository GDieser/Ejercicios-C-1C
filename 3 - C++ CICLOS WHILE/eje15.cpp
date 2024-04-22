#include <iostream>

using namespace std;

/*Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, informar los 2 mayores valores ingresados, aclarando cual es el
máximo y cuál el que le sigue.
Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4*/

int main()
{
    int num, mayorP = 0, mayorS = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    while( num != 0 ){

        if( mayorP == 0 ){
            mayorP = num;
        }
        else if( num > mayorP ){
            mayorS = mayorP;
            mayorP = num;
        }
        else if( mayorS == 0 ){
            mayorS = num;
        }
        else if( num > mayorS){
            mayorS = num;
        }

        cout << "Ingrese un numero: " << endl;
        cin >> num;

    }

    cout << "1er Maximo: " << mayorP << ", 2do Maximo: " << mayorS << endl;

    return 0;
}
