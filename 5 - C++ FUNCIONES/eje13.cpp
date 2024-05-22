#include <iostream>

using namespace std;

/* 13) Escribir una función llamada calcularPotencia para que, dados dos números
enteros, calcule y devuelva la potencia del primero a la del segundo. Tener en
cuenta las siguientes posibilidades:

calcularPotencia(2, 3) → 8
calcularPotencia(2, 0) → 1
calcularPotencia(2, -3) → 0,125
*/

float CalcularPotencia(int num1, int num2){

    int vueltas;
    float resultado = 1;

    //Verifico si es negativo
    if (num2 < 0)
    {
        vueltas = num2 * -1;
    }else
    {
        vueltas = num2;
    }

    //Hago la potencia
    for (int i = 0; i < vueltas; i++)
    {
        resultado *= num1;
    }
    cout << resultado << endl;

    //Si es negativo y si es 0
    if (num2 < 0)
    {
        resultado = 1 / (float)resultado;
        cout << resultado << endl;
    }else if (num2 == 0)
    {
        resultado = 1;
    }
    return resultado;
}

//Principal
int main()
{
    int num1, num2;
    float r;

    cout << "Ingrese un numero: " << endl;
    cin >> num1;

    cout << "Ingrese otro numero: " << endl;
    cin >> num2;

    r = CalcularPotencia(num1, num2);

    cout << "La potencia es: " << r << endl;

    return 0;
}
