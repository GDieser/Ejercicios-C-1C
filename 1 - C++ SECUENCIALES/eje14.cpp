#include <iostream>
using namespace std;

int main(){

    /*Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla,
    el importe sin descuento, el descuento aplicado y el importe total a cobrar.
    Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
    Importe: 4500, Descuento: 1800, total: 2700.*/

    float importe, descuento, d1, d2, total;

    cout << "Ingrese importe total: ";
    cin >> importe;

    cout << "Ingrese descuento: ";
    cin >> descuento;

    d1 = (100 - descuento) / 100;
    total = importe * d1;
    d2 = importe - total;

    cout << "Importe total: " << importe << "$ , descuento: " << d2 << "$, total a pagar: " << total <<"$";


 return 0;
}
