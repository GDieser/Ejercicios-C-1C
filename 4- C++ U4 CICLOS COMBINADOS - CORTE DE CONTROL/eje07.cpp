#include <iostream>

using namespace std;

/*7
Se dispone de una lista de 10 grupos de números enteros separados entre ellos por ceros. Se pide determinar e informar:

a) Informar el promedio de cada grupo. Se informa 1 resultado por cada grupo.
b) Determinar e informar el valor mínimo de todos los grupos, indicando en qué grupo se encontró y su posición relativa en el mismo. 
Se informan 3 resultados al final.
c) El mayor de los promedios y a que grupo pertenecía. Se informan 2 resultados al final.
*/

int main()
{
    int num, acumGrupo = 0, contGrupo = 0, minimo = 0, minGrupo, minUbic, promedio, promedioMayor, grupoMayor;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> num;

        while (num != 0)
        {
            acumGrupo += num;
            contGrupo++;

            if (minimo == 0 || num < minimo)
            {
                minimo = num;
                minGrupo = i;
                minUbic = contGrupo;
            }

            cout << "Ingrese un numero: " << endl;
            cin >> num;
        }

        promedio = acumGrupo / contGrupo;

        if (promedioMayor == 0 || promedio > promedioMayor)
        {
            promedioMayor = promedio;
            grupoMayor = i;
        }
        //A)
        cout << "El promedio del grupo es: " << promedio << endl;
        
        acumGrupo = 0;
        contGrupo = 0;
    }
    //B)
    cout << "Valor minimo: " << minimo << ", pertenece al grupo: " << minGrupo << " en la ubicacion: " << minUbic << endl; 

    //C)
    cout << "El promedio mayor es: " << promedioMayor << " y pertenece al grupo: " << grupoMayor << endl;
    
    return 0;
}
