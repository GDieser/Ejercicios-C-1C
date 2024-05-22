#include <iostream>

using namespace std;

/* 6) Hacer una función que reciba un número entero por valor llamado día y un
string llamado nombre por referencia y le asigne el nombre correspondiente
según el número de día. Siendo 0 → Domingo y 6 → Sábado.
*/

int nombreDia(int dia, string& nombre){

    switch (dia)
    {
    case 0:
        nombre = "Domingo";
        break;
    case 1:
        nombre = "Lunes";
        break;
    case 2:
        nombre = "Martes";
        break;
    case 3:
        nombre = "Miercoles";
        break;
    case 4:
        nombre = "Jueves";
        break;
    case 5:
        nombre = "Viernes";
        break;
    case 6:
        nombre = "Sabado";
        break;
    
    default:
        break;
    }

}


int main()
{
    int dia, r;
    string nombre;
 
    cout << "Ingrese numero de día: Siendo 0 → Domingo y 6 → Sábado." << endl;
    cin >> dia;

    r = nombreDia(dia, nombre);

    cout << "El día es: " << nombre << endl;

    return 0;
}
