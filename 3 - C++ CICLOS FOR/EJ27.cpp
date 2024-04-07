#include <iostream>
using namespace std;

/*Una estación meteorológica registró una muestra climática de los últimos 15 días.
 Por cada día registró:
Número de día (entero)
Temperatura (float)
Milímetros de lluvia (float)
Visibilidad en km (float)

Hay un registro por cada día. La información se encuentra ordenada por día.
Se pide calcular e informar:
El número del día que se haya registrado la temperatura máxima.
La amplitud térmica de todo el período.
La cantidad de días con neblina.
Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia.
Mostrar "Quincena húmeda" si llovió en al menos un tercio de los días. De lo
contrario mostrar "Quincena seca".

NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la
temperatura mínima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.
*/

int main(){

    int x, nd, diaM, contN = 0, contL1 = 0, contL2 = 0;
    float v, mlLluvia, tem,  temMax, temMin, aTem;

    for( x = 0; x < 6; x++ ){

        cout << "Ingrese numero de dia a cargar: " << endl;
        cin >> nd;

        cout << "Ingrese temperatura: " << endl;
        cin >> tem;

        cout << "Ingrese mL de lluvia: " << endl;
        cin >> mlLluvia;

        cout << "Ingrese Visibilidad en KM: " << endl;
        cin >> v;

        if( x == 0){
            temMax = tem;
            temMin = tem;
            diaM = nd;
        }

        if( tem > temMax ){
            temMax = tem;
            diaM = nd;
        }
        else{
            if( tem < temMin ){
                temMin = tem;
            }
        }

        if( v < 2 ){
            contN++;
        }

        if( mlLluvia > 0 ){
            contL1++;
        }
        else{
            contL2++;
        }
    }

    aTem = temMax - temMin;

    cout << "El dia que registro la temperatura maxima es: " << diaM << endl;

    cout << "La amplitud termica de todo el periodo es: " << aTem << endl;

    cout << "La cantidad de dias con neblina fueron: " << contN << endl;

    if( contL1 > contL2 ){
        cout << "Fue una quincena lluviosa" << endl;
    }
    else{
        if( contL1 >= 2){
            cout << "Fue una quincena humeda" << endl;
        }
        else{
            cout << "Fue una quincena humeda" << endl;
        }
    }

    return 0;
}
