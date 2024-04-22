#include <iostream>

using namespace std;

/*Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40
marrones y 49 grises. Se pide hacer un programa donde se ingresen tres
ventas. Cada venta está compuesta por:
- Cantidad de carteras
- Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)
Calcular e informar:
- Cantidad total de carteras vendidas en total.
- Cuántas carteras quedaron de cada tipo.
- Los colores de carteras que no se vendieron.
NOTA: Ninguna venta superará las 10 carteras.*/

int main()
{
    int cc1, cc2, cc3, canTotal;
    char tc1, tc2, tc3;
    int blanco = 45;
    int negro  = 50;
    int marron = 40;
    int gris   = 49;

    cout << "---------------" << endl;
    cout << "| 1 - BLANCO  |" << endl;
    cout << "---------------" << endl;
    cout << "| 2 - NEGRO   |" << endl;
    cout << "---------------" << endl;
    cout << "| 3 - MARRON  |" << endl;
    cout << "---------------" << endl;
    cout << "| 4 - GRIS    |" << endl;
    cout << "---------------" << endl;

    cout << "Ingrese primera venta, tipo de cartera: " << endl;
    cin >> tc1;

    cout << "Ingrese cantidad: " << endl;
    cin >> cc1;


    cout << "Ingrese segunda venta, tipo de cartera: " << endl;
    cin >> tc2;

    cout << "Ingrese cantidad: " << endl;
    cin >> cc2;


    cout << "Ingrese tercera venta, tipo de cartera: " << endl;
    cin >> tc3;

    cout << "Ingrese cantidad: " << endl;
    cin >> cc3;


    if( cc1 > 10 ){
        cout << "Cantidad no permitida..." << endl;
        cc1 = 0;
    }
    else{
        switch(tc1){
        case '1':
            blanco -= cc1;
            break;
        case '2':
            negro -= cc1;
            break;
        case '3':
            marron -= cc1;
            break;
        case '4':
            gris -= cc1;
            break;
        }
    }

    if( cc2 > 10 ){
        cout << "Cantidad no permitida..." << endl;
        cc2 = 0;
    }
    else{
        switch( tc2 ){
        case '1':
            blanco = blanco - cc2;
            break;
        case '2':
            negro -= cc2;
            break;
        case '3':
            marron -= cc2;
            break;
        case '4':
            gris -= cc2;
            break;
        }
    }

    if( cc3 > 10 ){
        cout << "Cantidad no permitida..." << endl;
        cc3 = 0;
    }
    else{
        switch( tc3 ){
        case '1':
            blanco = blanco - cc3;
            break;
        case '2':
            negro -= cc3;
            break;
        case '3':
            marron -= cc3;
            break;
        case '4':
            gris -= cc3;
            break;
        }
    }

    if ( blanco == 45){
        cout << "Las carteras Blancas no cuentan con ventas..." << endl;
    }

    if ( negro == 50){
        cout << "Las carteras Negras no cuentan con ventas..." << endl;
    }

    if ( marron == 40){
        cout << "Las carteras Marrones no cuentan con ventas..." << endl;
    }

    if ( gris == 49){
        cout << "Las carteras Grises no cuentan con ventas..." << endl;
    }


    canTotal = cc1 + cc2 + cc3;

    cout << "Se vendieron: " << canTotal << " de carteras en total..." << endl;

    cout << "---------------------" << endl;
    cout << "| STOCK BLANCO :  " << blanco << endl;
    cout << "---------------------" << endl;
    cout << "| STOCK NEGRO  :  " << negro << endl;
    cout << "---------------------" << endl;
    cout << "| STOCK MARRON : " << marron << endl;
    cout << "---------------------" << endl;
    cout << "| STOCK GRIS   :  " << gris << endl;
    cout << "---------------------" << endl;

    return 0;
}
