#include <iostream>
using namespace std;

/*Hacer un programa que muestre los números primos entre el 1 y el 10000. El usuario no debe
ingresar nada en este programa.
*/

int main(){

    int x, y, cont = 0;;

    for( x = 1; x <= 10000; x++ ){

        for( y = 1; y <= x; y ++ ){
            if( x%y == 0){
                cont++;
            }
        }

        if( cont == 2 ){
            cout << x << endl;
        }
        cont = 0;
    }

}
