#include <iostream>

using namespace std;

/*Una universidad dispone de diez aulas para acomodar a una cantidad de
asistentes a una charla. Cada aula tiene una capacidad total de 60 personas. Se
necesita un programa que solicite la cantidad de asistentes a la charla y
determine la cantidad total de aulas necesarias para acomodarlos a todos.
Por ejemplo:
Si los asistentes son 120 se necesitarán 2 aulas.
Si los asistentes son 123 se necesitarán 3 aulas.
Si los asistentes son 40 se necesitará 1 aula.
DESAFÍO: No utilizar el operador de división ni el de resto en el algoritmo. */

int main()
{
    int num, cont = 0, contAula = 0;

    cout << "Ingrese la cantidad de participantes que van a asistir: " << endl;
    cin >> num;

    while( num != 0){

        cont++;
        num--;

        if( cont == 60 ){
            contAula++;
            cont = 0;
        }
    }

    if( cont > 0 ){
        contAula++;
    }

    cout << "Se necesitan la cantidad de: " << contAula << " aula/s." << endl;

    return 0;
}
