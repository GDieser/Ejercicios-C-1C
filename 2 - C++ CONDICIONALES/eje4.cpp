#include <iostream>

using namespace std;
/*Hacer un programa para ingresar por teclado dos números y luego informar por
pantalla la diferencia absoluta entre ambos.
Ejemplo A: Si se ingresan 3 y 8 se emite 5. Si se ingresan 8 y 3 se emite 5.
Ejemplo B: Si se ingresan -3 y 9 se emite 12. Si se ingresan -12 y -1 se emite 11.
Ejemplo C: Si se ingresan -3 y -9 se emite 6. Si se ingresan -12 y -9 se emite 3.
Importante: Verifique que el programa emite SIEMPRE UN VALOR POSITIVO
porque la diferencia absoluta siempre es un valor positivo*/

int main()
{
    int a, b, dif;

    cout << "Ingrese el primer numero" << endl;
    cin >> a;

    cout << "Ingrese el segundo numero" << endl;
    cin >> b;

    if( a > b ){
            dif = a - b;
            cout << "La diferencia absolutas entre ambos numeros es: " << dif;
    }
    else{
        dif = b - a;
        cout << "La diferencia absolutas entre ambos numeros es: " << dif;
    }

    return 0;
}
