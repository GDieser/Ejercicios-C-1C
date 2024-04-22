#include <iostream>

using namespace std;

/*Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, informar el máximo de los negativos y el mínimo de los
positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0.
Máximo Negativo: -3.
Mínimo Positivo: 2.*/

int main()
{
    int num, maxNegativo = 0, minPositivo = 0;

    cout<< "Ingrese un numero: "<<endl;
    cin>>num;

    while( num != 0 ){

        if( num > 0 ){
            if( minPositivo == 0 ){
                minPositivo = num;
            }
            else if ( num < minPositivo ){
                minPositivo = num;
            }
        }
        else if( maxNegativo == 0){
            maxNegativo = num;
        }
        else if( num > maxNegativo ){
            maxNegativo = num;
        }

        cout<< "Ingrese un numero: "<<endl;
        cin>>num;
    }

    cout<< "Maximo Negativo: " << maxNegativo << ", Minimo Positivo: " << minPositivo <<endl;

    return 0;
}
