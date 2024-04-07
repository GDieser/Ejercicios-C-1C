/*
Hacer un programa que solicite al vendedor de un kiosco el nombre del producto, el precio
unitario y la cantidad de unidades compradas por el cliente. Y muestre por pantalla el
ticket de la operacion

Producto: alfajor
ppu: 750.4
cant: 2

total 1500.8
*/

#include <iostream>
using namespace std;

int main(){

    string nombreProducto;
    float precioUnidad, total;
    int cantidad;

    cout << "Ingrese el nombre del producto: ";
    cin >> nombreProducto;

    cout << "Ingrese el precio del producto: ";
    cin >> precioUnidad;

    cout << "Ingrese la cantidad: ";
    cin >> cantidad;

    total = precioUnidad * cantidad;

    cout << "Alfajor: " << nombreProducto << ", Total a pagar: " << total << "$" <<endl;

    return 0;
}
