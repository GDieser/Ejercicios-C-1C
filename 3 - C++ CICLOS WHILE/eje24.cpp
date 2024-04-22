#include <iostream>

using namespace std;

/*Se dispone de la información de los exámenes rendidos por algunos
estudiantes de la UTN FRGP. Por cada registro de examen se conoce:
- Legajo del estudiante (entero)
- Código de materia (entero)
- Nota (float)
La finalización de la carga de datos se indica con un legajo de estudiante mayor
a 30000. Calcular e informar:
- La nota promedio entre todos los estudiantes.
- El legajo del estudiante con menor nota.
- La cantidad de exámenes rendidos para la materia 10.
- El porcentaje de aprobados y no aprobados.
NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.*/

int main()
{
    int legajo, codMateria, promedio, porcAprobado = 0, porcNoAprobado = 0, contMateria10, legajoMenor, contTotal = 0;
    float nota, notaMenor = 0, notaPromedio = 0;

    cout << "Ingrese legajo del estudiante: " << endl;
    cin >> legajo;

    while( legajo < 30000 ){

         cout << "Ingrese Codigo de materia: " << endl;
         cin >> codMateria;

         cout << "Ingrese la Nota: " << endl;
         cin >> nota;

         if( nota >= 6 ){

            porcAprobado++;
         }
         else{
            porcNoAprobado++;
         }

         if( codMateria == 10 ){
             contMateria10++;
         }

         if( notaMenor == 0){
            notaMenor = nota;
            legajoMenor = legajo;
         }
         else if( nota  < notaMenor ){
            notaMenor = nota;
            legajoMenor = legajo;
         }

         notaPromedio += nota;
         contTotal++;

         cout << "Ingrese legajo del estudiante: " << endl;
        cin >> legajo;

    }

    notaPromedio = notaPromedio / contTotal;
    porcAprobado = ( porcAprobado * 100 ) / contTotal;
    porcNoAprobado = ( porcNoAprobado * 100 ) / contTotal;

    cout << "La nota promedio general fue: " << notaPromedio << endl;

    cout << endl;

    cout << "La menor nota fue: " << notaMenor <<" y pertenece al legajo: " << legajoMenor << endl;

    cout << endl;

    cout << "Cantidad de examenes rendidos en la materia 10: " << contMateria10 << endl;

    cout << endl;

    cout << "Porcentaje no aprobado: " << porcNoAprobado << "%, porcentaje aprobado: " << porcAprobado << "%" << endl;

    return 0;
}
