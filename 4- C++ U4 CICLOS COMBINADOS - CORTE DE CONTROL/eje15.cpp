#include <iostream>

using namespace std;

/*15
Se dispone de una lista de 20 grupos de números y cada uno de los grupos estará compuesto por 10 números. Se pide determinar e informar: 
Informar cuántos grupos están formados por todos números alternados perfectos y no perfectos. Se informa 1 resultado al final. 
Ejemplo 1 de un grupo alternado: 6, 12, 28, 18, 6, 13, 6, 15
Ejemplo 2 de un grupo alternado: 12, 6, 15, 496, 25, 28, 15, 6
Para cada uno de los grupos el porcentaje de números primos y no primos. Se informan 2 resultados para cada grupo.
La cantidad de grupos donde se detectan 4 números primos consecutivos. Se informa un resultado al final. 
*/

int main()
{
    int num, acuPerfecto = 0, cont1 = 0 , cont2 = 0, contPrimo = 0, primo = 0, grupoAlt = 0, porc1, porc2, primosCons = 0;
    bool perfecto = true, noPerfecto = true;

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 10; x++)
        {
            cout << "Ingrese un numero: " << endl;
            cin >> num;

            for (int y = 1; y <= num; y++)
            {
                if (num%y == 0)
                {
                    acuPerfecto += num;
                    contPrimo++;
                }
            }

            if ((acuPerfecto - num) == num)
            {
                if (perfecto == true)
                {
                    perfecto = false;
                    noPerfecto = true;
                    cont1++;
                }
            }else if (noPerfecto == true)
            {
                noPerfecto == false;
                perfecto == true;
                cont1++;
            }
            
            if (contPrimo == 2)
            {
                primo++;
                cont2++;

                if (primo == 4)
                {
                    primosCons++;
                }
            }else
            {
                primo = 0;
            }
            
            
            acuPerfecto = 0, contPrimo = 0;
        }
        
        if (cont1 == 10)
        {
            grupoAlt++;
        }
        
        porc1 = (cont2 * 100) / 10;
        porc2 = 100 - porc1;
        cont2 = 0, primo = 0;

        //B)
        cout << "Porcentaje de primos: " << porc1 << "%, Porcentaje de no primos: " << porc2 << "%" << endl;

        
        perfecto = true, noPerfecto = true;
    }

    //A)
    cout << "Cantidad de grupos alternados entre perfectos y no perfectos: " << grupoAlt << endl;

    //C)
    cout << "Cantidad de grupos donde se ingresaron 4 primos de manera consecutiva: " << primosCons << endl;
    
    return 0;
}
