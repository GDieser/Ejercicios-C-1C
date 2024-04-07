#include <iostream>
using namespace std;

/*Dada una lista de 7 numeros informar cual es el primer, el segundo, el anteultimo y
el ultimo numero impar ingresado.
Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7, Anteultimo
impar: 9 y ultimo impar: 5.
*/

int main(){

    int n1,cont = 0, p, s, u, a;

    for( int x = 1; x<8; x++ ){

        cout << "Ingrese un numero: "<< endl;
        cin >> n1;

        if( n1 % 2 != 0 ){
            cont++;
            if(cont == 1){
                p = n1;
                u = n1;
            }
            else{
                if (cont == 2){
                    s = n1;
                    a = u;
                    u = n1;
                }
                else{
                    if(cont == 3){
                        u = n1;
                        a = s;
                    }
                    else{
                        if( cont >= 4 ){
                            a = u;
                            u = n1;
                        }
                    }
                }
            }
        }
    }

    cout << "Primer impar: " << p <<", Segundo impar: "<< s << ", Anteultimo: " << a << " y Ultimo: " << u << endl;

    return 0;

}
