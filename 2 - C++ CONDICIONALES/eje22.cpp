#include <iostream>

using namespace std;

/*Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su
sucursal en Villa Brian Lara. Se sabe que para producir caramelos tienen los
siguientes costos:
- Costo de alquiler de $100000
- Costo por caramelo producido de $2.50
- Costo por mantenimiento cada 1000 caramelos de $50000
Dados el presupuesto inicial y la cantidad de caramelos a producir el primer
mes, informar:
- "El presupuesto es suficiente para cubrir los costos de $XXXX"
- "El presupuesto no es suficiente, necesita un crédito de $XXXX"*/

int main()
{
    int caramelos, presupuesto;
    float costoCar, costoMan, costo, credito, presNec;

    cout << "Ingrese presupuesto disponible: " << endl;
    cin >> presupuesto;

    cout << "Cantidad de caramelos a producir: " << endl;
    cin >> caramelos;

    costoCar = caramelos * 2.5;
    costoMan = (caramelos / 1000) * 50000;
    presNec = presupuesto - costoCar - costoMan - 100000;
    costo = 100000 + costoMan + costoCar;


    if( presNec > 0 ){
        cout << "El presupuesto es suficiente para cubrir los costos de: $" << costo << endl;
    }
    else{
        credito = presNec * -1;
        cout << "El presupuesto NO es suficiente, necesita un credito de: $" << credito << endl;
    }

    return 0;
}
