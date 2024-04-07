#include <iostream>

using namespace std;

/*Hacer un programa para ingresar por teclado la fecha de nacimiento de una
persona, ingresando día, mes y año como 3 datos individuales. Luego ingresar
la fecha actual ingresando día, mes y año como 3 datos individuales. Calcular
luego la edad en años de esa persona y listar por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 18 ya que los 19 recién los cumple en
diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir
los 19 años.
*/

int main()
{

    int dn, mn, an, da, ma, aa, anios;

    cout << "Ingrese dia de su fecha de nacimiento: " << endl;
    cin >> dn;

    cout << "Ingrese mes de su fecha de nacimiento: " << endl;
    cin >> mn;

    cout << "Ingrese anio de su fecha de nacimiento: " << endl;
    cin >> an;


    cout << "Ingrese dia de su fecha actual: " << endl;
    cin >> da;

    cout << "Ingrese mes de su fecha actual: " << endl;
    cin >> ma;

    cout << "Ingrese anio de su fecha actual: " << endl;
    cin >> aa;


    anios = aa - an;

    if( ma > mn ){
        cout << "La persona tiene: " << anios << " anios" << endl;
    }
    else{
        if( ma == mn ){
            if( da == dn ){
                    cout << "La persona tiene: " << anios << " anios" << endl;
            }
            else{
                anios--;
                cout << "La persona tiene: " << anios << " anios" << endl;
            }
        }
        else{
            anios--;
            cout << "La persona tiene: " << anios << " anios" << endl;
        }
    }



    return 0;
}
