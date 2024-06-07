#include <iostream>
#include <locale.h>
using namespace std;

/*24)
Una empresa que fabrica 200 artículos tiene la siguiente información para
cada uno de las ventas del mes anterior:

Código de Artículo (1 a 200)
Día (1 a 31)
Cantidad vendida

Puede haber más de un registro para el mismo artículo.
El lote finaliza con un registro con número de artículo igual a cero. Se pide determinar e informar:

a) Informar para cada código de artículo la cantidad total vendida en el mes.
b) Informar los días en los que no hubo ventas.
c) Informar los códigos de los artículos cuyas ventas en cantidad son mayores al promedio.*/

void ingresoDatos(int articulo[], int TAM_ART, int dia[], int TAM_DIA);

void mostrarCantidadMes(int articulo[], int TAM_ART);

void mostrarDiasSinVentas(int dia[], int TAM_DIA);

void mostraVentasMayorAPromedio(int cantidad[], int TAM);

int main()
{
    setlocale(LC_ALL, "Spanish");

    int const COD_ART = 201, TAM_DIA = 31;
    int codigoArt[COD_ART] = {}, dia[TAM_DIA] = {}, cantVendida;

    //Funcion ingreso de datos
    ingresoDatos(codigoArt, COD_ART, dia, TAM_DIA);

    //A)
    mostrarCantidadMes(codigoArt, COD_ART);

    //B)
    mostrarDiasSinVentas(dia, TAM_DIA);

    //C)
    mostraVentasMayorAPromedio(codigoArt, COD_ART);

    return 0;
}

void ingresoDatos(int articulo[], int TAM_ART, int dia[], int TAM_DIA)
{

    int cantVendido, diaIngresado;

    cout << "Ingrese número de Artículo:";
    cin >> articulo[TAM_ART];

    while (articulo[TAM_ART] != 0)
    {
        cout << "Ingrese día de la venta: ";
        cin >> diaIngresado;
        dia[diaIngresado - 1]++;

        cout << "Ingrese la cantidad vendida: ";
        cin >> cantVendido;

        articulo[articulo[TAM_ART]] += cantVendido;

        cout << "Ingrese número de Artículo: ";
        cin >> articulo[TAM_ART];
    }
}

void mostrarCantidadMes(int articulo[], int TAM_ART){

    cout << endl;
    for (int i = 1; i <= 200; i++)
    {
        if (articulo[i] > 0)
        {
            cout << "El articulo #" << i << " registra: " << articulo[i] << " ventas." << endl;
        }    
    }
    
}

void mostrarDiasSinVentas(int dia[], int TAM_DIA){

    cout << "El/Los día/s:";
    for (int i = 0; i < 31; i++)
    {
        if (dia[i] == 0)
        {
            cout << " | " << (i+1);
        }
    }
    cout << " no registran ventas" << endl;;
    
}

void mostraVentasMayorAPromedio(int cantidad[], int TAM){

    int promedio = 0;

    //Promedio
    for (int i = 1; i < TAM; i++)
    {
        promedio += cantidad[i];
    }
    promedio = promedio/200;

    cout << "Los articulos:";
    for (int i = 1; i < TAM; i++)
    {
        if (cantidad[i] > promedio )
        {
            cout << " | #" << i;
        }
        
    }
    cout << " tienen ventas superior al promedio." << endl;
    
    
}