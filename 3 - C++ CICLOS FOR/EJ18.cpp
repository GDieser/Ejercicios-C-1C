#include <iostream>
using namespace std;

/*Hacer un programa para ingresar un n�mero y luego informar todos los divisores
pares de ese n�mero.
Ejemplo A. Si se ingresa 6 se listar�: 2 y 6. Ejemplo B. Si se ingresa 8 se listar�:
2, 4 y 8. Ejemplo C. Si se ingresa 11 no se listar� nada.
*/

int main(){

    int x, n;

    cout << "Ingrese un numero: " << endl;
    cin >> n;

    for( x = 1; x <= n; x++ ){

        if( n%x == 0){
            if( x%2 == 0){
                cout << "El numero: " << x << " es divisor par de: " << n << endl;
            }
        }
    }

    return 0;

}
