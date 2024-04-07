#include <iostream>
using namespace std;

/*La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 movimientos
durante la semana pasada. Por cada movimiento se registró:
Número de movimiento
Día
Tipo ('E' - Extracción / 'D' - Depósito)
Importe

Existe un registro por movimiento. Se desea calcular e informar:
El saldo final de la cuenta.
El porcentaje de movimientos de extracción y el porcentaje de depósito.
El depósito de mayor importe indicando también día y número de movimiento.
La cantidad de movimientos del día 10.
*/

int main(){

    int x, dia, nM, pM, pD, dM, cantM = 0, contE = 0, contD = 0, nmMay = 0, contD10, p1, p2;
    float imp, sFinal, acuE = 0, acuD = 0, dMay = 0, total, saldoFinal;
    char tipo;

    for( x = 1; x <= 14; x++ ){

        cout << "Ingrese Numero de movimiento: " << endl;
        cin >> nM;

        cout << "Ingrese Dia: " << endl;
        cin >> dia;

        cout << "Ingrese tipo de operacion: 'E'-Extraccion o 'D'-Deposito..." << endl;
        cin >> tipo;

        cout << "Ingrese importe: " << endl;
        cin >> imp;

        switch(tipo){
        case 'E':
            acuE += imp;
            contE++;
            break;
        case 'D':
            acuD += imp;
            contD++;

            if( imp > dMay ){
                dMay = imp;
                dM = dia;
                nmMay = nM;
            }
            break;
        }

        if( dia == 10 ){
            contD10++;
        }

    }

    total = contE + contD;
    p1 = (contE *100 )/total;
    p2 = (contD *100 )/total;

    saldoFinal = contD - contE;

    cout << "Saldo final: " << saldoFinal << endl;

    cout << "Porcentaje de Deposito: " << p2 << "%, porcenjae de Extracciones: " << p1 << "% " <<endl;

    cout << "Deposito maximo: " << dMay << ", realizado el dia: " << dM << ", numero de movimiento: " << nmMay << endl;

    cout << "Cantidad de movimientos del dia 10: " << contD10 << endl;
}
