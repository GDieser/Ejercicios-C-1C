#include <iostream>
using namespace std;

int main(){

    /*El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada frasco contiene 75
    píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de Micilina y 7 mg de Ácido Sinítico.
    Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la cantidad de
    miligramos de Betamol, Micilina y de Ácido Sinítico que son necesarios para elaborarlos.*/

    int frascos, betamol, micilina, acido, total;

    cout << "Ingrese la cantidad de frascos de pildoras desea comprar: ";
    cin >> frascos;

    /*
        int / int -->     int (cociente)
        float / int -->   float
        int / float -->   float
        float / float --> float
    */

    total = frascos * 75;
    betamol = total * 45;
    micilina = total * 2;
    acido = total * 7;

    cout << "Se necesitan: " << betamol << " mg de Betamol, " << micilina << " gr de Micilina y " << acido <<" mg de acido Sinítico";


 return 0;
}
