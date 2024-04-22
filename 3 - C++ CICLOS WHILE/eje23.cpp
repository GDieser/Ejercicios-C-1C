#include <iostream>

using namespace std;

/*Dada una lista de números que finaliza cuando se ingresa un número divisible
por 7, informar cual es el anteúltimo y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 10, 5, 18, 14 se informa -5 y 5.
Nota: Contemplar la posibilidad que podría no haber números impares en la
lista.*/

int main()
{
    int num, anteUltimo = 0, ultimo = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    while( num%7 !=0 ){

        if( num%2 != 0){
            anteUltimo = ultimo;
            ultimo = num;
        }

        cout << "Ingrese un numero: " << endl;
        cin >> num;
    }

    if( ultimo == 0 ){
        cout << "No se ingresaron numeros impares" << endl;
    }
    else if( anteUltimo == 0 ){
        cout << "Ultimo impar ingresados: " << ultimo << endl;
    }
    else{
        cout << "Anteultimo impar: " << anteUltimo << ", Ultimo impar: " << ultimo << endl;
    }

    return 0;
}
