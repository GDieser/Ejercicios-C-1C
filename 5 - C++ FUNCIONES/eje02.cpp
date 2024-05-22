#include <iostream>

using namespace std;

/* 2) Hacer una función llamada CalcularMaximo que determine el máximo entre
dos números. La función debe recibir dos números enteros por valor y devolver
el valor más grande. Si los números son iguales debe devolver cualquiera de
los dos. La función no debe mostrar nada por pantalla.

Hacer un programa para ingresar dos números y, utilizando CalcularMaximo,
emita luego el número mayor de ambos.
*/

int CalcularMaximo( int num1, int num2){

    int max;
    if (num1 > num2)
    {
        max = num1;
    }else if (num2 > num1)
    {
        max = num2;
    }else
    {
        max = 0;
    }
    
    return max;
}

int main()
{
    int a, b, max;

    cout << "Ingrese el primer número: " << endl;
    cin >> a;

    cout << "Ingrese el segundo número: " << endl;
    cin >> b;

    max = CalcularMaximo(a,b);

    if (max == 0)
    {
        cout << "Son iguales" << endl;
    }else
    {
        cout << "El mayor es: " << max << endl;
    }
  
    return 0;
}
