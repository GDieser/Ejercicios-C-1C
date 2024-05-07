#include <iostream>

using namespace std;

/*10
Dada una lista de números compuesta por grupos donde cada grupo está separado del siguiente por un cero, y la lista de números finaliza 
cuando se ingresan dos ceros consecutivos, se pide determinar e informar:

a) La cantidad de grupos en los que se detecten un total de 4 o más números primos consecutivos. Se informa 1 resultado al final.
b) Para cada uno de los grupos en los que se haya detectado números negativos, el mayor y el segundo mayor de los mismos y en qué posición
 estaban dentro del subgrupo. En los grupos sin negativos, informar “Grupo sin negativos”. Se informan 4 resultados por cada grupo. 
c) El mayor número primo de todos los grupos, informando además en cual grupo y en qué posición del mismo fue detectado.  
Se informan 3 resultados al final.

Ejemplo de una posible lista: 5, 4, 3, 0, 18, -5, 20, 0, 7, 11, 25, 4, 0, 0.
*/

int main()
{
    int num, cont1 = 0, contPrimo = 0, mayorPrimo = 0, grupoPrimo = 0, posiPrimo = 0, mayorNega1 = 0, mayorNega2, posiNega1, posiNega2, contGrupo = 0, contPos = 0, contPrimoFinal = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    while (num != 0)
    {
        contGrupo++;

        while (num != 0)
        {
            contPos++;

            for (int i = 1; i < num; i++)
            {
                if (num % i == 0)
                {
                    cont1++;
                }
            }

            if (cont1 == 2)
            {
                contPrimo++;
                if (mayorPrimo == 0 || num > mayorPrimo)
                {
                    mayorPrimo = num;
                    grupoPrimo = contGrupo;
                    posiPrimo = contPos;
                }
            }else
            {
                contPrimo = 0;
            }
            
            if (num < 0)
            {
                if (mayorNega1 == 0 || num < mayorNega1)
                {
                    mayorNega2 = mayorNega1;
                    posiNega2 = posiNega1;
                    mayorNega1 = num;
                    posiNega1 = contPos;
                }else if (num < mayorNega2)
                {
                    mayorNega2 = num;
                    posiNega2 = contPos;
                } 
            }

            cout << "Ingrese un numero: " << endl;
            cin >> num;
            
        }

        if (contPrimo >= 4)
        {
            contPrimoFinal++;
        }

        //B)
        if (mayorNega1 == 0)
        {
            cout << "Grupo sin negativos" << endl;
        }else
        {
            cout << "Primer mayor negativo: " << mayorNega1 << ", posicion " << posiNega1 << ", segundo mayor negativo: " << mayorNega2 << ", posicion " << posiNega2 << endl;
        }

        contPos = 0, cont1 = 0, contPrimo = 0, mayorNega1 = 0;  

        cout << "Ingrese un numero: " << endl;
        cin >> num;
        
    }

    //A)
    if (contPrimoFinal == 0)
    {
        cout << "No se ingresaron 4 primos consecutivos" << endl;
    }else
    {
        cout << "En total: " << contPrimoFinal << " grupos con 4 primos consecutivos." << endl;
    }

    //C)
    if (mayorPrimo == 0)
    {
        cout << "No se ingresaron primos" << endl;
    }else
    {
        cout << "El mayor de los primos: " << mayorPrimo << ", pertenece al grupo: " << grupoPrimo << ", posicion: " << posiPrimo << endl;
    }
    
    return 0;
}
