#include <iostream>

using namespace std;

/*8
Hacer un programa para ingresar por teclado 5 grupos compuestos por números ordenados de menor a mayor. 
El final de cada grupo se detecta al ingresar un número menor a su anterior. 
Se debe obtener y emitir:
a) Para cada uno de los grupos la cantidad de números primos que lo componen. Se informa 1 resultado por cada grupo.
b) El menor número par de cada uno de los grupos. Se informa 1 resultado por cada grupo.
c) El anteúltimo y último número positivo de cada uno de los grupos. Se informan 2 resultados por cada grupo.

Ejemplo de cómo se conforman los grupos:
-20, -5, 8,  2, 20, 35, 42,   12, 22, 23,   7, 12, 18, 23, 80,   12, 24, 36, -5
Grupo 1          Grupo 2       Grupo 3        Grupo 4        Grupo 5
*/

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int num, minimo, contPrimo = 0, cont1 = 0, menorPar = 0, anteUlt, ultimo = 0;
        
        cout << "Ingrese un numero: " << endl;
        cin >> num;
        minimo = num;

        cout << minimo << endl;
        cout << i << endl;

        while (minimo <= num)
        {
           //cout << minimo << endl;
            //cout << num << endl;

            for (int x = 1; x <= num; x++)
            {
                if (num%x == 0)
                {
                    cont1++;
                }
            }
            
            if (cont1 == 2)
            {
                contPrimo++;
            }

            if (num%2 == 0)
            {
                if (menorPar == 0 || num < menorPar)
                {
                    menorPar = num;
                }
            }

            if (num > 0)
            {
                if (ultimo == 0)
                {
                    ultimo = num;
                    anteUlt = ultimo;
                }
                else
                {
                    anteUlt = ultimo;
                    ultimo = num;
                }
            }
            
            if (num >= minimo)
            {
                minimo = num;
            }

            cout << "Ingrese un numero 2: " << endl;
            cin >> num;
            
            
            cont1 = 0;
        }
        
        //A)
        cout << "Cantidad de primos: " << contPrimo << endl;

        //B)
        cout << "El menor par del grupo es: " << menorPar << endl;

        //C)
        cout << "Ante ultimo positivo: " << anteUlt << ", ultimo positivo: " << ultimo << endl;        
    }
    

    return 0;
}
