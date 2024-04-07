#include <iostream>

using namespace std;

/*Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego,
calcular e informar:
- La cantidad de personas mayores a 30 años que midan más de 1.8
metros.
- El promedio de altura de las personas mayores a 30 años.
- La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
- La cantidad de personas cuya edad sea de 20, 30 o 40 años.
*/

int main()
{
    int e1, e2, e3, e4, e5, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
    float a1, a2, a3, a4, a5, prom1, promFinal;

    cout << "Ingresar la primera edad: " << endl;
    cin >> e1;
    cout << "Ingresar la segunda edad: " << endl;
    cin >> e2;
    cout << "Ingresar la tercera edad: " << endl;
    cin >> e3;
    cout << "Ingresar la cuarta edad: " << endl;
    cin >> e4;
    cout << "Ingresar la quinta edad: " << endl;
    cin >> e5;

    cout << "Ingresar la primera altura: " << endl;
    cin >> a1;
    cout << "Ingresar la segunda altura: " << endl;
    cin >> a2;
    cout << "Ingresar la tercera altura: " << endl;
    cin >> a3;
    cout << "Ingresar la cuarta altura: " << endl;
    cin >> a4;
    cout << "Ingresar la quinta altura: " << endl;
    cin >> a5;

    if( e1 > 30 ){
        cont1++;
        prom1 += a1;
        if( a1 > 1.8 ){
            cont2++;
        }
    }
    if( a1 >= 1.7 && a1 <= 1.8){
        cont3++;
    }
    if( a1 == 20 || a1 == 30 || a1 == 40 ){
        cont4++;
    }

    if( e2 > 30 ){
        cont1++;
        prom1 += a2;
        if( a1 > 1.8 ){
            cont2++;
        }
    }
    if( a2 >= 1.7 && a2 <= 1.8){
        cont3++;
    }
    if( a2 == 20 || a2 == 30 || a2 == 40 ){
        cont4++;
    }

    if( e3 > 30 ){
        cont1++;
        prom1 += a3;
        if( a3 > 1.8 ){
            cont2++;
        }
    }
    if( a3 >= 1.7 && a3 <= 1.8){
        cont3++;
    }
    if( e3 == 20 || e3 == 30 || e3 == 40 ){
        cont4++;
    }

    if( e4 > 30 ){
        cont1++;
        prom1 += a4;
        if( a4 > 1.8 ){
            cont2++;
        }
    }
    if( a4 >= 1.7 && a4 <= 1.8){
        cont3++;
    }
    if( e4 == 20 || e4 == 30 || e4 == 40 ){
        cont4++;
    }

    if( e5 > 30 ){
        cont1++;
        prom1 += a5;
        if( a5 > 1.8 ){
            cont2++;
        }
    }
    if( a5 >= 1.7 && a5 <= 1.8){
        cont3++;
    }
    if( e5 == 20 || e5 == 30 || e5 == 40 ){
        cont4++;
    }

    promFinal = prom1 / cont1;

    cout << "------------------------------------------" << endl;
    cout << "|Cant personas +30 y 1.8m            : " << cont2 << endl;
    cout << "------------------------------------------" << endl;
    cout << "|Promedio alturas edad +30           : " << promFinal << endl;
    cout << "------------------------------------------" << endl;
    cout << "|Cant. personas altura de 1.7 a 1.8  : " << cont3 << endl;
    cout << "------------------------------------------" << endl;
    cout << "|Cant. personas edades 20/30/40      : " << cont4 << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
