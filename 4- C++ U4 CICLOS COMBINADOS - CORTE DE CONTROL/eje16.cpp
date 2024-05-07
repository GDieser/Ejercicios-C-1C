#include <iostream>

using namespace std;

/*16
Una empresa registró las ventas que efectuó durante un día y para cada venta registró los siguientes datos:

-Número de Artículo Vendido (1 a 3)
-Cantidad de Unidades Vendidas
-Importe de la Venta

El lote finaliza cuando se ingresa un registro con Número de Artículo igual a 0. 
Se pide determinar e informar:

a) La recaudación total para cada uno de los 3 artículos. Se informan 3 resultados al final.
b) El número de artículo con mayor cantidad TOTAL de unidades vendidas. Se informa 1 resultado al final.
*/

int main()
{
    int numArt, numArtActual, cantUn, importe, acumulador = 0, contador = 0, artMayor = 0, numArtMayor, rec1 = 0, rec2 = 0, rec3 = 0;

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

            acumulador += importe;
            contador += cantUn;

            cout << "Ingrese numero de Articulo o 0 para finalizar: " << endl;
            cin >> numArt;

        }

        if (numArtActual == 1)
        {
            rec1 = acumulador;
        }else if (numArtActual == 2)
        {
            rec2 = acumulador;
        }else if(numArtActual == 3)
        {
            rec3 = acumulador;
        }
        acumulador = 0;

        if (artMayor == 0 || contador > artMayor)
        {
            artMayor = contador;
            numArtMayor = numArtActual;
        }
        contador = 0;
        
    }

    //A)
    cout << "Recaudacion Art1: " << rec1 << ", Art2: " << rec2 << ", Art3: " << rec3 << endl;

    //B)
    cout << "Articulos con mayor cantidad de ventas: " << numArtMayor << ", con: " << artMayor << " unidades vendidas." << endl;

    return 0;
}
