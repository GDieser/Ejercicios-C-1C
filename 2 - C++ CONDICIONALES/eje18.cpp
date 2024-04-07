#include <iostream>

using namespace std;

/*Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la
siguiente escala:
$10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo.
$12 por kW por el consumo excedente de 101 a 200 kW.
$15 por kW por el consumo excedente de 201 kW en adelante.
Hacer un programa para que, dado el consumo en kilovatios de un determinado
cliente, el programa calcule e informe el total a pagar.
Ejemplo 1: Un consumo de 55 kW, se calculará: $ 10 x 55= $ 550
Ejemplo 2: Un consumo de 125 kW, se calculará: $10 x 100 + $12 x 25 = $1300.
Ejemplo 3: Un consumo de 250 kW, se calculará: $10 x 100 + $12 x 100 + $15 x
50 = $2950*/

int main()
{
    int con, total, r, r1;

    cout << "Ingrese el consumo mensual en kW: " << endl;
    cin >> con;


    if( con <= 100 ){
            total = con * 10;
    }
    else{
        if( con <= 200 ){

                r = con % 100;
                r1 = con - r;
                total = (r1 * 10) + (r * 12);
        }
        else{
            r = con - 200;
            total = (100 * 10) + (100 * 12) + (r * 15);
        }
    }

    cout << "El total a pagar por el consumo mensual es: $" << total << endl;

    return 0;
}
