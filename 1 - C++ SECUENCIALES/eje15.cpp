#include <iostream>
using namespace std;

int main(){

    /*La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima en una zona
    y tiempo determinado. Dada la temperatura máxima y la temperatura mínima de San Fernando de ayer,
    calcular y mostrar la amplitud térmica.
    NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al de la temperatura mínima.*/

    int minimo, maximo, amplitud;

    cout <<"Ingrese la temperatura mayor: ";
    cin >> maximo;

    cout <<"Ingrese la temperatura menor: ";
    cin >> minimo;

    amplitud = maximo - minimo;

    cout << "La amplitud termica es: " << amplitud;



 return 0;
}
