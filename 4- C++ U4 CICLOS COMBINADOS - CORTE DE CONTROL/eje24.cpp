#include <iostream>

using namespace std;

/*24
Una expendedora de combustibles con varias sucursales tiene un lote de registros con las ventas del mes de enero, 
cada registro tiene los siguientes datos: 

-Nro. de Sucursal (del 1 al 15).
-Día de la venta.
-Tipo de día ("H" = hábil, "F" = fin de semana).
-Tipo de Combustible (1 = Premium, 2 = Súper, 3 = Gasoil).
-Monto de la venta.

Los registros se encuentran agrupados por Sucursal y el fin del lote se indica con Sucursal 0.
Se pide determinar e informar:

a) El promedio de recaudación para cada uno de los tres tipos de combustible en cada sucursal.
b) La recaudación total acumulada discriminada para la primera y la última semana del mes.
c) La sucursal con mayor recaudación en los días hábiles.
d) La recaudación máxima en fines de semana por cada tipo de combustible y en qué sucursal fue cada uno.
*/

int main()
{
    int numSuc, numSucAct, dia, monto, tipoCombustible, promPremium = 0, promSuper = 0, promGasoil = 0, recPrimerSem = 0, recUltimaSem = 0, mayorRec = 0, sucMayorRec = 0, sucFindeP, sucFindeS, sucFindeG, recMaximaP, recMaximaS, recMaximaG;
    char tipoDia;
    bool diaHabil = true, recMaximaGas = true, recMaximaPre = true, recMaximaSup = true;

    cout << "Ingrese número de sucursal: " << endl;
    cin >> numSuc;

    while (numSuc != 0)
    {
        int  contTotal = 0, acuDiaHabil = 0, acuPremiumFinde = 0, acuSuperFinde = 0, acuGasoilFinde = 0;
        float acuPremium = 0, acuSuper = 0, acuGasoil = 0, contPremium = 0, contSuper = 0, contGasoil = 0;

        numSucAct = numSuc;
        while (numSucAct == numSuc)
        {
            cout << "Ingrese día de venta: " << endl;
            cin >> dia;

            cout << "Ingrese tipo de día: 'H'- Hábil o 'F'- Fin de semana " << endl;
            cin >> tipoDia;

            cout << "Ingrese tipo de combustible: '1'- Premium, '2'- Super o '3'- Gasoil" << endl;
            cin >> tipoCombustible;

            cout << "Ingrese monto de venta: " << endl;
            cin >> monto;

            //Acumular para hacer promedio
            if (tipoCombustible == 1)
            {
                acuPremium += monto;
                contPremium++;
            }else if (tipoCombustible == 2)
            {
                acuSuper += monto;
                contSuper ++;
            }else if (tipoCombustible == 3)
            {
                acuGasoil += monto;
                contGasoil++;
            }
            //Cuento todos los ingresos
            contTotal++;
            
            //Calcular primeray ultima semana del mes:
            if (dia <= 7)
            {
                recPrimerSem += monto;
            }else if (dia >= 21)
            {
                recUltimaSem += monto;
            }
            
            //Dias hábiles y findes
            switch (tipoDia)
            {
            case 'H':
                acuDiaHabil += monto;
                break;
            case 'F':
                if (tipoCombustible == 1)
                {
                    acuPremiumFinde += monto;
                }else if (tipoCombustible == 2)
                {
                    acuSuperFinde += monto;
                }else if (tipoCombustible == 3)
                {
                    acuGasoilFinde += monto;
                }
                break;
            
            default:
                break;
            }

            cout << "Ingrese número de sucursal: " << endl;
            cin >> numSuc;
        }

        //Sacar promedios
        promPremium = (acuPremium / contPremium);
        promSuper = (acuSuper / contSuper);
        promGasoil = (acuGasoil / contGasoil);

        //A)
        cout << "Promedio de ventas para Premium: " << promPremium << "$, Super: " << promSuper << "$ y Gasoil: " << promGasoil << "$" << endl;

        //Guardar mayor recaudación dia hábil
        if (diaHabil == true || acuDiaHabil > mayorRec)
        {
            mayorRec = acuDiaHabil;
            sucMayorRec = numSucAct;
            diaHabil = false;
        }

        //Recaudacion maxima en findes
        if (recMaximaPre == true || acuPremiumFinde > recMaximaP)
        {
            recMaximaP = acuPremiumFinde;
            sucFindeP = numSucAct;
            recMaximaPre = false;
        }
        if (recMaximaSup == true || acuSuperFinde > recMaximaS)
        {
            recMaximaS = acuSuperFinde;
            sucFindeS = numSucAct;
            recMaximaSup = false;
        }
        if (recMaximaGas == true || acuGasoilFinde > recMaximaG)
        {
            recMaximaG = acuGasoilFinde;
            sucFindeG = numSucAct;
            recMaximaGas = false;
        }
        
    }
    //B)
    cout << "Recaudaciòn total primer semana: " << recPrimerSem << "$, y recaudación total de la última semana: " << recUltimaSem << "$" << endl;

    //C)
    cout << "La sucursal con mayor recaudación en días hábiles fue: " << sucMayorRec << endl;

    //D)
    cout << "Recaudación máxima Premium: " << recMaximaP << "$, sucursal: " << sucFindeP << endl;
    cout << "Recaudación máxima Super: " << recMaximaS << "$, sucursal: " << sucFindeS << endl;
    cout << "Recaudación máxima Gasool: " << recMaximaG << "$, sucursal: " << sucFindeG << endl;
    
    return 0;
}
