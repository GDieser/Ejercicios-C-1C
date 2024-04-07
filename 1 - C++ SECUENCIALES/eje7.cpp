#include <iostream>
using namespace std;

int main(){

    /*Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada
    a la misma y luego informar por pantalla el importe a pagar.
    Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces el total a pagar será de $1020.
    Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el total a pagar será de $800.*/

    float importe, descuento, porcentaje, importeTotal;

    cout << "Ingrese el importe total: ";
    cin >> importe;

    cout << "Ingrese el porcentaje del descuento a realizar: ";
    cin >> porcentaje;

    descuento = (100 - porcentaje) / 100;
    importeTotal = importe * descuento;

    cout << "El total a abonar con el descuento aplicado es: " << importeTotal << "$";


 return 0;
}
