#include <iostream>

using namespace std;

/* 8) Escribir una función que reciba el valor de un año y retorne 1 si el mismo es
bisiesto y 0 si es un año no bisiesto. Recordar que son años bisiestos los
divisibles por 4, excepto los divisibles por 100, pero dentro de este grupo se
incluyen los divisibles por 400. Por ejemplo 1992 fue bisiesto por ser divisible
por 4. El año 1900 no fue bisiesto por ser divisible por 100, aun siendo divisible
por 4. Y el año 2000 fue bisiesto por ser divisible por 400, aun siendo divisible
por 100.
Hacer un programa para ingresar una lista de 10 valores de años y contar
cuantos son bisiestos. Utilizar la función solicitada.
*/

bool Bisiesto(int año){

    if (año % 4 == 0 && año % 100 != 0)
    {
        return true;
    }else if( año % 400 == 0)
    {
        return true;
    }else
    {
        return false;
    }
    
}

int main()
{

    int año;
    bool r;
    cout << "Ingrese año: " << endl;
    cin >> año;

    r = Bisiesto(año);

    if (r)
    {
        cout << "El año es bisiesto" << endl;
    }else
    {
        cout << "El año no es bisiesto" << endl;
    }
    
    return 0;
}
