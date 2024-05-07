#include <iostream>

using namespace std;

/*4
Dada una lista de números compuesta por 10 grupos y cada grupo separado del siguiente por un cero, se pide determinar e informar:

a) Para cada uno de los grupos el máximo de los números pares y el máximo de los números impares. Se informan 2 resultados por cada grupo.
b) Para cada uno de los grupos el porcentaje de números negativos y números positivos. Se informan 2 resultados por cada grupo.
c) Cuántos números positivos había en total entre los 10 grupos. Se informa 1 resultado al final.
*/

int main()
{
    int num, contPositivo = 0, porc1, porc2;

    for (int i = 0; i < 10; i++)
    {
        int maxPares = 0, maxImpares = 0, positivo = 0, negativo = 0,  totales = 0;

        cout << "Ingrese numero: " << endl;
        cin >> num;

        while (num != 0)
        {
            if (num > 0)
            {
                positivo++;
                contPositivo++;
            }else{
                negativo++;
            }

            if (num % 2 == 0)
            {
                if (maxPares == 0)
                {
                    maxPares = num;
                }else if ( num > maxPares )
                {
                    maxPares = num;
                }
            }else if (maxImpares == 0)
            {
                maxImpares = num;
            }else if (num > maxImpares)
            {
                maxImpares = num;
            }
            totales++; 

            cout << "Ingrese numero: " << endl;
            cin >> num;
        }

        cout << "Maximo de Pares: " << maxPares << ", y Maximo Impares: " << maxImpares << endl;

        porc1 = (positivo * 100)/totales;
        porc2 = (negativo * 100)/totales;

        cout << "Porcentaje de positivos: " << porc1 << "%, y porcentaje de negativos: " << porc2 << "%" << endl;

    }
    cout << "Positivos totales: " << contPositivo << endl;     

    return 0;
}
