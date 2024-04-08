#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de 8 números y luego informar si todos están
ordenados en forma creciente. En caso de haber dos números “empatados” considerarlos como
crecientes.
Por ejemplo si la lista fuera:
Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”
*/

int main(){

    int x, n, cont = 0, men;

    for( x=0; x<8; x++){

        cout << "Ingrese un numero: "<< endl;
        cin >> n;

        if(x == 0){
            men = n;
        }

        if(n >= men){
            cont++;
        }

    }

    if( cont == 8 ){
        cout << "Conjunto ordenado..."<< endl;
    }
    else{
        cout << "Conjunto no ordenado..."<< endl;
    }

}
