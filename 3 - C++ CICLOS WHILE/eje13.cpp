#include <iostream>

using namespace std;

/*Dada una lista de números que finaliza cuando se ingresa un cero, informar cual
es el primer y último número impar ingresado. Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se
informa -5 y 5.*/

int main()
{
    int num, primero = 0, ultimo;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    while( num != 0 ){

        if( num%2 != 0 ){
            if( primero == 0 ){
                primero = num;
            }
            else{
                ultimo = num;
            }
        }

        cout << "Ingrese un numero: " << endl;
        cin >> num;

    }

    cout << "El primer impar es: " << primero << ", el ultimo es: " << ultimo << endl;

    return 0;
}
