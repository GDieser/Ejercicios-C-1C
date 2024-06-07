#include <iostream>
#include <locale.h>
using namespace std;

/*22)
Una empresa comercializa 20 tipos de artículos y por cada venta realizada genera un 
registro con los siguientes datos:

-Número de Artículo (1 a 20)
-Cantidad Vendida

Puede haber varios registros para el mismo artículo y el último registro se indica 
cuando se ingresa un número de artículo igual a 0.
Se pide determinar e informar:

a) El número de artículo que más se vendió en total.
b) Los números de artículos que no registraron ventas.
c) Cuántas unidades se vendieron del número de artículo 10.

*/

int articuloMasVendido(int cantidad[], int TAM);
int articuloSinVentas(int cantidad[], int TAM);


int main()
{
    setlocale(LC_ALL, "Spanish");

    int const TAM = 21;
    int numArt[TAM], cantVendida[TAM] = {}, cantidadVendida, numeroArticuloMayor;

    cout << "Ingrese número de articulo: ";
    cin >> numArt[TAM];

    while (numArt[TAM] != 0)
    {
        cout << "Ingrese cantidad vendida: ";
        cin >> cantidadVendida;

        cantVendida[numArt[TAM]] += cantidadVendida;

        cout << "Ingrese número de articulo: ";
        cin >> numArt[TAM];
    }

    //A)
    numeroArticuloMayor = articuloMasVendido(cantVendida, TAM);
    cout << "Número de Artículo que más vendio: " << numeroArticuloMayor << endl;

    //B)
    articuloSinVentas(cantVendida, TAM);

    //C)
    cout << endl;
    if (cantVendida[10] > 0)
    {
        cout << "El articulo 10 vendio: " << cantVendida[10] << endl;
    }else
    {
        cout << "El articulo 10 no registra ventas" << endl;
    }
    
    return 0;
}

int articuloMasVendido(int cantidad[], int TAM){
    
    int cantidadMayor = 0, numArticuloMayor;

    for (int i = 1; i < 21; i++)
    {
        if (cantidad[i] > cantidadMayor )
        {
            cantidadMayor = cantidad[i];
            numArticuloMayor = i;
        }
    }

    return numArticuloMayor;
    
}

int articuloSinVentas(int cantidad[], int TAM){

    cout << "El/los artículo/s que no registraron ventas: ";
    
    for (int i = 1; i < 21; i++)
    {
        if (cantidad[i] == 0)
        {       
            cout << " | " << i;
        }
    }
    return 0;
}
