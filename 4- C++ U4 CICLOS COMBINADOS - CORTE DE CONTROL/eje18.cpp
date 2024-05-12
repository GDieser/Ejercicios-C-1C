#include <iostream>

using namespace std;

/*18
Un supermercado tiene registrada la información de las ventas efectuadas durante el mes pasado entre todas las sucursales y 
se solicita un programa para obtener determinadas estadísticas.
Los datos que se disponen por cada una de las ventas efectuadas son:

-Número de sucursal (1 a 30)
-Día de la venta (1 a 31)
-Importe de la venta
-Tipo de venta (1=Particular, 2=Obra Social)
-Forma de Pago (1=Débito, 2=Crédito, 3=Contado)

Los datos están agrupados (no ordenados) por número de sucursal y puede haber varias ventas para la misma sucursal, para el mismo día, etc. 
Puede haber sucursales sin ventas durante todo el mes o durante algunos días del mes, no habrá registros con importes iguales a 0. 
Al final de todo el lote se indicará con un registro con número de sucursal igual a 0.
Se pide determinar e informar:

a- Para cada una de las sucursales el porcentaje de recaudación total  por sus ventas en crédito,
 débito y contado. Se informan 3 resultados por cada sucursal.
b-Indicar en cual sucursal se hizo el menor porcentaje de recaudación total por ventas de 
Tipo Obra Social. Se informa 1 resultado al final.
c-Para cada sucursal informar la primera y segunda venta individual de mayor importe. 
Se informan 2 resultados por sucursal.
d-La venta de menor importe de todas las ventas, indicando la sucursal y el día de la venta. 
Se informan 3 resultados al final.
*/

int main()
{
    int numSuc, dia, importe, numSucActual, tipoVenta, formaPago, menor;
    int diaMen, sucMen, porc1, porc2, porc3, porcSO;
    bool porMen = true, venMenor = true;

    cout << "Ingrese numero de sucursal: " << endl;
    cin >> numSuc;

    while (numSuc != 0)
    {
        int contOS = 0, contTotales = 0, acuDe = 0, acuCon = 0, acuCre = 0, acuTotal = 0, mayor1 = 0, mayor2 = 0;
        bool venta1 = true, venta2 = true;

        numSucActual = numSuc;
        while (numSucActual == numSuc)
        {
            cout << "Ingrese dias de venta: " << endl;
            cin >> dia;

            cout << "Ingrese importe: " << endl;
            cin >> importe;

            cout << "Ingrese tipo de venta: 1 - Particular, 2 - Obra Social" << endl;
            cin >> tipoVenta;

            cout << "Ingrese Forma de Pago: 1 - Débito, 2 - Crédito, 3 - Contado" << endl;
            cin >> formaPago;
            
            switch (formaPago)
            {
            case 1:
                acuDe += importe;
                break;
            case 2:
                acuCre += importe;
                break;
            case 3:
                acuCon += importe;
                break;
            default:
                break;
            }
            contTotales++;

            if (tipoVenta == 2)
            {
                contOS++;
            }
            
            if (venta1 == true || importe > mayor1)
            {
                mayor1 = importe;
                venta1 = false;

            }else if (venta2 == true || importe > mayor2)
            {
                mayor2 = importe;
                venta2 = false;
            }

            if (venMenor == true || importe < menor)
            {
                menor = importe;
                diaMen = dia;
                sucMen = numSuc;
                venMenor = false;
            }
            acuTotal += importe;
            
            cout << "Ingrese numero de sucursal: " << endl;
            cin >> numSuc;
            
        }

        porc1 = (acuDe * 100) / acuTotal;
        porc2 = (acuCre * 100) / acuTotal;
        porc3 = (acuCon * 100) / acuTotal;
        //A)
        cout << "Porcentaje de recaudación tarjeta de Debito: " << porc1 << "%, tarjeta de Credito: " << porc2 << "%, Contado: " << porc3 << "%" << endl;

        //C) 
        cout << "La primer venta mayor: " << mayor1 << ", y la segunda ventas mayor: " << mayor2 << endl;

        //Menor porcentaje obra social:

        porcSO = (contOS * 100) / contTotales;
        
        if (porMen == true || porcSO < porMen)
        {
            porMen = porcSO;
            porMen = false;
        }
        
    }

    //B)
    cout << "Porcentaje menor de ventas tipo Obra Social: " << porMen << "%" << endl;

    //D)
    cout << "Venta menor: " << menor << ", sucursal: " << sucMen << ", dia de venta: " << diaMen << endl;

    return 0;
}
