#include <iostream>
using namespace std;

int main(){

    /*Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión
    y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y
    el porcentaje de no ocupación del mismo.
    Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de
    ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.*/

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
