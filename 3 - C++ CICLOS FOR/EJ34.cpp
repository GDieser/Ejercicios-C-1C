#include <iostream>
using namespace std;

/*
Desaf�o

Tu sobrina est� aprendiendo las tablas de multiplicar y quisiera disponer de un programa para
que pueda corroborar que las cuentas realizadas en su cuaderno sean correctas. Ella sabe que est�s
estudiando programaci�n en la universidad y le parece que es algo que no deber�a llevarte m�s que unos pocos minutos.
Puntualmente te pidi� que puedas ingresar un n�mero entre 1 y 15 y dibuje por pantalla las tablas de
dicho n�mero desde el 0 hasta el 10 inclusive.

*/

int main(){

    int x, n, mult;

    cout << "Ingrese un numero para multiplicar (entre 1 y 15) " << endl;
    cin >> n;

    if( n > 1 ){
        if( n <= 15 ){
            for( x = 1; x <= 10; x++ ){

                mult = n * x;

                cout << n << " x " << x << " = " << mult <<endl;
            }
        }
        else{
            cout << "Valor no valido" << endl;
        }
    }
    else{
        cout << "Valor no valido" << endl;
    }
}
