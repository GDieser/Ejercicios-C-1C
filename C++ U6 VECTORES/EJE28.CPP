#include <iostream>
#include <locale.h>
using namespace std;

/*28)
Un negocio de venta de libros cuenta con los siguientes lotes de información:

Un primer lote cuenta con los datos de los libros que este negocio vende. Cada registro contiene:
-Código de Libro (1 a 200)
-Tema (1 a 20)
-Precio

Este lote cuenta con un total de 200 registros y se ingresa desordenado.
Un segundo lote con los datos de las ventas del último mes. Cada registro contiene los
siguientes datos:

-Código de Libro (1 a 200)
-Número de Vendedor (1 a 10)
-Día de la venta (1 a 31)

Puede haber varios registros para el mismo código de libro y para el mismo vendedor.
Este lote finaliza con un registro con código de libro igual a cero.

Se pide determinar e informar:
a) Indicar por separado la recaudación total para cada uno de las 31 días.
b) Cuál es el número de vendedor con mayor recaudación total por ventas.
c) Cuál es el número de tema más vendido.
NO SE PUEDE UTILIZAR NINGÚN SWITCH CON MÁS DE 3 SALIDAS.
*/

void cargaLoteDeLibros(int codLibro[], int TAM_LIB, int numTema[], int TAM_TEM);

void cargaLoteSegundoLote(int recDia[], int TAM_DIA, int codLibro[], int TAM_LIB, int numVendedor[], int TAM_VEN);

void mostrarRecaudacionTotalPorDia(int recDia[], int TAM_DIA);

int mostrarNumeroVendedorMayor(int numVendedor[], int TAM_VEN);

int mostraNumeroDeTemas(int numTema[], int TAM_TEM);

int main()
{
    setlocale(LC_ALL, "Spanish");

    int const TAM_LIB = 200, TAM_VEN = 10, TAM_DIA = 31, TAM_TEM = 20;
    int codLibro[TAM_LIB] = {}, numVendedor[TAM_VEN] = {}, recDia[TAM_DIA] = {}, numTema[TAM_TEM] = {}, numVendedorMayor, temaMayor;

    cargaLoteDeLibros(codLibro, TAM_LIB, numTema, TAM_TEM);

    cargaLoteSegundoLote(recDia, TAM_DIA, codLibro, TAM_LIB, numVendedor, TAM_VEN);

    //A)
    mostrarRecaudacionTotalPorDia(recDia, TAM_DIA);

    //B)
    numVendedorMayor = mostrarNumeroVendedorMayor(numVendedor, TAM_VEN);

    cout << "El número de vendedor que más recaudo: #" << numVendedorMayor << endl;

    //C)
    temaMayor = mostraNumeroDeTemas(numTema, TAM_TEM);

    cout << "El número de tema más vendido: #" << temaMayor << endl;
 
    return 0;
}

void cargaLoteDeLibros(int codLibro[], int TAM_LIB, int numTema[], int TAM_TEM)
{

    int tema;

    for (int i = 0; i < TAM_LIB; i++)
    {
        cout << "Ingreso para Libro #" << (i + 1) << endl;

        cout << "Ingrese tema: ";
        cin >> tema;
        numTema[tema-1]++;

        cout << "Ingrece precio: $";
        cin >> codLibro[i];
    }
}

void cargaLoteSegundoLote(int recDia[], int TAM_DIA, int codLibro[], int TAM_LIB, int numVendedor[], int TAM_VEN)
{

    int codigo, nVendedor, dia;

    cout << "Ingrese código de libro: #";
    cin >> codigo;

    while (codigo != 0)
    {   
        cout << "Ingrese número de vendedor: ";
        cin >> nVendedor;

        cout << "Ingrese día: ";
        cin >> dia;

        //A)
        recDia[dia-1] += (codLibro[codigo-1]);

        //B)
        numVendedor[nVendedor-1] += (codLibro[codigo-1]);


        cout << "Ingrese código de libro: #";
        cin >> codigo;
    }
}

void mostrarRecaudacionTotalPorDia(int recDia[], int TAM_DIA){

    for (int i = 0; i < TAM_DIA; i++)
    {
        if (recDia[i] > 0)
        {
            cout << "Recaudación en el día: " << (i+1) << " fue de: " << recDia[i] << endl;
        }
    }
    
}

int mostrarNumeroVendedorMayor(int numVendedor[], int TAM_VEN){

    int recaudacionMayor = 0, numVendMayor;

    for (int i = 0; i < TAM_VEN; i++)
    {
        if (recaudacionMayor = 0 || numVendedor[i] > recaudacionMayor)
        {
            recaudacionMayor = numVendedor[i];
            numVendMayor = (i+1);
        }
    }

    return numVendMayor;
}

int mostraNumeroDeTemas(int numTema[], int TAM_TEM){

    int temaMayor = 0, numTemaMayor;
    
    for (int i = 0; i < TAM_TEM; i++)
    {
        if (temaMayor == 0 || numTema[i] > temaMayor)
        {
            temaMayor = numTema[i];
            numTemaMayor = (i+1);
        }
    }

    return numTemaMayor;
    
}