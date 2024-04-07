#include <iostream>
using namespace std;

/*Se ingresa una lista de 10 números y se pide determinar si la lista está formada por
todos números alternados entre pares e impares o impares y pares.
Ejemplo A: 8, 7, 10, -5, 20, 3, -10, 5, -10, -7 se lista el cartel “Alternados”.
Ejemplo B: 5, 12, -5, 10, 13, 40, -11, 6, -7, -6 se lista el cartel “Alternados”.
Ejemplo C: 5, 5, -5, 10, 10, 40, -11, 6, -7, -6 se lista el cartel “No Alternados”.

*/


int main(){

    int x, n, contP = 0, contI = 0;
    bool p = false, i = false;

    for( x = 0; x < 10; x++ ){

        cout << "Ingrese un numero: " << endl;
        cin >> n;

        if( n%2 == 0){
            if( p == false ){
                contP++;
                p = true;
                i = false;
            }
            else{
                contP++;
            }
        }
        else{
            if( i == false ){
                contI++;
                i = true;
                p = false;
            }
            else{
                contI--;
            }
        }
    }

    if( contP == contI ){
        cout << "Los numeros estan alternados!" << endl;
    }
    else{
        cout << "Los numeros NO estan alternados..." << endl;
    }

}
