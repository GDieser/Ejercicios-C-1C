#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

/*Una empresa registró las ventas que realizó durante el mes anterior. Para cada venta se tienen los siguientes datos:

Número de artículo (1 a 10)
Día (1 a 31)
Cantidad de artículos vendidos
Precio de costo.
Precio de venta.
Este lote finaliza con un registro con número de artículo igual a cero. Los registros están agrupados por número de artículo.

Se pide determinar e informar:

a) El número del artículo qué más ganancia haya recaudado.
b) La cantidad total de artículos vendidos en cada quincena sin tener en cuenta los artículos de los que no se hayan registrado ventas.
c) Teniendo en cuenta la cantidad total de ventas, informar el porcentaje de ventas para la primera semana del mes.
d) La cantidad de ventas del artículo 5 el día 16 del mes. De no detectar ventas, indicarlo con un cartel aclaratorio.*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numeroArticulo, numeroArticuloActual, gananciaMaxima, numeroArticuloMaximo, dia, cantidadArticulos, precioCosto, precioVenta, ganancia = 0;
    int articulosVendidosPrimeraQuincena = 0, articulosVendidosSegundaQuincena = 0, cantidadVentaTotal = 0, semana1 = 0, ventasDia16 = 0, contVentasPorArticulo = 0;
    float Porcentaje;
    bool gananciaMax = true;

    cout << "-----------------------------------------" << endl;
    cout << "Ingrese número de Artículo (1 a 10): " << endl;
    cin >> numeroArticulo;

    while ( numeroArticulo <= 0 || numeroArticulo > 10)
    {
        system("cls");
        cout << "-----------------------------------------" << endl;
        cout << "Número de Artículo inválido." << endl;
        cout << "-----------------------------------------" << endl;
        system("pause");

        system("cls");
        cout << "-----------------------------------------" << endl;
        cout << "Ingrese número de Artículo (1 a 10): " << endl;
        cin >> numeroArticulo;
    }

    while (numeroArticulo != 0)
    {
        numeroArticuloActual = numeroArticulo;

        while (numeroArticuloActual == numeroArticulo)
        {
            cout << "-----------------------------------------" << endl;

            cout << "Ingrese el día (1 a 31): " << endl;
            cin >> dia;
            while (dia < 1 || dia > 31)
            {
                system("cls");
                cout << "-----------------------------------------" << endl;
                cout << "El día ingresado es inválido." << endl;
                cout << "-----------------------------------------" << endl;
                system("pause");

                system("cls");
                cout << "-----------------------------------------" << endl;
                cout << "Número de Artículo: #" << numeroArticuloActual << endl;
                cout << "-----------------------------------------" << endl;
                cout << "Ingrese el día (1 a 31): " << endl;
                cin >> dia;
                //system("pause");
            }
            cout << "-----------------------------------------" << endl;

            cout << "Ingrese cantidad de Artículos vendidos: " << endl;
            cin >> cantidadArticulos;

            while (cantidadArticulos <= 0)
            {
                system("cls");
                cout << "-----------------------------------------" << endl;
                cout << "La cantidad ingresada es inválida." << endl;
                cout << "-----------------------------------------" << endl;
                system("pause");

                system("cls");
                cout << "-----------------------------------------" << endl;
                cout << "Número de Artículo: #" << numeroArticuloActual << endl;
                cout << "-----------------------------------------" << endl;
                cout << "Día: " << dia << endl;
                cout << "-----------------------------------------" << endl;
                cout << "Ingrese cantidad de Artículos vendidos: " << endl;
                cin >> cantidadArticulos;
            }
            contVentasPorArticulo += cantidadArticulos;

            cout << "-----------------------------------------" << endl;
            cout << "Ingrese el precio de costo por unidad: " << endl;
            cin >> precioCosto;

            while (precioCosto < 1)
            {
                system("cls");
                cout << "-----------------------------------------" << endl;
                cout << "El precio de costo debe ser superior a $0." << endl;
                cout << "-----------------------------------------" << endl;
                system("pause");

                system("cls");
                cout << "-----------------------------------------" << endl;
                cout << "Número de Artículo: #" << numeroArticuloActual << endl;
                cout << "-----------------------------------------" << endl;
                cout << "Cantidad de articulos: " << cantidadArticulos << endl;
                cout << "-----------------------------------------" << endl;
                cout << "Día: " << dia << endl;
                cout << "-----------------------------------------" << endl;

                cout << "Ingrese el precio de costo por unidad: " << endl;
                cin >> precioCosto;
            }

            cout << "-----------------------------------------" << endl;
            cout << "Ingrese el precio de venta por unidad: " << endl;
            cin >> precioVenta;

            while (precioVenta < precioCosto)
            {
                system("cls");
                cout << "-----------------------------------------" << endl;
                cout << "El precio de venta debe ser superior al precio de costo: $" << precioCosto << endl;
                cout << "-----------------------------------------" << endl;
                system("pause");

                system("cls");
                cout << "-----------------------------------------" << endl;
                cout << "Número de Artículo: #" << numeroArticuloActual << endl;
                cout << "-----------------------------------------" << endl;
                cout << "Día: " << dia << endl;
                cout << "-----------------------------------------" << endl;
                cout << "Cantidad de articulos: " << cantidadArticulos << endl;
                cout << "-----------------------------------------" << endl;
                cout << "Precio de costo: $" << precioCosto << endl;
                cout << "-----------------------------------------" << endl;

                cout << "Ingrese el precio de venta por unidad: " << endl;
                cin >> precioVenta;
            }

            cout << "-----------------------------------------" << endl;

            // Por si se ingresa cantidadArticulos 0 o negativos no rompa el acumulador de ganancia
            if (cantidadArticulos > 0)
            {
                // A)
                //  Acumulo las ganancias de cada artículo
                ganancia += ((precioVenta * cantidadArticulos) - (precioCosto * cantidadArticulos));

                // B)
                // Acumulo la cantidad de artículos vendidos en cada quincena
                if (dia <= 15)
                {
                    articulosVendidosPrimeraQuincena += cantidadArticulos;
                }
                else
                {
                    articulosVendidosSegundaQuincena += cantidadArticulos;
                }
            }

            // C)
            //  Acumulador de la primer semana
            if (dia < 8)
            {
                semana1 += cantidadArticulos;
            }

            // D)
            // Acumulador para el art 5 día 16
            if (numeroArticuloActual == 5 && dia == 16)
            {
                ventasDia16 += cantidadArticulos;
            }

            // Acumulador para sacar el porcentaje del punto C
            cantidadVentaTotal += cantidadArticulos;

            system("cls");
            cout << "--------------------------" << endl;
            cout << "| Fin de carga de datos...|" << endl;
            cout << "--------------------------" << endl;


            cout << endl;
            cout << "| Resumen: " << endl;
            cout << "-----------------------------" << endl;
            cout << "| Número de Artículo: #" << numeroArticuloActual << endl;
            cout << "-----------------------------" << endl;
            cout << "| Día: " << dia << endl;
            cout << "-----------------------------" << endl;
            cout << "| Cantidad de articulos: " << cantidadArticulos << endl;
            cout << "-----------------------------" << endl;
            cout << "| Precio de costo: $" << precioCosto << endl;
            cout << "-----------------------------" << endl;
            cout << "| Precio de venta: $" << precioVenta << endl;
            cout << "-----------------------------" << endl;
            system("pause");

            system("cls");
            cout << "-----------------------------------------" << endl;
            cout << "Ingrese número de Artículo (1 a 10): " << endl;
            cin >> numeroArticulo;

            while ( numeroArticulo < 0 || numeroArticulo > 10)
            {
                system("cls");
                cout << "-----------------------------------------" << endl;
                cout << "Número de Artículo inválido." << endl;
                cout << "-----------------------------------------" << endl;
                system("pause");

                system("cls");
                cout << "-----------------------------------------" << endl;
                cout << "Ingrese número de Artículo (1 a 10): " << endl;
                cin >> numeroArticulo;
            }
        }

        // Muestro la ganancia acumulada por artículo (mi versión opcional)
        cout << endl;
        cout << "---------------------------------------------------------------" << endl;
        cout << "| La ganancia realizada por el artículo: #" << numeroArticuloActual << " fue de: $" << ganancia << endl;
        cout << "---------------------------------------------------------------" << endl;
        cout << "| El artículo: #" << numeroArticuloActual << " registro: " << contVentasPorArticulo << " venta/s" << endl;
        cout << "---------------------------------------------------------------" << endl;


        // Lógica para ingresar primera ganancia o comparar para guardar el máximo
        if (gananciaMax == true || ganancia > gananciaMaxima)
        {
            gananciaMaxima = ganancia;
            numeroArticuloMaximo = numeroArticuloActual;
            gananciaMax = false;
        }
        contVentasPorArticulo = 0;
        ganancia = 0;

        // Pequeño cambio para cuando se ingresa 0
        if (numeroArticulo == 0)
        {
            cout << endl;
            cout << "Fin de ingresos de datos..." << endl;
            cout << endl;
            system("pause");
        }
        else
        {
            cout << endl;
            cout << "Cambio de artículo al: #" << numeroArticulo << "..."<< endl;
            cout << endl;
            system("pause");
            system("cls");
            cout << "-----------------------------------------" << endl;
            cout << "Número de Artículo: #" << numeroArticulo << endl;
        }

    }

    // A) El número del artículo qué más ganancia haya recaudado.

    system("cls");
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "| A - El artículo con mayor ganancias fue el: #" << numeroArticuloMaximo << " con una ganancia de: $" << gananciaMaxima <<endl;

    cout << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << endl;

    // B) La cantidad total de artículos vendidos en cada quincena sin tener en cuenta los artículos de los que no se hayan registrado ventas.
    if (articulosVendidosPrimeraQuincena > 0)
    {
        cout << "| B - Cantidad total de artículos vendidos en la primera quincena: " << articulosVendidosPrimeraQuincena << endl;
    }
    else
    {
        cout << "| No se registran ventas en la primer quincena." << endl;
    }

    if (articulosVendidosSegundaQuincena > 0 )
    {
        cout << endl;
        cout << "| B - Cantidad total de artículos vendidos en la segunda quincena: " << articulosVendidosSegundaQuincena << endl;
    }
    else
    {
        cout << endl;
        cout << "| B -  No se registran ventas en la segunda quincena." << endl;
    }

    cout << endl;
    cout << "-------------------------------------------------------------------------------" << endl;

    // Porcentaje primer semana
    Porcentaje = ((float)semana1 * 100) / cantidadVentaTotal;

    // C) Teniendo en cuenta la cantidad total de ventas, informar el porcentaje de ventas para la primera semana del mes.

    cout << endl;
    cout << "| C - El porcentaje de ventas en la primer semana del mes fue: " << fixed << setprecision(2) << Porcentaje << "%" << endl;

    // D) La cantidad de ventas del artículo 5 el día 16 del mes. De no detectar ventas, indicarlo con un cartel aclaratorio.

    cout << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << endl;
    if (ventasDia16 == 0)
    {
        cout << "| D - No se registraron ventas el día 16." << endl;
    }
    else
    {
        cout << "| D - La cantidad de ventas del artículo #5 en el dia 16 fue de: " << ventasDia16 <<endl;
    }
    cout << endl;
    cout << "-------------------------------------------------------------------------------" << endl;

    return 0;
}
