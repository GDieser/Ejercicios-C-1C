#include <iostream>

using namespace std;

/*El festival Larapalooza, el mejor festival musical del mundo, brindará una serie
de conciertos distribuidos en tres jornadas distintas. Se desea un programa que
registre los artistas que participarán. Por cada artista se registró:
- Número de artista (entero)
- Integrantes (entero)
- Jornada (1, 2 o 3)
- Duración del show en minutos (entero)
La información no se encuentra ordenada bajo ningún criterio. La carga de
datos se finaliza con un número de artista igual a cero. Calcular e informar:
- El número de artista que realice el show más largo de la jornada 1.
- La cantidad de solistas (artistas de 1 integrante) que participaron en
cada una de las jornadas. (se muestran tres resultados).
- La jornada más extensa (en minutos totales).
- Duración promedio de show por artista (se muestra un resultado).*/

int main()
{
    int numArtista, integrantes, jornada, durShow, durShowMayor, contSolista1 = 0, contSolista2 = 0, contSolista3 = 0, promDuracion = 0;
    int contArtistas = 0, durShowMax1 = 0, numArtistaMax1 = 0, jornadaMayor1 = 0, jornadaMayor2 = 0, jornadaMayor3 = 0, jornadaMayorFinal;

    cout << "Ingrese el numero del Artista: " << endl;
    cin >> numArtista;

    while( numArtista != 0 ){

        cout << "Ingrese numero de integrantes: " << endl;
        cin >> integrantes;

        cout << "Ingrese la jornada: 1, 2 o 3" << endl;
        cin >> jornada;

        cout << "Ingrese la duracion del show en minutos: " << endl;
        cin >> durShow;

        if( jornada == 1 ){

            jornadaMayor1 += durShow;

            if( durShowMax1 == 0 ){

                durShowMax1 = durShow;
                numArtistaMax1 = numArtista;
            }
            else if( durShow > durShowMax1 ){

                durShowMax1 = durShow;
                numArtistaMax1 = numArtista;
            }
        }
        else if( jornada == 2 ){
            jornadaMayor2 += durShow;
        }
        else{
            jornadaMayor3 += durShow;
        }

        if( integrantes == 1 ) {

            if( jornada == 1 ){
                contSolista1++;
            }
            else if( jornada == 2 ){
                contSolista2++;
            }
            else{
                contSolista3++;
            }
        }

        contArtistas++;
        promDuracion += durShow;

        cout << "Ingrese el numero del Artista: " << endl;
        cin >> numArtista;

    }

    promDuracion = promDuracion / contArtistas;

    if( jornadaMayor1 > jornadaMayor2 ){
        durShowMayor = jornadaMayor1;
        jornadaMayorFinal = 1;
    }
    else{
        durShowMayor = jornadaMayor2;
        jornadaMayorFinal = 2;
    }

    if( jornadaMayor3 > durShowMayor){
        durShowMayor = jornadaMayor3;
        jornadaMayorFinal = 3;
    }

    cout << endl;

    cout << "En la jornada 1 el artitas con el Show mas largo fue: " << numArtistaMax1 << endl;

    cout << endl;

    cout << "Cantidad de solistas jornada 1: " << contSolista1 << ", jornada 2: " << contSolista2 << " y jornada 3: " << contSolista3 << endl;

    cout << endl;

    cout << "La jornada mas extensa fue la: " << jornadaMayorFinal << ", con una duracion de: " << durShowMayor << " minutos." << endl;

    cout << endl;

    cout << "La duracion promedio del Show por Artistas fue: " << promDuracion << " minutos." << endl;

    cout << endl;

    return 0;
}
