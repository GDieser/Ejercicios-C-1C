#include <iostream>
using namespace std;

int main(){

    /*La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima en una zona
    y tiempo determinado. Dada la temperatura m�xima y la temperatura m�nima de San Fernando de ayer,
    calcular y mostrar la amplitud t�rmica.
    NOTA: El usuario ingresar� como temperatura m�xima un valor mayor o igual al de la temperatura m�nima.*/

    int minimo, maximo, amplitud;

    cout <<"Ingrese la temperatura mayor: ";
    cin >> maximo;

    cout <<"Ingrese la temperatura menor: ";
    cin >> minimo;

    amplitud = maximo - minimo;

    cout << "La amplitud termica es: " << amplitud;



 return 0;
}
