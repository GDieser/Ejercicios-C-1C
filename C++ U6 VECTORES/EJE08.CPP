#include <iostream>
#include <locale.h>
using namespace std;

/*8)
Dada una lista de números compuesta por 10 subgrupos y cada grupo separado del siguiente por un cero,
se pide generar un vector de 10 elementos con el máximo de cada uno de los subgrupos. Luego mostrar los elementos del vector por pantalla.*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int vecNum[10], numero, maximoGrupo;
    bool maxVector = true;

    for (int i = 0; i < 10; i++)
    {
        cout << endl;
        cout << "Ingrese un número: ";
        cin >> numero;

        while (numero != 0)
        {
            if (maxVector == true || numero > maximoGrupo)
            {
                maximoGrupo = numero;
                maxVector = false;
            }
            
            cout << "Ingrese un número: ";
            cin >> numero;
        }

        vecNum[i] = maximoGrupo;
        maxVector = true;
        
        cout << endl;
        cout << "Cambio de lote." << endl;
    }

    for (int x = 0; x < 10; x++)
    {
        cout << "El número maximo del vector " << (x+1) << " es: " << vecNum[x] << endl;
    }

    return 0;
}