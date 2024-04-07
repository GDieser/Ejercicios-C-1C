#include <iostream>
using namespace std;

int main(){

    /*Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar
    por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el
    porcentaje de ventas para cada una de ellas.

    Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e
    informará A: 50%, B: 12,50% y C: 37,50%.*/

    float a, b, c, total, porcentaje1, porcentaje2, porcentaje3;

    cout << "Ingrese la cantidad vendida de alfajores Havana: ";
    cin >> a;

    cout << "Ingrese la cantidad vendida de alfajores Gualmayen: ";
    cin >> b;

    cout << "Ingrese la cantidad vendida de alfajores Jorgito: ";
    cin >> c;

    total = a + b + c;

    porcentaje1 = (a * 100) / total;
    porcentaje2 = (b * 100) / total;
    porcentaje3 = (c * 100) / total;

    cout << "El porcenjate total vendido de Havana es de: " << porcentaje1 << "%" << endl;
    cout << "El porcenjate total vendido de Gualmayen es de: " << porcentaje2 << "%" << endl;
    cout << "El porcenjate total vendido de Jorgito es de: " << porcentaje3 << "%" << endl;

 return 0;
}
