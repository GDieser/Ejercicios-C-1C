#include <iostream>
#include <locale.h>
using namespace std;

/*26)
Una empresa con varias sucursales, dispone de un primer lote de registros con la
siguiente información:

-Número de artículo (1 a 25)
-Precio Unitario

Este lote se encuentra desordenado.
Dispone de un segundo lote con la información de las ventas que se efectuaron en cada
una de las sucursales, con la siguiente información:

-Número de artículo (1 a 25)
-Número de sucursal (1 a 5)
-Cantidad vendida

Puede haber más de un registro para el mismo artículo y para la misma sucursal.
El último registro se indica con número de artículo igual a cero.
Se pide determinar e informar:

a) Cantidad total vendida por cada artículo.
b) Monto total recaudado por la empresa.
c) Número de sucursal que más artículos vendió en total. (sin discriminar por artículo)

*/

void ingresoDatosPrimerLote(int preUnitaro[], int TAM_UNI);

void ingresoDatosSegundoLote(int numArticulo[], int TAM_ART, int numSucursal[], int TAM_SUC, int preUnitaro[], int TAM_UNI, int recaudacion[], int REC);

void mostrarCantidadPorArticulo(int numArticulo[], int TAM_ART);

int calculoRecaudacion(int recaudacion[], int REC);

int numeroSucursalMasVendio(int numSucursal[], int TAM_SUC);

int main()
{
    setlocale(LC_ALL, "Spanish");

    int const TAM_ART = 25, TAM_UNI = 25, REC = 25, TAM_SUC = 5;
    int numArticulo[TAM_ART] = {}, preUnitaro[TAM_UNI] = {}, numSucursal[TAM_SUC], recaudacion[REC] = {}, montoTotal, numeroSucursal;

    ingresoDatosPrimerLote(preUnitaro, TAM_ART);

    ingresoDatosSegundoLote(numArticulo, TAM_ART, numSucursal, TAM_SUC, preUnitaro, TAM_UNI, recaudacion, REC);

    //A)
    mostrarCantidadPorArticulo(numArticulo, TAM_ART);

    //B)
    montoTotal = calculoRecaudacion(recaudacion, REC);
    cout << endl;
    cout << "La recaudación total es: $" << montoTotal << endl;

    //C)
    numeroSucursal = numeroSucursalMasVendio(numSucursal, TAM_SUC);
    cout << endl;
    cout << "Número de sucursal que más artículos vendió: " << numeroSucursal << endl;

    return 0;
}

void ingresoDatosPrimerLote(int preUnitaro[], int TAM_UNI)
{

    for (int i = 0; i < 25; i++)
    {
        cout << "Articulo: #" << (i + 1) << endl;
        cout << "Ingrese precio unitario: $";
        cin >> preUnitaro[i];
    }
}

void ingresoDatosSegundoLote(int numArticulo[], int TAM_ART, int numSucursal[], int TAM_SUC, int preUnitaro[], int TAM_UNI, int recaudacion[], int REC)
{

    int articulo, sucursal, cantVendida, montoTotal;

    cout << "Ingrese número de artículo: ";
    cin >> articulo;

    while (articulo != 0)
    {
        cout << "Ingrese número de sucursal: ";
        cin >> sucursal;

        cout << "Ingrese cantidad vendida: ";
        cin >> cantVendida;

        //B)
        recaudacion[articulo-1] += (cantVendida * preUnitaro[articulo-1]);

        //C)
        numSucursal[sucursal-1] += cantVendida;

        //A)
        numArticulo[articulo-1] += cantVendida;

        cout << "Ingrese número de artículo: ";
        cin >> articulo;
    }
}

void mostrarCantidadPorArticulo(int numArticulo[], int TAM_ART){

    for (int i = 0; i < TAM_ART; i++)
    {
        if (numArticulo[i] > 0)
        {   
            cout << endl;
            cout << "Cantidad de ventas del artículo #" << (i+1) << " :" << numArticulo[i] << endl;
        }
        
    }
    
}

int calculoRecaudacion(int recaudacion[], int REC){

    int recTotal = 0;

    for (int i = 0; i < REC; i++)
    {
        recTotal += recaudacion[i];
    }

    return recTotal;
    
}

int numeroSucursalMasVendio(int numSucursal[], int TAM_SUC){

    int cantidadMaxima = 0, numeroSucursalMaxima;

    for (int i = 0; i < TAM_SUC; i++)
    {
        if (cantidadMaxima == 0 || numSucursal[i] > cantidadMaxima)
        {
            cantidadMaxima = numSucursal[i];
            numeroSucursalMaxima = (i+1);
        }
    }

    return numeroSucursalMaxima;
    
}