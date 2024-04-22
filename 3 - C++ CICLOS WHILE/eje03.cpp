#include <iostream>

using namespace std;

/*Hacer un programa para mostrar por pantalla los números del 20 al 1 en orden
decreciente.
Importante: El programa no tiene ningún ingreso de datos.   */

int main()
{
    int num = 20;

    while( num > 0 ){

        cout<<"Numero: "<<num<<endl;
        num --;
    }
    return 0;
}
