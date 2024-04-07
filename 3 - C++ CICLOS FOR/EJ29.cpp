#include <iostream>
using namespace std;

/*Se dispone de la información de los últimos 19 partidos del futbolista Diego Armando
Laradona. Por cada partido se registró:
Número de partido
Minutos jugados
Tarjetas amarillas
Tarjetas rojas
Goles

Existe un registro para cada partido. Los mismos se encuentran ordenados por número
de partido. Se pide calcular e informar:
La cantidad de partidos que no jugó (partidos con minutos igual a cero)
La cantidad de partidos que jugó por completo (minutos >= 90)
El promedio de tarjetas recibidas por partido.
El número de partido en el que haya convertido mayor cantidad de goles. Indicar también
los goles convertidos.
La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor cantidad de
partidos consecutivos en los que haya convertido
*/

int main(){

    int x, numPar, minJu, tarAm, tarRoj, goles, contMJ1 = 0, contMJ2 = 0, tAT = 0;
    int tRT = 0, promT, mayGol = 0, contG = 0, racha = 0, numParGol;

    for( x = 1; x <= 10; x++ ){

        cout << "Numero de partido: " << endl;
        cin >> numPar;

        cout << "Min jugados: " << endl;
        cin >> minJu;

        cout << "Tarjetas Amarillas: " << endl;
        cin >> tarAm;

        cout << "Tarjetas Rojas: " << endl;
        cin >> tarRoj;

        cout << "Goles: " << endl;
        cin >> goles;

        if( minJu == 0){
            contMJ1++;
        }
        else{
            if( minJu >= 90 ){
                contMJ2++;
            }
        }

        tAT += tarAm;
        tRT += tarRoj;

        if( goles > mayGol ){
            mayGol = goles;
            numParGol = numPar;
        }

        if( goles > 0 ){
            contG++;
        }
        else{
            contG = 0;
        }

        if( contG > 0){
            racha = contG;
            if( contG > 2){
                racha = contG;
            }
        }
    }

    promT = (tAT + tRT)/10;

    cout << "Cantidad de partidos que no jugo: " << contMJ1 << endl;
    cout << "Cantidad de partidos que jugo el partido completo: " << contMJ2 << endl;
    cout << "Cantidad promedio de tarjetas en 10 partidos: " << promT << endl;
    cout << "Numero de partido mayor cant. goles: " << numParGol << ", cantidad: " << mayGol << endl;
    cout << "Mayor cantidad de partidos consecutivos realizando goles: " << racha << endl;

    return 0;
}
