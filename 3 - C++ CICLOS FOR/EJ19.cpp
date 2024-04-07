#include <iostream>
using namespace std;

/*Hacer un programa para ingresar un número y luego informar la cantidad de divisores de ese número.
Ejemplo A. Si se ingresa 6 se listará: 4 divisores.
Ejemplo B. Si se ingresa 9 se listará: 3 divisores.
Ejemplo C. Si se ingresa 11 se listará: 2 divisores.
*/

int main(){

    int x, n, cont = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> n;

    for( x = 1; x <= n; x++ ){

        if( n%x == 0){
            cont++;
        }
    }

    cout << "El numero de divisores posibles es: " << cont << endl;

    return 0;

}
