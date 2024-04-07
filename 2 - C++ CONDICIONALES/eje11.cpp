#include <iostream>

using namespace std;

/*Hacer un programa para ingresar cinco números y listar cuantos de esos cinco
números son positivos, cuantos son negativos y cuantos son iguales a 0.*/

int main()
{
    int a, b, c, d, e, pos = 0, neg = 0, cero = 0;

    cout << "Ingrese el primer numero: " << endl;
    cin >> a;

    cout << "Ingres el segundo numero: " << endl;
    cin >> b;

    cout << "Ingres el tercer numero: " << endl;
    cin >> c;

    cout << "Ingres el cuarto numero: " << endl;
    cin >> d;

    cout << "Ingres el quinto numero: " << endl;
    cin >> e;

    if ( a > 0 ){
        pos++;
    }
    else{
        if( a < 0 ){
            neg++;
        }
        else{
            cero++;
        }
    }
    if ( b > 0 ){
        pos++;
    }
    else{
        if( b < 0 ){
            neg++;
        }
        else{
            cero++;
        }
    }
    if ( c > 0 ){
        pos++;
    }
    else{
        if( c < 0 ){
            neg++;
        }
        else{
            cero++;
        }
    }
    if ( d > 0 ){
        pos++;
    }
    else{
        if( d < 0 ){
            neg++;
        }
        else{
            cero++;
        }
    }
    if ( e > 0 ){
        pos++;
    }
    else{
        if( e < 0 ){
            neg++;
        }
        else{
            cero++;
        }
    }

    cout << "-----------------" << endl;
    cout << "-POSITIVOS : " << pos << endl;
    cout << "-NEGATIVOS : " << neg << endl;
    cout << "-CEROS     : " << cero << endl;
    cout << "-----------------" << endl;

    return 0;
}
