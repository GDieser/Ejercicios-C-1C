#include <iostream>
using namespace std;

/*Dada una lista de 10 n�meros informar cual es el m�ximo de los pares.
Ejemplo A: 2, 10, 20, 8, 25, 13, 36, - 8, -5, 20 se informa m�ximo: 36
Ejemplo B 5, -13, 23, 81, -55, -13, 55, 4, 15 ,-20 Se informa m�ximo: 4
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20 se informa m�ximo: -8
*/

int main(){

    int x, n, may = 0;

    for( x = 0; x < 10; x++ ){

        cout << "Ingrese un numero: " << endl;
        cin >> n;

        if( n%2 == 0){
            if( x == 0){
                may = n;
            }
            else{
                if( may == 0 ){
                    may = n;
                }
                else{
                    if( n > may){
                        may = n;
                    }
                }
            }
        }
    }

    cout << "El maximo de los pares ingresados es: " << may << endl;

}
