#include <iostream>

using namespace std;

/*5
Se dispone de una lista de 10 grupos de números enteros separados entre ellos por ceros. Se pide determinar e informar:
a) El número de grupo con mayor porcentaje de números impares positivos respecto al total de números que forman el grupo. 
Se informa 1 resultado al final.
b) Para cada grupo el último número primo y en qué orden apareció en ese grupo, si en un grupo no hubiera números primos informar con un 
cartel aclaratorio. Se informan 2 resultados por cada grupo.
c) Informar cuantos grupos están formados por todos números ordenados de mayor a menor. Se informa 1 resultado al final.
*/

int main()
{
    int num, i, y, contGrupo, impar, ultPrimo, contPrimo, ubiPrimo, mayor, menor, porcTotal, porcMaximo = 0, grupoMaximo, contOrdenado, contGruposOrdenados = 0;

    for ( i = 1; i <= 2; i++)
    {
        contGrupo = 0, impar =0, contPrimo = 0, contOrdenado = 0, ultPrimo = 0, porcTotal = 0;

        cout << "Ingrese un numero: " << endl;
        cin >> num;

        while ( num != 0 )
        {
            contGrupo++;

            if (num > 0 && num%2 != 0)
            {  
                impar++;
            }
            
            for ( y = 1; y <= num; y++)
            { 
                if (num%y == 0)
                {
                    contPrimo++;
                }
            }
            if (contPrimo == 2)
            {
                ultPrimo = num;
                ubiPrimo = contGrupo;
            }
            if (contGrupo == 1 || num >= mayor)
            {
                mayor = num;
            }
            if (contGrupo == 1 || num <= menor)
            {
                menor = num;
                contOrdenado++;
            }

            cout << "Ingrese un numero: " << endl;
            cin >> num;

            contPrimo = 0;
        }
        porcTotal = (impar * 100)/contGrupo;

        if (porcMaximo == 0 || porcTotal > porcMaximo)
        {
            porcMaximo = porcTotal;
            grupoMaximo = i;
        }

        if (contGrupo == contOrdenado)
        {
            contGruposOrdenados++;
        }
        
        if (ultPrimo == 0)
        {
            cout << "No se ingresaron primnos" << endl;
        }else
        {
            cout << "El ultiomo primo fue: " << ultPrimo << ", en la ubicacion: " << ubiPrimo << endl;
        }
        
    }

    cout << "El grupo con mayor porcentaje de numero impares positivos fue el: " << grupoMaximo << endl;
    
    if (contGruposOrdenados == 0)
    {
        cout << "No hubo grupos ordenados de mayor a menor" << endl;
    }else
    {
        cout << "Se ingresaron: " << contGruposOrdenados << " grupos ordenados de mayor a menor." << endl;
    }
    
    return 0;
}
