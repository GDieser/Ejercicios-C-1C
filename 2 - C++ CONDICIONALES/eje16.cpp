#include <iostream>

using namespace std;

/*Hacer un programa para ingresar por teclado las cuatro notas de los exámenes
obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las
siguientes condiciones:
- “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los
exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.
*/

int main()
{
    int n1, n2, n3, n4, cont7 = 0, con4 = 0;

    cout << "Ingrese la primera nota: " << endl;
    cin >> n1;

    cout << "Ingrese la segunda nota: " << endl;
    cin >> n2;

    cout << "Ingrese la tercera nota: " << endl;
    cin >> n3;

    cout << "Ingrese la cuarta nota: " << endl;
    cin >> n4;


    if( n1 >= 7 ){
        cont7++;
        con4++;
    }
    else{
        if( n1 >= 4 ){
            con4++;
        }
    }

    if( n2 >= 7 ){
        cont7++;
        con4++;
    }
    else{
        if( n2 >= 4 ){
            con4++;
        }
    }

    if( n3 >= 7 ){
        cont7++;
        con4++;
    }
    else{
        if( n3 >= 4 ){
            con4++;
        }
    }

    if( n4 >= 7 ){
        cont7++;
        con4++;
    }
    else{
        if( n4 >= 4 ){
            con4++;
        }
    }

    if( cont7 == 4 ){
        cout << "El alumno promociona =D" << endl;
    }
    else{
        if ( con4 >= 3 ){
            cout << "El alumno rinde examen Final =S" << endl;
        }
        else{
            if( con4 >= 1 ){
                cout << "El alumno rescupera Parcial =S" << endl;
            }
            else{
                cout << "El alumno recursa la materia =(" << endl;
            }
        }
    }

    return 0;
}
