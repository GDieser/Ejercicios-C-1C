#include <iostream>

using namespace std;

/*Dada una lista de números que finaliza cuando se ingresa un cero, informar cual
es el primer y segundo número impar ingresado. Ejemplo 8, 4, 5, 6, -9, 5, 7, 0 se
informa 5 y -9*/

int main()
{
    int num, primero, segundo, contador = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    while( num != 0 ){

        if( num%2 != 0 ){
            contador++;
            if( contador == 1 ){
                primero = num;
            }
            else if( contador == 2 ){
                segundo = num;
            }
        }

        cout << "Ingrese un numero: " << endl;
        cin >> num;

    }

    cout << "Primer impar: " << primero << ", Segundo impar: " << segundo << endl;

    return 0;
}
