#include <iostream>

using namespace std;

/* 12) Escribir una función de nombre validarFecha que reciba 3 valores
correspondientes al día, mes y año, y devuelva 1 si los valores recibidos
corresponden a una fecha correcta o 0 si no es correcta. Por ejemplo, si la
función recibe 30, 2, 2000 deberá devolver 0; y si recibe 12, 2, 1990, deberá
devolver 1.
*/

//Creo funcion
bool ValidarFecha(int dia, int mes, int año)
{

    bool correcto, bisiesto;
    
    //Confirmo si es bisiesto por febrero
    if (año % 4 == 0 && año % 100 != 0)
    {
        bisiesto = true;
    }
    else if (año % 400 == 0)
    {
        bisiesto = true;
    }
    else
    {
        bisiesto = false;
    }

    cout << bisiesto << endl;

    if (bisiesto)
    {
        if (mes == 2 && dia <= 29)
        {
            correcto = true;
        }
        else
        {
            correcto = false;
        }
    }
    else if (mes == 2 && dia <= 28)
    {
        correcto = true;
    }
    //Compruebo resto de los meses 
    else if (dia <= 31 && mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        correcto = true;
    }
    else if (dia <= 30 && mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        correcto = true;
    }
    else
    {
        correcto = false;
    }

    return correcto;
}

//Principal
int main()
{
    int dia, mes, año;
    bool r;

    cout << "Ingrese dia : " << endl;
    cin >> dia;

    cout << "Ingrese mes : " << endl;
    cin >> mes;

    cout << "Ingrese año : " << endl;
    cin >> año;

    r = ValidarFecha(dia, mes, año);

    if (r)
    {
        cout << "La fecha es correcta: " << dia << "/" << mes << "/" << año << endl;
    }else
    {
        cout << "La fecha no es correcta: " << dia << "/" << mes << "/" << año << endl;
    }

    return 0;
}
