#include <iostream>

using namespace std;

/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se
ingresan dos n�meros consecutivos iguales, y luego informar el m�ximo.
Cuando se ingresa el n�mero repetido el mismo debe ser descartado.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 22, 22. Se listar� M�ximo 35.
En este caso, el segundo n�mero 22 no se analiza, solo sirve para finalizar el
ingreso.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 33, 33. Se listar� M�ximo 55.
En este caso, el segundo n�mero 33 no se analiza, solo sirve para finalizar el
ingreso.
Ejemplo C: 5, 10, 20, 8, 55, 13, 55, -8, -5, 88, 88. Se listar� M�ximo 88.
En este caso, el segundo n�mero 88 no se analiza, solo sirve para finalizar el
ingreso.*/

int main()
{
    int num1, num2, maximo = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> num1;

    while( num1 != num2 ){

        if( maximo == 0 ){
            maximo = num1;
        }
        else if( num1 > maximo ){
            maximo = num1;
        }

        num2 = num1;

        cout << "Ingrese un numero: " << endl;
        cin >> num1;
    }

    cout << "El maximo ingresado es: " << maximo << endl;

    return 0;
}
