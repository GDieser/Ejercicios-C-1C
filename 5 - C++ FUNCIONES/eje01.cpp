#include <iostream>

using namespace std;

/*1) Hacer una función llamada EsPar que determine si un número es par o no. La
función debe recibir un número entero por valor y devolver true si es par o false
si no lo es. La función no debe mostrar nada por pantalla.

Hacer un programa para ingresar un número y, utilizando EsPar, emita luego un
cartel indicando si el número ingresado es par o no es par.
*/

bool EsPar(int num){
    
    bool par;
    
    if (num % 2 == 0)
    {
        par = true;
    }else
    {
        par = false;
    }
    
    return par;
}

int main()
{
    int num, par;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    par = EsPar(num);

    if (par)
    {
        cout << "El número es par" << endl;
    }else
    {
        cout << "El número no es par" << endl;
    }

    return 0;
}
