#include <iostream>

using namespace std;

/* 7) Escribir una función CalcularMaximoAbsoluto que reciba dos números y
retorne el máximo absoluto de ambos. Por ejemplo el máximo absoluto de los
números -40 y 20 es 40.

Hacer un programa para ingresar dos números y, utilizando
CalcularMaximoAbsoluto, emita luego el número mayor absoluto de ambos.
*/

int CalcularMaximoAbsoluto(int num1, int num2){

    if (num1 < 0)
    {
        num1 = num1 * -1;
    }
    if (num2 < 0)
    {
        num2 = num2 * -1;
    }

    if (num1 > num2)
    {
        return num1;
    }else
    {
        return num2;
    }
}

int main()
{
    int num1, num2, r;

    cout << "Ingrese un número: " << endl;
    cin >> num1;

    cout << "Ingrese otro número: " << endl;
    cin >> num2;

    r = CalcularMaximoAbsoluto(num1, num2);

    cout << "El maximo absoluto es: " << r << endl;

    return 0;
}
