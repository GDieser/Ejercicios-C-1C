#include <iostream>

using namespace std;

/*12
Se dispone de una lista de 10 grupos de números y cada uno de los grupos estará compuesto por 5 números. Se pide determinar e informar:
Para cada uno de los 10 grupos la cantidad de números positivos, negativos y ceros que lo componen. 
Se informan 3 resultados para cada uno de los 10 grupos.
Para cada uno de los 10 grupos el último número primo y en qué orden apareció en ese grupo, si en un grupo no hubiera números primos 
informar con un cartel aclaratorio. Se informan 2 resultados para cada uno de los 10 grupos.
Informar cuántos números impares hay en total entre los 10 grupos. Se informa un resultado al final de todo, es decir no debe informar 
resultados grupo por grupo.
*/

int main()
{
    int num, positivos = 0, negativos = 0, ceros = 0, contPrimo = 0, grupoPrimo, ultPrimo = 0, contImpar = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            cout << "Ingrese un numero: " << endl;
            cin >> num;
            
            if (num > 0)
            {
                positivos++;
            }
            else if (num < 0)
            {
                negativos++;
            }else
            {
                ceros++;
            }
            
            for (int y = 1; y <= num; y++)
            {
                if (num%y == 0)
                {
                    contPrimo++;
                }
            }

            if (contPrimo == 2)
            {
                ultPrimo = num;
                grupoPrimo = x;
            }
                
            if (num%2 != 0)
            {
                contImpar++;
            }

            contPrimo = 0;
        }

        cout << "Positivos: " << positivos << ", Negativos: " << negativos << ", Ceros: " << ceros << endl;
        positivos = 0, negativos = 0, ceros = 0;

        if (ultPrimo == 0)
        {
            cout << "No se ingresaron Primos" << endl;
        }else
        {
            cout << "Ultimo primo: " << ultPrimo << ", ubicacion: " << grupoPrimo << endl;
        }
    }

    cout << "Cantidad de impares: " << contImpar << endl;

    return 0;
}
