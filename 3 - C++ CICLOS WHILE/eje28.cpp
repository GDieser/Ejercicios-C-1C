#include <iostream>

using namespace std;

/*Hacer un programa que contenga un men� con el siguiente formato:
Men� principal

-----------------------------
1 - Ingresar medida en metros
2 - Convertir a cent�metros
3 - Convertir a kil�metros
4 - Convertir a pulgadas
5 - Convertir a pies
-----------------------------
0 - Salir del programa

Ingrese opci�n:

Al ingresar a la opci�n 1, nos pedir� una medida (float) en metros que con las
siguientes opciones del men� podremos mostrarla convertida a otras unidades.
El programa debe permitir al usuario ingresar a las opciones las veces que lo
desee y s�lo finalizar� al ingresar a la opci�n 0*/

int main()
{
    float metros, centimetros, kilometros, pulgadas, pies;
    int opcionMenu;

    cout << "----------------------------- " << endl;
    cout << "1 - Ingresar medida en metros " << endl;
    cout << "2 - Convertir a cent�metros   " << endl;
    cout << "3 - Convertir a kil�metros    " << endl;
    cout << "4 - Convertir a pulgadas      " << endl;
    cout << "5 - Convertir a pies          " << endl;
    cout << "----------------------------- " << endl;
    cout << "0 - Salir del programa        " << endl;

    cin >> opcionMenu;

    switch(opcionMenu){
    case 1:
        cout << "Ingresar medida en metros: " << endl;
        cin >> metros;
        break;
    case 2:
        centimetros = metros * 100;
        cout << "El resultados es: " << centimetros << endl;
        break;
    case 3:
        kilometros = metros / 1000;
        cout << "El resultado es: " << kilometros << endl;
        break;
    case 4:
        pulgadas = metros * 39.37;
        cout << "El resultados es: " << pulgadas << endl;
        break;
    case 5:
        pies = metros * 3.28;
        cout << "El resultados es: " << pies << endl;
        break;
    default:
        break;
    }

    while ( opcionMenu != 0 ){
        cout << "----------------------------- " << endl;
        cout << "1 - Ingresar medida en metros " << endl;
        cout << "2 - Convertir a cent�metros   " << endl;
        cout << "3 - Convertir a kil�metros    " << endl;
        cout << "4 - Convertir a pulgadas      " << endl;
        cout << "5 - Convertir a pies          " << endl;
        cout << "----------------------------- " << endl;
        cout << "0 - Salir del programa        " << endl;

        cin >> opcionMenu;

        switch(opcionMenu){
        case 1:
            cout << "Ingresar medida en metros: " << endl;
            cin >> metros;
            break;
        case 2:
            centimetros = metros * 100;
            cout << "El resultados es: " << centimetros << " cm" << endl;
            break;
        case 3:
            kilometros = metros / 1000;
            cout << "El resultado es: " << kilometros << " km" <<  endl;
            break;
        case 4:
            pulgadas = metros * 39.37;
            cout << "El resultados es: " << pulgadas << " pulgadas" << endl;
            break;
        case 5:
            pies = metros * 3.28;
            cout << "El resultados es: " << pies << " cm" << endl;
            break;
        case 0:
            break;
        default:
            cout << "Opcion invalida, intente de nuevo" << endl;
            break;
        }

    }

    return 0;
}
