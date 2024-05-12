#include <iostream>

using namespace std;

/*23
Una universidad registró las inscripciones a las materias de todas sus carreras durante el año anterior. Para cada registro se ingresa:

-Legajo de alumno (número no correlativo de cinco cifras). 
-Código de carrera (número del 1 al 20)
-Código de materia (número del 1 al 60)
-Modalidad (“P” si es presencial, “D” si es a distancia)
-Horario (“M” para mañana, “T” para tarde, “N” para noche)

El lote finaliza con número de legajo cero y los registros se encuentran agrupados por carrera. 
A partir de dichos datos se solicita determinar e informar:
a) La cantidad de inscripciones registradas para cada carrera.
b) La carrera con más inscripciones a la modalidad Distancia.
c) El porcentaje de inscripciones registradas a los distintos horarios teniendo en cuenta el total, discriminado por carrera.
d) La carrera con menos inscripciones registradas.

*/

int main()
{
    int legajo, codCarrera, codCarreraAct, codMateria, distMaxima, carreraDistMaxima, porcMañana, porcTarde, porcNoche, menosInsc, codCarreraMenor;
    char modalidad, horario;
    bool distMax = true, carreraMenor = true;

    cout << "Ingrese número de legajo de alumno: " << endl;
    cin >> legajo;

    cout << "Ingrese código de carrera: 1 a 20 " << endl;
    cin >> codCarrera;

    while (legajo != 0)
    {
        int contInsc = 0, contDis = 0, contTarde = 0, contMañana = 0, contNoche = 0;

        codCarreraAct = codCarrera;

        while (codCarreraAct == codCarrera && legajo != 0)
        {   
            //Pido datos
            cout << "Ingrese código de materia: 1 a 60" << endl;
            cin >> codMateria;
            
            cout << "Ingrese modalidad de cursada: 'P': Presencial o 'D': Distancia" << endl;
            cin >> modalidad;

            cout << "Ingrese el horario: 'M': Mañana, 'T': Tarde o 'N': Noche " << endl;
            cin >> horario;

            //Contar inscripciones
            contInsc ++;

            //Contar inscripciones a distancia
            switch (modalidad)
            {
            case 'P':
                /* code */
                break;
            case 'D':
                contDis++;
                break;
            default:
                break;
            }

            //Contar por horarios
            switch (horario)
            {
            case 'M':
                contMañana++;
                break;
            case 'T':
                contTarde++;
                break;
            case 'N':
                contNoche++;
                break;
            default:
                break;
            }

            //Pido y comparo:
            cout << "Ingrese número de legajo de alumno: " << endl;
            cin >> legajo;

            cout << "Ingrese código de carrera: 1 a 20 " << endl;
            cin >> codCarrera;
        }

        //Comparar y guardar mayor cantidad de carrera a distancia
        if (distMax == true || contDis > distMaxima)
        {   
            distMaxima = contDis;
            carreraDistMaxima = codCarreraAct;
            distMax = false;
        }

        //Calcular porcentajes
        porcMañana = (contMañana * 100) / contInsc;
        porcTarde = (contTarde * 100) / contInsc;
        porcNoche = (contNoche * 100) / contInsc;

        //Carrea con menos inscriptos
        if (carreraMenor == true || contInsc < menosInsc)
        {
            menosInsc = contInsc;
            codCarreraMenor = codCarreraAct;
            carreraMenor = false;
        }
        

        //A)
        cout << "Cantidad de inscripciones: " << contInsc << endl;

        //C)
        cout << "Porcentaje de incripciones turno mañana: " << porcMañana << "%, turno tarde: " << porcTarde << "% y turno noche: " << porcNoche << "%" << endl; 
        
    }

    //B)
    cout << "La mayor cantidad de inscripciones en modalidad a Distancia fue la carrea: " << carreraDistMaxima << endl;

    //D)
    cout << "La carrera con menos inscritos fue: " << codCarreraMenor << endl;

    return 0;
}
