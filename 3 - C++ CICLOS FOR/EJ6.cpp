#include <iostream>
using namespace std;

/* Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una
lista y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos
Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará:  Cantidad
de Positivos: 4
Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará:
Cantidad de Positivos: 0
*/

int main(){

    int x, cant, n1, cont = 0;

    cout << "Ingrese cantidad de numero que componen la lista: " << endl;
    cin >> cant;

    for( x = 0 ; x < cant; x++){

        cout << "Ingrese un numero: " << endl;
        cin >> n1;

        if(n1 > 0){
            cont++;
        }
    }

    cout << "La cantidad de numeros positivos es: " << cont <<endl;

    return 0;
}
