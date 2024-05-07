#include <iostream>

using namespace std;

/*13
Se dispone de una lista de 10 grupos de números y cada uno de los grupos estará compuesto por 5 números. Se pide determinar e informar:
Para cada uno de los 10 grupos el promedio de los números que lo componen. Se informa  un resultado para cada uno de los 10 grupos.
Determinar e informar el valor mínimo de todos los grupos, indicando en cuál grupo se encontró y su posición relativa en el mismo. 
Se informan 2 resultados al final de todo.
Indicar cuál de los 10 grupos tiene el mayor de los promedios y cuál es ese valor promedio. Se informan 2 resultados al final de todo.
*/

int main()
{
    int num, acumulador, minimo = 0, valorMinimo = 0, grupoMinimo, posMinima, grupoMinimo1, posMinima1, promedio, promedioMayor = 0, grupoMayor;

    for (int i = 1; i <= 10; i++)
    {
        for (int x = 1; x <= 5; x++)
        {
            cout << "Ingrese un numero: " << endl;
            cin >> num;

            acumulador += num;

            if (minimo == 0 || num < minimo)
            {
                minimo = num;
                posMinima = x;
                grupoMinimo = i;
            }
        }
        promedio = acumulador / 5;
        acumulador = 0;

        //A)
        cout << "Promedio del grupo: " << promedio << endl;

        if (promedioMayor == 0 || promedio > promedioMayor)
        {
            promedioMayor = promedio;
            grupoMayor = i;
        }
        
        if (valorMinimo == 0 || minimo < valorMinimo)
        {
            valorMinimo = minimo;
            grupoMinimo1 = grupoMinimo;
            posMinima1 = posMinima;
        }
        
        acumulador = 0, minimo = 0;
    }
    
    //B)
    cout << "Valor minimo: " << valorMinimo << ", grupo: " << grupoMinimo1 << ", ubicacion: " << posMinima1 << endl;

    //C)
    cout << "Promedio mayor: " << promedioMayor << ", grupo: " << grupoMayor << endl;

    return 0;
}
