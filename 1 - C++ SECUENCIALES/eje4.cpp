#include <iostream>
using namespace std;

int main(){

    /*Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avi�n
    y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupaci�n y
    el porcentaje de no ocupaci�n del mismo.
    Ejemplo si el avi�n tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de
    ocupaci�n que se informar� ser� de un 40% y el porcentaje de no ocupaci�n ser� de un 60%.*/

    int asientosT, pasajesO, PorcentajeO, PorcentajeNo;

    cout << "Ingrese la cantidad de asientos totales: ";
    cin >> asientosT;

    cout << "Ingrese la cantidad de pasajes ocupados: ";
    cin >> pasajesO;

    PorcentajeO = (pasajesO * 100) / asientosT;
    PorcentajeNo = 100 - PorcentajeO;

    cout << "Porcentaje de ocupacion: " << PorcentajeO << "%" << endl;
    cout << "Porcentaje NO ocupado: " << PorcentajeNo << "%";


 return 0;
}
