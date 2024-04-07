#include <iostream>

using namespace std;
/*Hacer un programa para ingresar por teclado tres números e informar con una
leyenda aclaratoria si los tres son todos distintos entre sí, caso contrario no
emitir nada.
Tener en cuenta: Si A es distinto de B y B es distinto de C, eso no significa que A
y C sean distintos. Ejemplo: A=8, B=6 y C=8.
*/

int main()
{
    int a, b, c;

    cout << "Ingrese el primer numero: " << endl;
    cin >> a;

    cout << "Ingres el segundo numero: " << endl;
    cin >> b;

    cout << "Ingres el tercer numero: " << endl;
    cin >> c;

    if( a != b && a != c){
        if( b != c){
            cout << "Los numeros ingresados son todos distintos =D";
        }
    }

    return 0;
}
