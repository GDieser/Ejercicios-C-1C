#include <iostream>
#include <locale.h>
using namespace std;

/*27)
Una empresa de transporte de carga por camión posee 20 tarifas distintas de acuerdo al destino de los envíos que deba realizar.
Dispone de un lote de registros con la siguiente información:

-Número de Tarifa (1 a 20)
-Importe por KM.

Este lote no viene ordenado.
A continuación, dispone de un segundo lote de registros con la información de los envíos que se realizaron durante la semana pasada, 
conteniendo cada uno de ellos los siguientes campos:

-Número de Camión (1 a 100)
-Número de Tarifa
-Kilómetros recorridos

Este lote finaliza con un registro con número de camión negativo.
Se pide realizar un programa que determine e informe:

a) El total recaudado por cada tarifa.
b) Un listado como el siguiente:
Número Camión	Total recaudado (en $)
    999	               9999,99
    999	               9999,99
c) Indicar el número de camión que recorrió la menor cantidad de kilómetros, excluyendo a aquellos camiones que no realizaron ningún viaje.
*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numero;
    
    return 0;
}