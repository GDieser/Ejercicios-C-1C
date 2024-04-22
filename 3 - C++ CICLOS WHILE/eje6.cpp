#include <iostream>

using namespace std;

/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se
ingresa un cero, luego informar cu�ntos son positivos y cu�ntos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listar� Positivos: 4 Negativos: 2.
Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7.*/

int main()
{
    int num, contPositivo = 0, contNegativo = 0;

    cout<<"Ingrese un numero: "<<endl;
    cin>>num;

    while( num != 0){

        if( num > 0 ){
            contPositivo++;
        }
        else{
            contNegativo++;
        }

        cout<<"Ingrese un numero: "<<endl;
        cin>>num;
    }

    cout<<"Cantidad de positivos: "<<contPositivo<<", cantidad de negativos: "<<contNegativo<<endl;
    return 0;
}
