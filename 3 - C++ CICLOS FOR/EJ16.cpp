#include <iostream>
using namespace std;

/*Hacer un programa para ingresar 5 n�meros, luego informar los 2 mayores valores ingresados,
aclarando cual es el m�ximo y cu�l el que le sigue.
Ejemplo A: 10, 8, 12, 14, 3 el resultado ser� 14 y 12.
Ejemplo B: 14, 8, 12, 14 ,3 el resultado ser� 14 y 14.
Ejemplo C: -4, -8, -12, -20, -2 el resultado ser� -2 y -4
Ejemplo D: 100, 20, 5, - 15, 70, el resultado ser� 100 y 70

Se recomienda probar el diagrama que vaya a desarrollar con todos los ejemplos, en particular el
Ejemplo D, en el cual el m�ximo de la lista aparece en el primer lugar y que si no se tiene
precauci�n puede llevar a resultados como 100 como m�ximo y 100 como segundo m�ximo.
�ESO ES INCORRECTO! El resultado debe ser 100 y 70
*/

int main(){

    int x, n, may1, may2 = 0;

    for( x = 0; x < 5; x++ ){

        cout << "Ingrese un numero: " << endl;
        cin >> n;

        if( x == 0 ){
            may1 = n;
        }

        if( n >= may1 ){
            if( may2 != 0 ){
                may2 = may1;
            }
            may1 = n;
        }
        else{
            if( may2 == 0){
                may2 = n;
            }
            else{
                if( n > may2){
                    may2 = n;
                }
            }
        }
    }

    cout << "El maximo es: " << may1 << ", y el segundo maximo es: " << may2 << endl;

    return 0;

}
