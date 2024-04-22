#include <iostream>

using namespace std;

/*Hacer un programa que permita ingresar una lista de números positivos,
negativos o cero hasta que se ingrese el 5º número par.
Calcular e informar:
- La cantidad de ternas de números negativos ingresados de manera
consecutiva.
Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2*/

int main()
{
    int num, contPar = 0, contNegativos = 0, contTerna = 0;

    while( contPar != 5 ){

        cout << "Ingrese un numero: " << endl;
        cin >> num;

        if( num%2 == 0 ){
            contPar++;
        }

        if( num < 0 ){
            contNegativos++;
        }
        else{
            contNegativos = 0;
        }

        if( contNegativos == 3 ){
            contTerna++;
            contNegativos = 0;
        }
    }

    cout << "Cantidad de ternas de numeros negativos consecutivos es: " << contTerna << endl;

    return 0;
}
