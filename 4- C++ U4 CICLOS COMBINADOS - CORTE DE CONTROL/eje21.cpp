#include <iostream>

using namespace std;

/*21
Una casa de ventas de libros con varias sucursales registró las ventas durante el mes anterior en un lote de registros. 
Para cada venta se registraron los siguientes datos:

-Sucursal de la venta (1 a 20)
-Número del vendedor que efectuó la venta (1 a 150)
-Día de la venta (1 a 31)
-Importe de la venta
-Tipo de Cliente ("U"= Universitario, "N"= No Universitario )

El lote finaliza con un registro con importe igual a cero. Los datos se ingresan agrupados por sucursal.
A partir de esta información se pide determinar e informar:

a) La comisión total pagada a todos los vendedores en el mes para cada sucursal.
Considerar que la comisión es un 10% cuando el tipo de cliente es universitario y un 20% cuando no lo es.
b) La cantidad total vendida de libros por cada sucursal.
c) El número de vendedor que haya efectuado la venta individual de mayor importe, informando en qué sucursal trabaja
y el día en que se realizó esa venta. Se esperan los datos de un único vendedor.
d) El promedio de recaudación por sucursal para la segunda quincena para los clientes No Universitarios.
e) El porcentaje de ventas total discriminado por clientes Universitarios y No Universitarios.
*/

int main()
{
    int numSuc, numSucAct, numVendedor, diaVenta, importe, contUni = 0, contNoUni = 0, importeMayor, sucMayor, diaMayor;
    char tipoCliente;
    bool ventaMayor = true;

    cout << "Ingrese sucursal de vente: " << endl;
    cin >> numSuc;

    while (numSuc != 0)
    {
        int contTotal = 0, acuUni = 0, acuNoUni = 0, acuQuincena = 0, contQuincena = 0;
        float comision1, comision2;

        numSucAct = numSuc;
        while (numSucAct == numSuc)
        {
            cout << "Numero de vendedor: " << endl;
            cin >> numVendedor;

            cout << "Dia de venta: " << endl;
            cin >> diaVenta;

            cout << "Importe: " << endl;
            cin >> importe;

            cout << "Tipo de cliente: 'U'- Universitaro o 'N'- No universitario" << endl;
            cin >> tipoCliente;

            contTotal++;

            //Comisiones
            switch (tipoCliente)
            {
            case 'U':
                acuUni += importe;
                contUni++;
                break;
            case 'N':
                //Promedio quincena 
                if (diaVenta > 15)
                {
                    acuQuincena += importe;
                    contQuincena++;
                }
                contNoUni++;
                acuNoUni += importe;
                break;
            default:
                break;
            }

            //Mayor venta individual
            if (ventaMayor == true || importe > importeMayor )
            {
                importeMayor = importe;
                diaMayor = diaVenta;
                sucMayor = numSucAct;
            }
            
            cout << "Ingrese sucursal de vente: " << endl;
            cin >> numSuc;

        }
        comision1 = (acuUni * 0.1);
        comision2 = (acuNoUni * 0.2);

        //A)
        cout << "Comisión para ventas Universitarias: " << comision1 << ", comisión para ventas No Universitarias: " << comision2 << endl;
        
    }
    

    return 0;
}
