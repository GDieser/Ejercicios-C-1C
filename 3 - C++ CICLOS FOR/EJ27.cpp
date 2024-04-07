#include <iostream>
using namespace std;

/*Una estaci�n meteorol�gica registr� una muestra clim�tica de los �ltimos 15 d�as.
 Por cada d�a registr�:
N�mero de d�a (entero)
Temperatura (float)
Mil�metros de lluvia (float)
Visibilidad en km (float)

Hay un registro por cada d�a. La informaci�n se encuentra ordenada por d�a.
Se pide calcular e informar:
El n�mero del d�a que se haya registrado la temperatura m�xima.
La amplitud t�rmica de todo el per�odo.
La cantidad de d�as con neblina.
Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia.
Mostrar "Quincena h�meda" si llovi� en al menos un tercio de los d�as. De lo
contrario mostrar "Quincena seca".

NOTA: La amplitud t�rmica es la diferencia entre la temperatura m�xima y la
temperatura m�nima.
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
