#include <iostream>
using namespace std;

/*Dada una lista de 7 n�meros todos distintos entre s� determinar e informar con un
cartel aclaratorio si los n�meros primos ingresados en la misma est�n ordenados de menor
a mayor. Los n�meros primos pueden no ser consecutivos, pero s� estar ordenados.

Ejemplo A: 4, 5, 7, 12, 13, 19, 20. Se emite un cartel que diga �Ordenados� ya que los
n�meros primos est�n ordenados: 5, 7, 13, 19.

Ejemplo B: 4, 10, 3, 5, 11, 7, 14. Se emite un cartel que diga �Desordenados� ya
que los n�meros primos no est�n ordenados: 3, 5, 11, 7.
*/

int main(){

    int x, y, n, cont1 = 0, cont2 = 0, cont3 = 0, primoMayor;

    for( x = 0; x < 7; x++ ){

        cout << "Ingrese un numero: " << endl;
        cin >> n;

        for( y = 1; y <= n; y++){

            if( n%y == 0 ){
                cont1++;
            }
        }
        if( cont1 == 2 && cont2 == 0){
            primoMayor = n;
            cont2++;
        }

        if( cont1 == 2 ){
            cont3++;
            if( n > primoMayor ){
                primoMayor = n;
                cont2++;
            }
        }

        cont1 = 0;
    }

    if( cont2 == cont3 ){
        cout << "Ordenado!!!" << endl;
    }
    else{
        cout << "Desordenado..." << endl;
    }
}
