#include <iostream>

using namespace std;

/*Hacer un programa para ingresar por teclado cuatro n�meros. Si los valores que
se ingresaran est�n ordenados en forma creciente, emitir el mensaje �Conjunto
Ordenado�, caso contrario emitir el mensaje: �Conjunto Desordenado�.
Ejemplo A: si los n�meros que se ingresan son 8, 10, 12 y 14, entonces est�n
ordenados.
Ejemplo B: si los n�meros que se ingresan son 8, 12, 12 y 14, entonces est�n
ordenados.
Ejemplo C: si los n�meros que se ingresan son 10, 8, 12 y 14, entonces est�n
desordenados.
*/

int main()
{
    int a, b, c, d;

    cout << "Ingrese el primer numero: " << endl;
    cin >> a;

    cout << "Ingres el segundo numero: " << endl;
    cin >> b;

    cout << "Ingres el tercer numero: " << endl;
    cin >> c;

    cout << "Ingres el cuarto numero: " << endl;
    cin >> d;

    if( a <= b && b <= c && c <= d){
        cout << "Los numeros ingresados son un Conjunto Ordenado!!!" << endl;
    }
    else{
        cout << "Los numeros ingresados NO son un Conjunto Ordenado..." << endl;
    }

    return 0;
}
