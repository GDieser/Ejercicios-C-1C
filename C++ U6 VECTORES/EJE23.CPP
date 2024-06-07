#include <iostream>
#include <locale.h>
using namespace std;

/*23)
Una empresa posee un grupo de 15 vendedores para atender a sus clientes.
Por cada venta realizada se genera un registro con la siguiente información:

-Número de vendedor (1 a 15)
-Importe de la venta (en $)

Un vendedor puede realizar más de una venta.
El último registro se indica con número de vendedor igual a 0.

Se pide determinar e informar:

a) El número de vendedor que más vendió en total (en $).
b) Cada uno de los números de vendedores que no hayan realizado ventas.
c) El total recaudado por la empresa por todas las ventas efectuadas por sus vendedores*/

int vendedoMasVendio(int vendedor[], int TAM);

void vendedoreSinVentas(int vendedor[], int TAM);

int totalRecaudado(int vendedor[], int TAM);

int main()
{
    setlocale(LC_ALL, "Spanish");

    int const TAM = 16;
    int numVendedor[TAM] = {}, importeVenta, numVendedorMax, recaudacion;

    cout << "Ingrese número de vendedor: ";
    cin >> numVendedor[TAM];

    while (numVendedor[TAM] != 0)
    {
        cout << "Ingrese importe de venta: $";
        cin >> importeVenta;

        numVendedor[numVendedor[TAM]] += importeVenta;

        cout << "Ingrese número de vendedor: ";
        cin >> numVendedor[TAM];
    }

    //A)
    numVendedorMax = vendedoMasVendio(numVendedor, TAM);

    cout << "El vendedor que mas ventas realizó fue el: #" << numVendedorMax << endl;

    //B)
    vendedoreSinVentas(numVendedor, TAM);

    //C)
    recaudacion = totalRecaudado(numVendedor, TAM);
    cout << "El total recaudado por todos los vendedores: $" << recaudacion << endl;

    return 0;
}

int vendedoMasVendio(int vendedor[], int TAM){

    int maximo = 0, numVendedorMayor;

    for (int i = 1; i <= 15; i++)
    {
        if (maximo == 0 || vendedor[i] > maximo)
        {
            maximo = vendedor[i];
            numVendedorMayor = i;
        }
    }

    return numVendedorMayor;

}

void vendedoreSinVentas(int vendedor[], int TAM){

    cout << "El/Los vendedor/es";
    for (int i = 1; i <= 15; i++)
    {
        if (vendedor[i] == 0)
        {
            cout << " |#" << i;
        }
    }
    cout << " no registra/n venta/s." << endl;
    
}

int totalRecaudado(int vendedor[], int TAM){

    int recaudacionTotal = 0;

    for (int i = 1; i < 15; i++)
    {
        recaudacionTotal += vendedor[i];
    }

    return recaudacionTotal;
}