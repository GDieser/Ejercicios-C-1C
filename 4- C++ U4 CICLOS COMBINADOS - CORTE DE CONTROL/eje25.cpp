#include <iostream>

using namespace std;

/*25
Una empresa registró las compras realizadas a sus distintos proveedores durante todo el año anterior. 
Para cada compra se registraron los siguientes datos:

-Número de proveedor (número de cuatro cifras no correlativo).
-Día (1 a 31).
-Mes (1 a 12).
-Tipo de Factura (Responsable inscripto: "A", Consumidor Final: "B", o Monotributo: "C").
-Monto de la compra.

Este lote finaliza con un registro con número de proveedor igual a 0.
Los registros están agrupados por número de proveedor. En el lote anterior no aparecen registros de los proveedores a 
los que que no se les hayan realizado compras.
Se pide determinar e informar:

a) El monto máximo registrado en una sola compra por cada proveedor y el número de proveedor al que se le compró.
b) La inversión total de todo el año discriminada por tipo de factura.
c) La compra con menor monto registrada durante el mes de Agosto junto al tipo de factura de la compra.
d) La cantidad de compras que se realizaron a cada proveedor.

*/

int main()
{
    int numProv, numProvAct, dia, mes, monto, acuFacA = 0, acuFacB = 0, acuFacC = 0, menorMonto = 0;
    char tipoFactura, tipoFacturaMenor;
    bool facturaMenor = true;
    

    cout << "Ingrese numero de Proveedor: " << endl;
    cin >> numProv;

    while (numProv != 0)
    {
        int montoMaximo = 0, proveedorMax = 0, contVentasProv = 0;
        bool montoMax = true;

        numProvAct = numProv;
        while (numProvAct == numProv)
        {
            cout << "Ingrese dia: " << endl;
            cin >> dia;

            cout << "Ingrese mes: " << endl;
            cin >> mes;

            cout << "Ingrese tipo de Factura: 'A' responsable inscripto, 'B' consumidor final o 'C' monotributista" << endl;
            cin >> tipoFactura;

            cout << "Ingrese monto de la compra: " << endl;
            cin >> monto;

            //Guarda monto maximo
            if (montoMax == true || monto > montoMaximo)
            {
                montoMaximo = monto;
                proveedorMax = numProvAct;
                montoMax = false;
            }

            //Tipos de facturas:
            switch (tipoFactura)
            {
            case 'A':
                acuFacA += monto;
                break;
            case 'B':
                acuFacB += monto;
                break;
            case 'C':
                acuFacC += monto;
                break;
            default:
                break;
            }

            //Contar ventas
            contVentasProv++;

            //Menor monto en agosto
            if (mes == 8)
            {
                if (facturaMenor == true || monto < menorMonto)
                {
                    menorMonto = monto;
                    tipoFacturaMenor = tipoFactura;
                    facturaMenor = false;
                }
                
            }

            cout << "Ingrese numero de Proveedor: " << endl;
            cin >> numProv;
        }

        //A)
        cout << "Monto maximo registrado: $" << montoMaximo << ", proveedor: " << proveedorMax << endl;
        
        //D)
        cout << "Cantidad de compras realizadas: " << contVentasProv << endl;

    }
    //B
    cout << "Monto total ivertido para facturas A: $" << acuFacA << endl;
    cout << "Monto total ivertido para facturas B: $" << acuFacB << endl;
    cout << "Monto total ivertido para facturas C: $" << acuFacC << endl;

    //C)
    cout << "La compra menor hecha en el mes de agosto fue: " << menorMonto << "$, tipo de factura: " << tipoFacturaMenor << endl; 
    

    return 0;
}
