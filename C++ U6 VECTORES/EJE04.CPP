#include <iostream>
#include <locale.h>
using namespace std;

/*4)
Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el valor máximo absoluto del vector. 
Por ejemplo 20, -43 y 5, el máximo absoluto es -43.*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int numero, vecNum[10], negativo, vector, maximoAbsoluto = 0, maximoAbsolutoReal = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un número: ";
        cin >> numero;

        vecNum[i] = numero;
    }

    for (int x = 0; x < 10; x++)
    {
        vector = vecNum[x];

        if (vector < 0)
        {
            vector = (vector * -1);
        }
        
        if (vector > maximoAbsoluto)
        {
            maximoAbsoluto = vector;
            maximoAbsolutoReal = vecNum[x];
        }
    }
    
    cout << "El maximo absoluto es: " << maximoAbsolutoReal << endl;
    
    return 0;
}