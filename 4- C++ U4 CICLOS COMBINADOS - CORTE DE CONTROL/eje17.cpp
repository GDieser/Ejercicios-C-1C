#include <iostream>

using namespace std;

/*17
Una empresa registró las ventas que efectuó durante un día y para cada venta registró los siguientes datos:

-Número de Artículo Vendido (1 a 30)
-Cantidad de Unidades Vendidas
-Importe de la Venta

El lote finaliza cuando se ingresa un registro con Número de Artículo igual a 0. 
En el lote anterior no aparecen registros de los artículos que por alguna razón no se hayan vendido durante el día. Los registros 
están agrupados por número de artículo. 
Se pide determinar e informar:

a) La recaudación total para cada uno de los artículos vendidos. Se informa 1 resultado para cada uno de los grupos.
b) El número de artículo con mayor cantidad TOTAL de unidades vendidas.
*/

int main()
{
    int numArt, cantUn, importe, numArtActual, importeTotal = 0, canTotal = 0, canTotalMax = 0, numArtMayor = 0;

    cout << "Ingrese numero de Articulo o 0 para finalizar: " << endl;
    cin >> numArt;

    while (numArt != 0)
    {
        numArtActual = numArt;
        while (numArtActual == numArt)
        {
            cout << "Cantidad de unidades vendidas: " << endl;
            cin >> cantUn;

            cout << "Importe de la venta: " << endl;
            cin >> importe;

            importeTotal += importe;
            canTotal += cantUn;

            cout << "Ingrese numero de Articulo o 0 para finalizar: " << endl;
            cin >> numArt;
        }

        //A)
        cout << "Recaudacion total del Articulo es de: " << importeTotal << "$" << endl;

        if (canTotalMax == 0 || canTotal > canTotalMax)
        {
            canTotalMax = canTotal;
            numArtMayor = numArtActual;
        }
        importeTotal = 0, canTotal = 0;
        
    }
    //B)
    cout << "Articulo con mayor cantidad de ventas: " << numArtMayor << endl;

    return 0;
}
