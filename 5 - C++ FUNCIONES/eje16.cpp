#include <iostream>
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

    int numArticulo, numArticuloActual, dia, cantArticulos, precioCosto, precioVenta, contadorTotal = 0, acuCosto = 0, acuVenta = 0, ganancia, gananciaMaxima;
    int contArt5 = 0, primerSemana = 0, numArtMaximo, quincena1 = 0, quincena2 = 0;
    float porcentaje = 0;
    bool ganMaxima = true;

    //Pido solo número de articulo para ver si ingresa o no, y para guardar el num de articulo en número de articulo actual.
    cout << "Ingrese número de articulo: " << endl;
    cin >> numArticulo;

    while (numArticulo != 0)
    {   
        //Guardo número de Articulo para lotes
        numArticuloActual = numArticulo;

        while (numArticuloActual == numArticulo)
        {
            
            //Pido datos
            cout << "Ingrese el día: 1 a 31" << endl;
            cin >> dia;

            cout << "Ingrese cantidad de articulos: " << endl;
            cin >> cantArticulos;

            cout << "Precio de costo: " << endl;
            cin >> precioCosto;

            cout << "Precio de venta: " << endl;
            cin >> precioVenta;

            //Acumuladores para sacar ganancias
            acuCosto += precioCosto;
            acuVenta += precioVenta;
            
            //Ventas de cada quincena
            if (cantArticulos > 0)
            {
                if (dia > 15)
                {
                    quincena2 += cantArticulos;
                }
                else
                {
                    quincena1 += cantArticulos;
                }
            }
            else
            {
                //Por si se ingresa 0 ventas pero se ingresa algun valor por error
                acuCosto -= precioCosto;
                acuVenta -= precioVenta;
            }

            //Contador total de ventas
            contadorTotal += cantArticulos;

            //Ventas de primer semana
            if (dia < 8)
            {
                primerSemana += cantArticulos;
            }

            //Ventas de Art 5 en el dia 16
            if (numArticulo == 5 || dia == 16)
            {
                contArt5 += cantArticulos;
            }

            //Vuelvo a pedir para comparar numArt o salir del programa
            cout << "Ingrese número de articulo: " << endl;
            cin >> numArticulo;
        }

        //Registro las ganancias
        ganancia = acuVenta - acuCosto;
        
        //Ingreso la primer Max ganancia o comparo
        if (ganMaxima == true || ganancia > gananciaMaxima)
        {
            gananciaMaxima = ganancia;
            numArtMaximo = numArticuloActual;
            ganMaxima = false;
        }


        //Reinicio los acumuladores para sacar ganancias 
        acuCosto = 0;
        acuVenta = 0;
    }

    //A) El número del artículo qué más ganancia haya recaudado.
    cout << "La ganancia maxima fue: $" << gananciaMaxima << ", pertenece al artículo: " << numArtMaximo << endl;

    //B) La cantidad total de artículos vendidos en cada quincena sin tener en cuenta los artículos de los que no se hayan registrado ventas.
    cout << "Cantidad de artículos vendidos en la primer quicena: " << quincena1 << ", y en la egunda quincena: " << quincena2 << endl;

    //C) Teniendo en cuenta la cantidad total de ventas, informar el porcentaje de ventas para la primera semana del mes.
    
    //Saco porcentaje
    porcentaje = (primerSemana * 100) / contadorTotal;
    
    cout << "El porcentaje de ventas de la primer semana es: " << porcentaje << "%" << endl;

    //D) La cantidad de ventas del artículo 5 el día 16 del mes. De no detectar ventas, indicarlo con un cartel aclaratorio.

    //Verifico si hay registros.
    if (contArt5 == 0)
    {
        cout << "No se registraron ventas del Art 5 en el día 16." << endl;
    }else
    {
        cout << "Se registraron: " << contArt5 << " ventas del Art 5 en la fecha 16." << endl;
    }

    return 0;
}