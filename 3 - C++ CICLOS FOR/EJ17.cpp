#include <iostream>
using namespace std;

/*Hacer un programa para ingresar un número y luego informar todos los
divisores de ese número.
Ejemplo A. Si se ingresa 6 se listarán: 1, 2, 3 y 6
Ejemplo B. Si se ingresa 9 se listarán: 1, 3 y 9.
Ejemplo 3. Si se ingresa 11 se listarán 1 y 11.
*/

int main(){

    int x, n;

    cout << "Ingrese un numero: " << endl;
    cin >> n;

    for( x = 1; x <= n; x++ ){

        if( n%x == 0){
            cout << "El numero: " << x << " es divisor de: " << n << endl;
        }
    }

}
