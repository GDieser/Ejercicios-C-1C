#include <iostream>

using namespace std;

/*9
Hacer un programa para ingresar los valores de los pesos de distintas encomiendas que se deben enviar a distintos clientes y que finaliza
cuando se ingresa un peso negativo. Se deben agrupar las encomiendas en camiones que pueden transportar hasta 200 kilos en total.

Ejemplo: 10, 20, 140,   70, 100,   40, 10, 50, 80,   90, 30, 40,   50, -10
Camión:           1               2                   3                       4              5                      

Se pide determinar e informar:
a) El número de cada camión y peso total de encomiendas. Camión 1: 170 kg, Camión 2: 170 kg, etc. 
b) El número de camión que transporta mayor cantidad de encomiendas. En el ejemplo anterior sería el Camión 3 con 4 encomiendas. 
*/

int main()
{
    int num, acuPeso = 0, camion = 0, encomienda = 0, encomiendaMayor = 0, camionMayor = 0;

    cout << "Ingrese peso: " << endl;
    cin >> num;

    while (num > 0)
    {
        acuPeso += num;

        if (acuPeso > 200)
        {
            camion++;
            acuPeso -= num;

            //A)
            cout << "Numero de camion: " << camion << ", peso: " << acuPeso << "kg" << endl;

            if (encomiendaMayor == 0 || encomienda > encomiendaMayor)
            {
                encomiendaMayor = encomienda;
                camionMayor = camion;
            }
            acuPeso = num;
            encomienda = 0;
        }
        encomienda++;

        cout << "Ingrese peso: " << endl;
        cin >> num;
    }
    //B)
    cout << "El camion que transporta la mayor cantidad de encomiendas: " << camionMayor << ", con: " << encomiendaMayor << " encomiendas" << endl;
    

    return 0;
}
