#include <iostream>
using namespace std;

/*Dada una lista de 10 n�meros informar la cantidad de duplas de n�meros impares que se
hayan ingresado consecutivamente.
Ejemplo A: 12, 3, 5, 7, 6, 9, 13, 10, 7, -5.

En esta lista las duplas son: 3:5, 5:7, 9:13, 7:-5 por lo tanto se informar� que hay 4
duplas de n�meros impares ingresados consecutivamente.

Ejemplo B: 3, 5, 7, 10, 3, 5, 7, 10, 3, 5.
En esta lista las duplas son: 3:5, 5:7, 3:5, 5:7, 3:5 por lo tanto se informar� que hay 5
duplas de n�meros impares ingresados consecutivamente.

Aclaraci�n: S�lo hay que listar la cantidad de duplas de impares. No hay que mostrar c�mo
est�n compuestas las duplas de n�meros.
*/

int main(){

    int x, n, cont = 0, contDI = 0;

    for( x = 0; x < 10; x++ ){

        cout << "Ingrese un numero: " << endl;
        cin >> n;

        if( n%2 != 0){
            cont++;
        }
        else{
            cont = 0;
        }

        if( cont == 2 ){
            contDI++;
            cont --;
        }
    }

    cout << "Se ingresaron: "<< contDI << " duplas de numeros impares" << endl;

    return 0;
}
