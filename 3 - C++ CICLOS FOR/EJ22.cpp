#include <iostream>
using namespace std;

/*Dada una lista de 7 n�meros informar el primer n�mero par ingresado y su
ubicaci�n en la lista y el �ltimo de los n�meros primos y su ubicaci�n en la lista.
Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa:
Primer n�mero par: 4 ubicaci�n 2. �ltimo primo: 13 ubicaci�n 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa:
Primer n�mero par: 6 ubicaci�n 7. �ltimo primo: 13 ubicaci�n 5
*/

int main(){

    int x, y, n, par, primo, ubi = 0, ubi2 = 0, cont = 0;

    for( x = 1; x <= 7; x++ ){

        cout << "Ingrese un numero: " << endl;
        cin >> n;

        if( n%2 == 0 && ubi == 0){
            par = n;
            ubi = x;
        }

        for( y = 1; y <= n; y++ ){
            if( n%y == 0){
                cont++;
            }
        }
        if( cont == 2){
            primo = n;
            ubi2 = x;
            cont = 0;
        }
        else{
            cont = 0;
        }
    }

    cout << "El primer par ingresado es: " << par << " en la ubicacion: " << ubi << endl;

    cout << "El ultimo primo ingresado es: " << primo << " en la ubicacion: " << ubi2 << endl;

    return 0;

}
