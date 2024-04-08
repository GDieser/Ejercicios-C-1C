#include <iostream>
using namespace std;

/*Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
El legajo del empleado con mayor sueldo
*/

int main(){

    int x, l, s, may, lm;

    for( x = 0; x < 3; x++ ){

        cout << "Ingrese el legajo del empleado: " << endl;
        cin >> l;

        cout << "Ingrese sueldo: " << endl;
        cin >> s;

        if( x == 0){
            may = s;
            lm = l;
        }

        if( s > may ){
            may = s;
            lm = l;
        }
    }

    cout << "El legajo con mayor sueldo es: " << lm << endl;

}
