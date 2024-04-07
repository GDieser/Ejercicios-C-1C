#include <iostream>

using namespace std;

/*Este ejercicio lo resolverán en la parte práctica de la materia.
El costo de un desarrollo de un proyecto de software se calcula en base al
lenguaje que se necesita:

-------------------------------
|NOMBRE |  TIPO |  VALOR HORA |
-------------------------------
|C/C++  |  'C'  |    $7500    |
|C#     |  '#'  |    $6100    |
|PYHTON |  'P'  |    $5400    |
|GO     |  'G'  |    $5000    |
-------------------------------

Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más
al costo del proyecto.
Le solicitan un programa que permita calcular el costo total de un proyecto
basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o
no (bool)
*/

int main()
{
    int h, imp;
    bool u;
    char l;

    cout << "------------------------------- " << endl;
    cout << "|NOMBRE |  TIPO |  VALOR HORA | " << endl;
    cout << "------------------------------- " << endl;
    cout << "|C/C++  |  'C'  |    $7500    | " << endl;
    cout << "|C#     |  '#'  |    $6100    | " << endl;
    cout << "|PYHTON |  'P'  |    $5400    | " << endl;
    cout << "|GO     |  'G'  |    $5000    | " << endl;
    cout << "------------------------------- " << endl;

    cout << "Elija el tipo de lenguaje segun tipos: 'C', '#', 'P', 'G'" << endl;
    cin >> l;

    cout << "Ingrese la cantidad de horas: " << endl;
    cin >> h;

    cout << "Es urgente? 1-SI | 0-NO " << endl;
    cin >> u;

    switch(l){
    case 'c':
        imp = h * 7500;
        break;
    case'#':
        imp = h * 6100;
        break;
    case 'p':
        imp = h * 5400;
        break;
    case 'g':
        imp = h * 5000;
        break;
    }

    if(u){
        imp = imp + (imp * 1.2);
    }

    cout << "El valor a abonar es: $" << imp << endl;

    return 0;
}
