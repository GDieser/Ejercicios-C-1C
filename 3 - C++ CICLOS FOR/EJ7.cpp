#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de 10 números, luego informar cuántos
son positivos, cuántos son negativos, y cuántos iguales a cero.
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.

*/

int main(){

    int x, n, contP = 0, contN = 0, contC = 0;

    for( x = 0; x < 10; x ++ ){

        cout << "Ingrese un numero: " << endl;
        cin >> n;

        if(n > 0){
            contP++;
        }
        else{
            if(n < 0){
                contN++;
            }
            else{
                contC++;
            }
        }
    }

    cout << "Cantidad de Positivos: " << contP << endl;
    cout << "Cantidad de Negativos: " << contN << endl;
    cout << "Cantidad de Ceros: " << contC << endl;

}
