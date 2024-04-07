#include <iostream>
using namespace std;

int main(){

    /*Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de
    las cuatro semanas del mes. El programa debe listar la recaudación promedio por semana y el porcentaje
    de recaudación por semana.
    Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000 y como
    porcentajes por semana: 20%, 15%, 60% y 5%.*/

    int sem1, sem2, sem3, sem4, total;
    float p1, p2, p3, p4;

    cout << "Ingrese lo facturado en la semana 1: ";
    cin >> sem1;

    cout << "Ingrese lo facturado en la semana 2: ";
    cin >> sem2;

    cout << "Ingrese lo facturado en la semana 3: ";
    cin >> sem3;

    cout << "Ingrese lo facturado en la semana 4: ";
    cin >> sem4;

    total = sem1 + sem2 + sem3 + sem4;

    p1 = (sem1 * 100) / total;
    p2 = (sem2 * 100) / total;
    p3 = (sem3 * 100) / total;
    p4 = (sem4 * 100) / total;

    cout << "El porcentaje de ventas de la semana 1 es: " << p1 <<"%" << endl;
    cout << "El porcentaje de ventas de la semana 2 es: " << p2 <<"%" << endl;
    cout << "El porcentaje de ventas de la semana 3 es: " << p3 <<"%" << endl;
    cout << "El porcentaje de ventas de la semana 4 es: " << p4 <<"%" << endl;


 return 0;
}
