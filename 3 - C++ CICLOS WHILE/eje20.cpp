#include <iostream>

using namespace std;

/*Dada una lista de números que finaliza cuando se ingresa un cero, informar el
primer número par ingresado y su ubicación en la lista y el último de los
números primos y su ubicación en la lista.
Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa Primer número par: 4 ubicación 2.
Último primo: 13 ubicación 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa Primer número par: 6 ubicación 7.
Último primo: 13 ubicación 5.*/

int main()
{
    int num, x, contador = 1, par = 0, ubiPar, primo, ubiPrimo, contPrimo = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    while( num != 0 ){

        if( num%2 == 0){
            if( par == 0 ){
                par = num;
                ubiPar = contador;
            }
        }

        for( x = 1; x <= num; x++ ){

            if( num%x == 0 ){
                contPrimo++;
            }
        }

        if( contPrimo == 2 ){
            primo = num;
            ubiPrimo = contador;
        }

        contPrimo = 0;
        contador ++;

        cout << "Ingrese un numero: " << endl;
        cin >> num;
    }

    cout << "Primer par: " << par << ", ubicacion: " << ubiPar << endl;

    cout << "Ultimo primo: " << primo << ", ubicacion: " << ubiPrimo << endl;

    return 0;
}
