#include <iostream>
using namespace std;

/*Hacer un programa para que el usuario ingrese dos n�meros y luego el programa muestre por
pantalla los n�meros entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrar�n los n�meros entre el 3 y el 15 y si el
usuario ingresa 25 y 8, se mostrar�n los n�meros entre el 8 y el 25.
*/

int main(){

    int x, n1, n2, men, may;

    cout << "Ingrese un numero: " << endl;
    cin >> n1;

    cout << "Ingrese otro numero: " << endl;
    cin >> n2;

    if(n1 < n2){
        men = n1;
        may = n2;
    }
    else{
        men = n2;
        may = n1;
    }

    cout << "Numero mayor: " << may << endl;

    cout << "Numero menor: " << men << endl;

    for( x = men; x <= may; x++ ){

        cout << x << endl;
    }

    return 0;

}
