#include <iostream>
using namespace std;

/*Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
El sueldo máximo.
El sueldo mínimo.
El sueldo promedio.
Cantidad de sueldos mayores a $50000.
*/

int main(){

    int x, s, may, men, cont1 = 0, contT = 0, acum = 0, p;

    for( x = 0; x < 10; x++ ){

        cout << "Ingrese el sueldo: " << endl;
        cin >> s;

        if( x == 0 ){
            may = s;
            men = s;
        }

        if( s > may ){
            may = s;
        }
        else{
            if( s < men ){
                men = s;
            }
        }

        if( s > 50000 ){
            cont1++;
        }

        acum += s;
        contT++;

    }

    p = acum / contT;

    cout << "Sueldo Maximo: $" << may << endl;
    cout << "Sueldo menor: $" << men << endl;
    cout << "Suedlo Promedio: $" << p << endl;

}
