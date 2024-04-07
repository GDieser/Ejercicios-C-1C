#include <iostream>

using namespace std;

/*Hacer un programa para ingresar tres números distintos y listarlos ordenados
de menor a mayor.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
Si N1=8, N2=6, N3=10 ó N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=8, N3=10 ó N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=10, N3=8 ó N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.
*/

int main()
{
    int a, b, c, may, men,  med;

    cout << "Ingrese el primer numero: " << endl;
    cin >> a;

    cout << "Ingres el segundo numero: " << endl;
    cin >> b;

    cout << "Ingres el tercer numero: " << endl;
    cin >> c;

    if( a > b ){
        may = a;
        men = b;
    }
    else{
        may = b;
        men = a;
    }

    if( c > may ){
        med = may;
        may = c;
    }
    else{
        if( c < men ){
            med = men;
            men = c;
        }
        else{
            med = c;
        }
    }

    cout << "|-----------------|" << endl;
    cout << "|-MENOR  : " << men << endl;
    cout << "|-MEDIO  : " << med << endl;
    cout << "|-MAYOR  : " << may << endl;
    cout << "|-----------------|" << endl;

    return 0;
}
