#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y el mínimo.
Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15.
Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo -42.
Observe que los tres ejemplos dejan en claro que la suposición de que el máximo “seguramente” es
un positivo y el mínimo “seguramente” es un negativo, queda totalmente descartada.
*/

int main(){

    int x, n, men, may;

    for( x = 0; x < 10; x++){

        cout << "Ingrese un numero: "<< endl;
        cin >> n;

        if( x == 0){
            may = n;
            men = n;
        }

        if ( n > may){
            may = n;
        }
        else{
            if( n < men){
                men = n;
            }
        }
    }

    cout << "El maximo ingresado es: "<< may << ", el minimo ingresado: "<< men <<endl;

    return 0;

}
