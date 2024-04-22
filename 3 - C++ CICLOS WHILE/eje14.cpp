#include <iostream>

using namespace std;

/*Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, informar si todos están ordenados en forma creciente. En caso
de haber dos números “empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto
Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No
Ordenado”*/

int main()
{
    int num, maximo = 0, contador = 0, contTotal = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    while( num != 0 ){
        if( maximo == 0){
            maximo = num;
            contador++;
        }
        else if( num >= maximo ){
            maximo = num;
            contador++;
        }
        contTotal++;

        cout << "Ingrese un numero: " << endl;
        cin >> num;

    }

    if( contador == contTotal ){

        cout << "Conjunto ingresado: Ordenado" << endl;
    }
    else{
        cout << "Conjunto ingresado: Desordenado" << endl;
    }

    return 0;
}
