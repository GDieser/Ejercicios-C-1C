#include <iostream>

using namespace std;

/*1
Hacer un programa para ingresar una lista de 10 números y luego informar cuántos de los números ingresados son perfectos. 
Se informa 1 resultado al final.
*/

int main()
{
    int num, cont = 0, acumulador = 0, r, x, z;

    for ( x = 0; x < 10; x++)
    {
        
        cout << "Ingrese un numero: " << endl;
        cin >> num;

        for ( z = 1; z < num; z++)
        {
            if (num % z == 0 )
            {
                acumulador += z;
            }  
        }

        //r = acumulador - num;

        if( acumulador == num )
        {
            cont++;
        }
        acumulador = 0;
    }
    cout << "Cantidad de perfectos es: " << cont << endl;
    
    return 0;
}
