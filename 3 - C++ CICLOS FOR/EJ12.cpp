#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de 10 n�meros e informar el m�ximo de
los negativos y el m�nimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. M�ximo Negativo -3. M�nimo Positivo 2.
*/

int main(){

    int x, n, may = 0, men = 0;

    for( x = 0; x < 10; x++){

        cout << "Ingrese un numero" << endl;
        cin >> n;

        if(x == 0 && n > 0){
            men = n;
        }
        else{
            if(x == 0 && n < 0){
                may = n;
            }
        }

        if(n > 0){
            if(men == 0){
                men =n;
            }
            else{
                if(n < men){
                men = n;
            }

            }
        }
        else{
            if(may == 0){
                may = n;
            }
            else{
                if(n > may){
                    may = n;
                }
            }
        }
    }

    cout << "Maximo Negativo: " << may << "| Minimo positivo: " << men << endl;

    return 0;

}




