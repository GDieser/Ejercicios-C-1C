#include <iostream>

using namespace std;

/*Hacer un programa para ingresar por teclado los saldos de los clientes de un
banco. Cada registro contiene los siguientes datos:
- Número del cliente
- Número de sucursal (1, 2, 3 o 4)
- Saldo del cliente
El lote finaliza cuando se ingresa un registro con número de sucursal igual a 10.
Se pide determinar e informar.
a) El número de sucursal con mayor porcentaje de clientes con saldo superior a
$ 20000.
b) El número de cliente con mayor saldo, indicando también de qué número de
sucursal es ese cliente. Se listan 2 resultados.
c) Para cada una de las sucursales la suma de los saldos de todos sus clientes.
Se listan 4 resultados*/

int main()
{
    int numCliente, numSucursal, saldo, contNumSucursal1 = 0, contNumSucursal2 = 0, contNumSucursal3 = 0, contNumSucursal4 = 0;
    int saldoMayor = 0, numClienteSaldoMay, acumSucursal1 = 0, acumSucursal2 = 0, acumSucursal3 = 0, acumSucursal4 = 0, contTotal = 0;
    int porcentaje1, porcentaje2, porcentaje3, porcentaje4, porcentajeMaximo, sucursalPorMax, sucursalClienteSaldMax;

    cout << "Ingrese Numero de cliente: " << endl;
    cin >> numCliente;

    while( numCliente != 10 ){

        cout << "Ingrese Numero de Sucursal: 1, 2, 3 o 4" << endl;
        cin >> numSucursal;

        cout << "Ingrese Saldo: " << endl;
        cin >> saldo;

        if( saldo > 20000 ){

            if( numSucursal == 1 ){
                contNumSucursal1++;
            }
            else if( numSucursal == 2 ){
                contNumSucursal2++;
            }
            else if( numCliente == 3 ){
                contNumSucursal3++;
            }
            else if( numCliente == 4){
                contNumSucursal4++;
            }
        }

        if( saldoMayor == 0 ){
            saldoMayor = saldo;
            numClienteSaldoMay = numCliente;
            sucursalClienteSaldMax = numSucursal;
        }
        else if( saldo > saldoMayor ){
            saldoMayor = saldo;
            numClienteSaldoMay = numCliente;
            sucursalClienteSaldMax = numSucursal;
        }

        if( numSucursal == 1 ){
            acumSucursal1 += saldo;
        }
        else if( numSucursal == 2 ){
            acumSucursal2 += saldo;
        }
        else if( numSucursal == 3 ){
            acumSucursal3 += saldo;
        }
        else if( numSucursal == 4){
            acumSucursal4 += saldo;
        }

        contTotal++;

        cout << "Ingrese Numero de cliente: " << endl;
        cin >> numCliente;

    }

    porcentaje1 = (contNumSucursal1 * contTotal) / 100;
    porcentaje2 = (contNumSucursal2 * contTotal) / 100;
    porcentaje3 = (contNumSucursal3 * contTotal) / 100;
    porcentaje4 = (contNumSucursal4 * contTotal) / 100;

    if( porcentaje1 > porcentaje2 ){
        porcentajeMaximo = porcentaje1;
        sucursalPorMax = 1;
    }
    else{
        porcentajeMaximo = porcentaje2;
        sucursalPorMax = 2;
    }

    if( porcentaje3 > porcentajeMaximo){
        porcentajeMaximo = porcentaje3;
        sucursalPorMax = 3;
    }
    else if( porcentaje4 > porcentajeMaximo ){
        porcentajeMaximo = porcentaje4;
        sucursalPorMax = 4;
    }

    cout << endl;

    cout << "El numero sucursal con mayor porcentaje de saldos mayor a $20.000: " << sucursalPorMax << endl;

    cout << endl;

    cout << "El numero de cliente con mayor saldo es: " << numClienteSaldoMay << ", pertenece a la sucursal: " << sucursalClienteSaldMax << endl;

    cout << endl;

    cout << "La suma de los saldos de todos los clientes de la sucursal 1 es: " << acumSucursal1 << endl;

    cout << endl;

    cout << "La suma de los saldos de todos los clientes de la sucursal 2 es: " << acumSucursal2 << endl;

    cout << endl;

    cout << "La suma de los saldos de todos los clientes de la sucursal 3 es: " << acumSucursal3 << endl;

    cout << endl;

    cout << "La suma de los saldos de todos los clientes de la sucursal 4 es: " << acumSucursal4 << endl;


    return 0;
}
