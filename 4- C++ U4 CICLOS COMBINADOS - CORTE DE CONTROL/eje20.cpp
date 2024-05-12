#include <iostream>

using namespace std;

/*20
Una empresa registró las ventas que realizó durante el mes anterior. Para cada venta se ingresan los siguientes datos.
-Número de artículo (1 a 30)
-Día de la venta (1 a 31)
-Cantidad de unidades vendidas
-Importe de la venta

Este lote finaliza con un registro con número de artículo igual a cero. Los registros están agrupados (no ordenados) 
por número de artículo,  y puede haber varios registros para el mismo artículo, para el mismo día, etc.
En el lote no aparecen registros de los artículos que no se vendieron durante el mes.
Se pide determinar e informar:

a) El número de artículo más vendido en unidades totales considerando las ventas de la primera quincena. 
b) Para cada uno de los artículos informar la recaudación total del mes.
c) Informar en cual quincena se vendió mayor cantidad de unidades totales.
d)Informar el número de artículo del que más se haya vendido en cantidad de unidades en una venta individual indicando además
en qué día fue esa venta.

Considerar para el tema de las quincenas que la Quincena 1  corresponde a los días 1 al 15 y la Quincena 2 corresponde a los días 16 al 31.
*/

int main()
{
    int numArt, dia, importe, numArtActual, cantUn, quincena1 = 0, quincena2 = 0, artMayorVenta, mayorVenta = 0, diaMayor, artQuincena, numArtQuincena;
    bool mayorVen = true, primeraQuincena = true;

    cout << "Ingrese numero de Articulo: " << endl;
    cin >> numArt;

    while (numArt != 0)
    {   
        int contQuincena = 0, recaudacion = 0;

        numArtActual = numArt;

        while (numArtActual == numArt)
        {   
            //Pido 
            cout << "Dia de la venta: " << endl;
            cin >> dia;

            cout << "Cantidad de unidades: " << endl;
            cin >> cantUn;

            cout << "Importe de venta: " << endl;
            cin >> importe;

            //Suma primera quincena

            if (dia < 15)
            {
                contQuincena += cantUn;

                //Quincena mayor cantidad de ventas
                quincena1 += cantUn;
            }else
            {
                quincena2 += cantUn;
            }

            //Suma recaudacion
            recaudacion += importe;

            //Mayor venta individual
            if (mayorVen == true || cantUn > mayorVenta)
            {
                mayorVenta = cantUn;
                artMayorVenta = numArt;
                diaMayor = dia;
            }
            
            //Vuelvo a pedir
            cout << "Ingrese numero de Articulo: " << endl;
            cin >> numArt;
        }

        //B)
        cout << "Recaudacion del todo el mes fue: " << recaudacion << endl;

        if (primeraQuincena == true || contQuincena > artQuincena)
        {
            artQuincena = contQuincena;
            numArtQuincena = numArtActual;
        }

    }

    //A)
    cout << "Numero de articulo mas vendido en la primera quincena: " << numArtQuincena << endl;

    //C)
    if (quincena1 > quincena2)
    {
        cout << "La quicena que mas vendio fuela primera" << endl;
    }else if (quincena2 > quincena1)
    {
        cout << "La quincena que mas vendio fue la segunda" << endl;
    }else
    {
        cout << "Ambas quincena vendieron igual" << endl;
    }
    
    //D)
    cout << "La mayor venta individual fue del articulo: " << artMayorVenta << ", en el dia: " << diaMayor << endl;

    return 0;
}
