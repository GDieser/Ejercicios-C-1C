#include <iostream>
using namespace std;

int main(){

    /*Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuántos días,
    horas y minutos equivalen.
    Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
    Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minutos.*/

    int minutos, resto, horas, horas1, dias;

    cout << "Ingrese la cantidad de minutos: ";
    cin >> minutos;


    resto = minutos % 60;
    horas = (minutos - resto) / 60;
    horas1 = horas % 24;
    dias = horas / 24;

    cout << minutos << " de minutos eson equivalentes a: " << dias << " dias, " << horas1 << " horas y " << resto << " minutos";


 return 0;
}
