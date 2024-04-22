#include <iostream>

using namespace std;

/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se
ingresa un cero, luego informar el m�ximo.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo 55.
Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listar� M�ximo -5.*/

int main()
{
    int num, maximo = 0;

    cout<<"Ingrese un numero: "<<endl;
    cin>>num;

    while( num != 0 ){

        if( maximo == 0){
            maximo = num;
        }
        else if( num > maximo ){
            maximo = num;
        }

        cout<<"Ingrese un numero: "<<endl;
        cin>>num;
    }

    cout<<"El maximo es: "<<maximo<<endl;

    return 0;
}
