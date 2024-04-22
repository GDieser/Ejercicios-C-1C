#include <iostream>

using namespace std;

/*Hacer un programa para ingresar los consumos de electricidad de los clientes
de una empresa. Cada registro contiene los siguientes datos:

- Número de cliente
- Localidad del cliente (1, 2 o 3)
- Kilovatios consumidos

El lote finaliza con un registro con número de cliente igual a cero. El precio es
escalonado según la siguiente escala:
$ 10 por kilovatio por los primeros 100 kilovatios de consumo.
$ 12 por kilovatio por el consumo de 101 a 200 kilovatios.
$ 15 por kilovatio por el consumo de 201 kilovatios en adelante.
Además hay un cargo fijo de $ 100.

Ejemplo A: Consumo de 55 kilovatios, se calculará: $ 10 x 55 + $ 100= $ 650

Ejemplo B: Consumo de 125 kilovatios, se calculará: $ 10 x 100 + $ 12 x 25 + $
100=$ 1400

Ejemplo C: Consumo de 250 kilovatios, se calculará: $10 x 100+ $12 x 100 +
$15 x 50 + $100= $ 3050

Ejemplo D: Consumo de 0 kilovatios, se calculará: $ 10 x 0 + $ 100= $ 100

Se pide determinar e informar:

a) El número de cliente que tuvo la mayor cantidad de Kilovatios consumidos
para cada una de las 3 localidades. Se listan 3 resultados, uno para cada una de
las 3 localidades

b) El total de recaudación para cada una de las 3 localidades. Se listan 3
resultados, uno para cada una de las 3 localidades

c) El número de cliente que tuvo la menor cantidad de Kilovatios consumidos
excluyendo a los clientes que tuvieron Kilovatios consumidos con valor cero. Se
lista 1 resultado.*/

int main()
{
    int numCliente, localidad, kvConsumidos, resto, pago, recTotal1 = 0, recTotal2 = 0, recTotal3 = 0, kvConsumidosMax1 = 0;
    int kvConsumidosMax2 = 0, kvConsumidosMax3 = 0, kvConsumidosMenor = 0, numClienteKvMenor, numClienteKvMayor1, numClienteKvMayor2, numClienteKvMayor3;

    cout << "Ingrese numero de cliente: " << endl;
    cin >> numCliente;

    while( numCliente != 0 ){

        cout << "Ingrese localidad: 1, 2 o 3" << endl;
        cin >> localidad;

        cout << "Ingrese KV consumidos: " << endl;
        cin >> kvConsumidos;

        if( kvConsumidos <= 100 ){

            pago = (10 * kvConsumidos) + 100;
        }
        else if( kvConsumidos <= 200 ){

            resto =  kvConsumidos - 100;
            pago = (10 * 100) + (12 * resto) + 100;
        }
        else if( kvConsumidos > 200 ){

            resto = kvConsumidos - 200;
            pago = (10 * 100) + (12 * 100) + (15 * resto) + 100;
        }
        else{
            pago = 10 * kvConsumidos + 100;
        }

        if( localidad == 1 ){

            recTotal1 += pago;
            if( kvConsumidosMax1 == 0 ){

                kvConsumidosMax1 = kvConsumidos;
                numClienteKvMayor1 = numCliente;
            }
            else if( kvConsumidos > kvConsumidosMax1 ){

                kvConsumidosMax1 = kvConsumidos;
                numClienteKvMayor1 = numCliente;
            }
        }
        else if( localidad == 2){

            recTotal2 += pago;
            if( kvConsumidosMax2 == 0 ){

                kvConsumidosMax2 = kvConsumidos;
                numClienteKvMayor2 = numCliente;
            }
            else if( kvConsumidos > kvConsumidosMax2 ){

                kvConsumidosMax2 = kvConsumidos;
                numClienteKvMayor2 = numCliente;
            }
        }
        else{

            recTotal3 += pago;
            if( kvConsumidosMax3 == 0 ){

                kvConsumidosMax3 = kvConsumidos;
                numClienteKvMayor3 = numCliente;
            }
        }

        if( kvConsumidosMenor == 0 ){

            kvConsumidosMenor = kvConsumidos;
            numClienteKvMenor = numCliente;
        }
        else if( kvConsumidos < kvConsumidosMenor ){

            kvConsumidosMenor = kvConsumidos;
            numClienteKvMenor = numCliente;
        }

        cout << "Ingrese numero de cliente: " << endl;
        cin >> numCliente;

    }

    cout << "El cliente que tuvo mayor consumo en la localidad 1 es: " << numClienteKvMayor1 << endl;

    cout << "El cliente que tuvo mayor consumo en la localidad 2 es: " << numClienteKvMayor2 << endl;

    cout << "El cliente que tuvo mayor consumo en la localidad 3 es: " << numClienteKvMayor3 << endl;


    cout << "La recaudacion total de la localidad 1 fue: " << recTotal1 << " $" << endl;

    cout << "La recaudacion total de la localidad 2 fue: " << recTotal2 << " $" << endl;

    cout << "La recaudacion total de la localidad 3 fue: " << recTotal3 << " $" << endl;


    cout << "El cliente con menor consumo fue: " << kvConsumidosMenor << endl;

    return 0;
}
