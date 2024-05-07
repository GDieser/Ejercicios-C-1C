#include <iostream>

using namespace std;

/*14
Dada una lista de números compuesta por grupos, cada grupo separado del siguiente por un cero, ingresando un número cero cuando 
no hay más grupos, se pide determinar e informar:
Para cada uno de los grupos el máximo de los números negativos y el mínimo de los números positivos. Se informan 2 resultados por cada grupo.
Para cada uno de los grupos el porcentaje de números pares y números impares. Se informan 2 resultados por cada grupo.
Cuántos números primos había en total entre los grupos. Se informa 1 resultado al final.

*/

int main()
{
    int num, maxNegativo = 0, minPositivo = 0, contPares = 0, contTotales = 0, contador = 0, primos = 0, porc1, porc2;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    while (num != 0)
    {
        while (num != 0)
        {
            contTotales++;

            if (num > 0)
            {
                if (minPositivo == 0 || num < minPositivo)
                {
                    minPositivo = num;
                }
            }else if (maxNegativo == 0 || num > maxNegativo)
            {
                maxNegativo = num;
            }

            if (num%2 == 0)
            {
                contPares++;
            }
            
            for (int i = 1; i <= num; i++)
            {
                if (num%i == 0)
                {
                    contador++;
                }
            }
            
            if (contador == 2)
            {
                primos++;
            }
            contador = 0;
            
            cout << "Ingrese un numero: " << endl;
            cin >> num;
        }

        //A)
        cout << "Maximo negativo: " << maxNegativo << ", minimo positivo: " << minPositivo << endl;

        porc1 = (contPares * 100)/contTotales;
        porc2 = 100 - porc1;

        //B)
        cout << "Porcentaje de pares: " << porc1 << "%, porcentaje de impares: " << porc2 << "%" << endl;

        minPositivo = 0, maxNegativo = 0, contTotales = 0, contPares = 0;
        
        cout << "Ingrese un numero: " << endl;
        cin >> num;
    }

    //C)
    cout << "Cantidad de primos totales: " << primos << endl;
    
    return 0;
}
