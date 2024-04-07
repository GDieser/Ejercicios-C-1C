#include <iostream>

using namespace std;
/*Un negocio de perfumería efectúa descuentos según el importe de la venta.
Si el importe es menor a $100 aplicar un descuento del 5%
Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
Si el importe es mayor a $500 aplicar un descuento del 15%
Hacer un programa donde se ingresa el importe original sin descuento y se
informe por pantalla el importe con el descuento ya aplicado.
Importante: Verifique que el programa emita UN SOLO CARTEL*/

int main()
{
    float imp, desc;

    cout << "Ingrese el importe de la venta " << endl;
    cin >> imp;

    if( imp > 500 ){
        desc = imp * 0.85;
        cout << "El importe a abonar es: $" << desc;
    }
    else{
        if( imp < 100 ){
            desc = imp * 0.95;
            cout << "El importe a abonar es: $" << desc;
        }
        else{
            desc = imp * 0.9;
            cout << "El importe a abonar es: $" << desc;
        }
    }

    return 0;
}
