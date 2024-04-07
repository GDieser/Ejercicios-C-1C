#include <iostream>

using namespace std;

/*Hacer un programa para leer tres números diferentes y determinar e informar el
número del medio.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8*/

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
    }
    else{
        if( c < men ){
            med = men;
        }
        else{
            med = c;
        }
    }

    cout << "El valor medio es: " << med << endl;

    return 0;
}
