#include <iostream>

using namespace std;

/*19
Un negocio de venta de huevos tiene registrada la información de las ventas efectuadas durante el mes pasado entre todas las sucursales. 
Los datos que se disponen por cada una de las ventas efectuadas son:

-Número de sucursal (1 a 30)
-Día de la venta (1 a 31)
-Cantidad de cajas de huevos vendidas
-Importe de la venta 
-Forma de Pago (1=Débito, 2=Crédito, 3=Contado)

Los datos están agrupados, no ordenados, por número de sucursal y puede haber varias ventas para la misma sucursal, para el mismo día, etc.
Puede haber sucursales sin ventas durante todo el mes o durante algunos días del mes. 
En tal caso no habrá registros de ventas para esa sucursal o para esos días del mes. No habrá registros con cantidades o importes iguales a 0.
La finalización de todo el lote se indicará con un registro con número de sucursal igual a 0.

Se pide determinar e informar:

a) Informar en cuál de las sucursales la cantidad TOTAL de cajas de huevos vendidos haya sido menor descartando  a las 
sucursales cuya cantidad TOTAL de cajas vendidas fue menor a 100. Se informa 1 resultado al final.  
b) Informar el número de quincena en la que se hayan vendido mayor cantidad de cajas entre todas las sucursales. Se informa un resultado 
al final de todo.
c) Para cada una de las sucursales el porcentaje de recaudación total por sus ventas discriminado en crédito, débito y contado. 
Se informan 3 resultados por cada sucursal.
d) Para cada sucursal informar la primera y segunda venta individual de menor importe, indicando además en qué día fueron esas ventas.
Se informan 4 resultados por sucursal.
*/

int main()
{
    int  numSuc, diaV, cantHuevos, importe, formaP, numSucActual, sucMenor, cajaTotalMenor, contQuin1 = 0, contQuin2 = 0;
    bool cajaTotalMen = true;

    cout << "Ingrese numero de sucursal: " << endl;
    cin >> numSuc;

    while (numSuc != 0)
    {
        int acuCant = 0, contDe = 0, contCre = 0, contCon = 0, contTotal = 0, ventaMenor1 = 0, porc1, porc2, porc3;
        int ventaMenor2 = 0, diaMenor1, diaMenor2;
        bool ventaMen1 = true, ventaMen2 = true;
        numSucActual = numSuc;
        while (numSuc == numSucActual)
        {
            
            //Pedimos
            cout << "Dias de ventas: " << endl;
            cin >> diaV;

            cout << "Cantidad de cajas de huevos: " << endl;
            cin >> cantHuevos;

            cout << "Importe: " << endl;
            cin >> importe;

            cout << "Ingrese forma de pago: 1 - Debito, 2 - Credito , 3 - Contado" << endl;
            cin >> formaP;

            //Cantidad de huevos vendidas
            acuCant += cantHuevos;
            //Mayor venta por quincena
            if (diaV > 15)
            {
                contQuin2 += cantHuevos;
            }else
            {
                contQuin1 += cantHuevos;
            }
            

            if (formaP == 1)
            {
                contDe += importe;
            }else if (formaP == 2)
            {
                contCre += importe;
            }else if (formaP == 3)
            {
                contCon += importe;
            }
            contTotal += importe;
            
            //Primera y segunda venta individual menor
            if (ventaMen1 == true)
            {
                ventaMenor1 = importe;
                diaMenor1 = diaV;
                ventaMen1 = false;
            }else if (importe < ventaMenor1)
            {
                if (ventaMen2 == true)
                {
                    ventaMenor2 = ventaMenor1;
                    diaMenor2 = diaMenor1;
                    ventaMen2 = false;
                }
                ventaMenor1 = importe;
                diaMenor1 = diaV;
            }else if (ventaMen2 == true || importe < ventaMenor2)
            {
                ventaMenor2 = importe;
                diaMenor2 = diaV;
                ventaMen2 = false;
            }
            
            // if (ventaMen1 == true || importe < ventaMenor1)
            // {
            //     ventaMenor1 = importe;
            //     ventaMen1 = false;
            // }else if (ventaMen2 == true || importe < ventaMenor2)
            // {
            //     ventaMenor2 = importe;
            //     ventaMen2 = false;
            // }
            
            //Pedimos
            cout << "Ingrese numero de sucursal: " << endl;
            cin >> numSuc;
            
        }
        //Cantidad de huevos menor > 100
        if (acuCant >= 100)
        {
            if (cajaTotalMen == true || acuCant < cajaTotalMenor)
            {
                cajaTotalMenor = acuCant;
                sucMenor = numSucActual;
            }   
        }

        //Porcentajes
        porc1 = (contDe * 100) / contTotal; 
        porc2 = (contCre * 100) / contTotal;
        porc3 = (contCon * 100) / contTotal;

        //C)
        cout << "Porcentaje de ventas para tarjeta de Debito: " << porc1 << endl;
        cout << "Porcentaje de ventas para tarjeta de Credito: " << porc2 << endl;
        cout << "Porcentaje de ventas para venats al Contado: " << porc3 << endl;

        //D)
        cout << "Primera venta individual de menor importe: " << ventaMenor1 << ", realizada el día: " << diaMenor1 << endl;
        
        cout << "Segunda venta individual de menor importe: " << ventaMenor2 << ", realizada el día: " << diaMenor2 << endl;

        
    }

    //A)
    cout << "Sucursal con menor cantidad vendida es: " << sucMenor << ", con " << cajaTotalMenor << " cajas vendidas." << endl;

    //B)
    if (contQuin1 > contQuin2)
    {
        cout << "La quincena con mas ventas fue la primera" << endl;
    }else if(contQuin2 > contQuin1)
    {
        cout << "La quincena con mas ventas fue la segunda" << endl;
    }else
    {
        cout << "Se vendiero la misma cantidad en ambas quincenas" << endl;
    }

    return 0;
}
