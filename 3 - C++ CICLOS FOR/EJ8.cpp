#include <iostream>
using namespace std;

/* Hacer un programa para ingresar una lista de 10 números, luego informar el porcentaje
de positivos, negativos, y  ceros.
*/

int main(){

    int x, n, contP = 0, contN = 0, contC = 0, pp, pn, pc;

    for( x = 0; x < 10; x++){

        cout << "Ingrese un numero: " << endl;
        cin >> n;

        if( n > 0 ){
            contP++;
        }
        else{
            if( n < 0 ){
                contN++;
            }
            else{
                contC++;
            }
        }

    }

    pp = (contP * 100)/10;
    pn = (contN * 100)/10;
    pc = (contC * 100)/10;

    cout << "Positivos: " << pp <<"%, Negativos: " << pn << "%, Cero: " << pc << "%" << endl;

    return 0;
}
