#include <iostream>

using namespace std;

/*Hacer un programa que permita ingresar una lista de números positivos,
negativos o cero hasta que la diferencia entre el máximo y el mínimo sea mayor
a 10. Calcular e informar:
- La cantidad de números que componen la lista.
Ejemplo A: 1, 4, 6, -10 → Cantidad de números: 4
Ejemplo B: 100, 104, 106, 100, 100, 105, 200 → Cantidad de números: 7*/

int main()
{
    int num, minimo = 0, maximo = 0, contador = 0, diferencia = 0;

    while( diferencia < 10 ){

        cout << "Ingrese un numero: " << endl;
        cin >> num;

        if( maximo == 0 ){
            maximo = num;
        }
        else if( num > maximo ){
            if( minimo == 0 ){
                minimo = maximo;
                maximo = num;
            }
            maximo = num;
        }
        else if( minimo == 0){
                minimo = num;
            }
            else if( num < minimo){
                minimo = num;
            }

        if( minimo != 0 ){
            diferencia = maximo - minimo;
        }

        contador++;
    }

    cout << "Cantidad de numeros: " << contador << endl;

    return 0;
}
