#include <iostream>
#include <locale.h>
using namespace std;

/*6)
Leer 10 números y guardarlos en un vector. Determinar e informar los dos últimos números pares en el vector y sus respectivas posiciones en el mismo. 
Suponer que habrá al menos dos números pares.*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int vecNum[10], ultimoPar = 0, anteultimoPar = 0, vectorUltimo, vectorAnteUltimo;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un número: "; 
        cin >> vecNum[i];
    }

    for (int x = 0; x < 10; x++)
    {
        if (vecNum[x]%2 == 0)
        {
            anteultimoPar = ultimoPar;
            vectorAnteUltimo = vectorUltimo;
            ultimoPar = vecNum[x];
            vectorUltimo = x + 1;
        }
        
    }

    cout << "Anteultimo par: " << anteultimoPar << " en la ubicación: " << vectorAnteUltimo  << ". Ultimo par: " << ultimoPar << " en la ubicación: " << vectorUltimo << endl;
    
    return 0;
}