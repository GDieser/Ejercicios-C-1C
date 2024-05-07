#include <iostream>

using namespace std;

/*11
Dada una lista de números compuesta por 10 grupos y cada grupo separado del siguiente por un cero, se pide determinar e informar:
Para cada uno de los grupos el máximo y mínimo de los números pares. Se informan 2 resultados para cada grupo.
La cantidad de  grupos donde se detectan 2 números perfectos consecutivos. Se informa 1 resultado al final. 
Informar cuántos grupos están formados por todos números alternados positivos y negativos. Se informa 1 resultado al final. 
Ejemplo 1 de un grupo alternado: 2, -3, 8, -10, 25, -13, 0
Ejemplo 2 de un grupo alternado: -2, 3, -8, 10, -25, 6, 0
*/

int main()
{
    int num, maxPar = 0, minPar = 0, acuPer = 0, contPer = 0, grupoPer = 0, contAlt = 0, contTotal = 0, contGrupoAlt = 0, contGrupoPer;
    bool positivo = true, negativo = true;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> num;

        maxPar = 0;

        while (num != 0)
        {
            if (num%2 == 0)
            {
                if (maxPar == 0 || num > maxPar)
                {
                    maxPar = num;
                    minPar = num;
                }else if (num < minPar)
                {
                    minPar = num;
                }
            }
            
            for (int x = 1; x <= num; x++)
            {
                if (num%x == 0)
                {
                    acuPer += x;
                }
            }
                
            if ((acuPer - num) == num)
            {
                contPer++;
                if (contPer == 2)
                {
                    grupoPer++;
                }
            }else
            {
                contPer = 0;
            }

            if (num > 0)
            {
                if (negativo == true)
                {
                    positivo = true;
                    negativo = false;
                    contAlt++;
                }
            }else if (positivo == true)
            {
                negativo = true;
                positivo = false;
                contAlt++;
            }
            contTotal++;
                
            cout << "Ingrese un numero: " << endl;
            cin >> num;

            acuPer = 0;
        }
        contGrupoPer = grupoPer;

        //A)
        cout << "Maximo pares: " << maxPar << ", Minimo pares: " << minPar << endl;

        if (contAlt == contTotal)
        {
            contGrupoAlt++;
            contAlt = 0;
            contTotal = 0;
        }else
        {
            contAlt = 0;
            contTotal = 0;
        }

        contPer = 0, negativo = true, positivo = true;
    }

    //B)
    cout << "Cantidad de grupos con 2 numeros perfectos consecutiovos: " << contGrupoPer << endl;

    //C)
    cout << "Grupos alternados en positivos y negativos: " << contGrupoAlt << endl;

    return 0;
}
