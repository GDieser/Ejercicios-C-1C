#include <iostream>
using namespace std;

/*Hacer un programa para ingresar 10 n�meros, luego informar los 2 mayores valores ingresados,
aclarando cual es el m�ximo y cu�l es el segundo m�ximo descartando los n�meros repetidos.

Ejemplo A: 10, 8,12, 78 ,55, 20, 12, 40, 31, 28 el resultado ser� 78 y 55.
Ejemplo B: -20, - 25, -3, -8, -50, -45, -20, -22, -15, -11 el resultado ser� -3 y -8.
Ejemplo C: 20, 20, 12, 9, 14, 14, 8, 8, 10, 3 el resultado ser� 20 y 14.

En el ejemplo C el valor 20 aparece dos veces, pero s�lo se considera una vez.
*/

int main(){

    int x, n, may, med = 0;
    //bool s = 0;

    for( x = 0; x < 10; x++ ){

        cout << "Ingrese un numero: " << endl;
        cin >> n;

        if( x == 0 ){
            may = n;
        }

        if( n >= may ){
            may = n;
        }
        else{
            if( med == 0){
                med = n;
            }
            else{
                if( n > med ){
                    med = n;
                }
            }
        }

    }

    cout << "El mayor es: " << may << ", y el segundo mayor es: " << med << endl;

}
