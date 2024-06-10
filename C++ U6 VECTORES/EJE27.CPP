#include <iostream>
#include <locale.h>
using namespace std;

/*27)
Una empresa de transporte de carga por camión posee 20 tarifas distintas de acuerdo al
destino de los envíos que deba realizar.
Dispone de un lote de registros con la siguiente información:

-Número de Tarifa (1 a 20)
-Importe por KM.

Este lote no viene ordenado.
A continuación, dispone de un segundo lote de registros con la información de los
envíos que se realizaron durante la semana pasada,
conteniendo cada uno de ellos los siguientes campos:

-Número de Camión (1 a 100)
-Número de Tarifa
-Kilómetros recorridos

Este lote finaliza con un registro con número de camión negativo.
Se pide realizar un programa que determine e informe:

a) El total recaudado por cada tarifa.
b) Un listado como el siguiente:
Número Camión	Total recaudado (en $)
    999	               9999,99
    999	               9999,99
c) Indicar el número de camión que recorrió la menor cantidad de kilómetros, excluyendo
a aquellos camiones que no realizaron ningún viaje.
*/

void cargaDeTarifas(int importeKM[], int TAM_KM);

void cargaLoteDeRegistro(int numTarifa[], int TAM_TAR, int importeKM[], int TAM_KM, int numeroCamion[], int TAM_CAM, int KMrecorridos[], int TAM_REC);

void mostrarTotalPorTarifa(int numTarifa[], int TAM_TAR);

void mostrarListadoCamion(int numeroCamion[], int TAM_CAM);

int mostrarMenorRecorrido(int KMrecorridos[], int TAM_REC);

int main()
{
    setlocale(LC_ALL, "Spanish");

    int const TAM_TAR = 20, TAM_KM = 20, TAM_CAM = 100, TAM_REC = 100;
    int numTarifa[TAM_TAR] = {}, importeKM[TAM_KM] = {}, numeroCamion[TAM_CAM] = {}, KMrecorridos[TAM_REC] = {}, numeroCamionMenor;

    cargaDeTarifas(importeKM, TAM_KM);

    cargaLoteDeRegistro(numTarifa, TAM_TAR, importeKM, TAM_KM, numeroCamion, TAM_CAM, KMrecorridos, TAM_REC);
    
    //A)
    mostrarTotalPorTarifa(numTarifa, TAM_TAR);
    //B)
    mostrarListadoCamion(numeroCamion, TAM_CAM);
    //C)
    numeroCamionMenor = mostrarMenorRecorrido(KMrecorridos, TAM_REC);
    cout << endl;
    cout << "Numero de camion que menos KM recorrio: " << numeroCamionMenor << endl;

    return 0;
}

void cargaDeTarifas(int importeKM[], int TAM_KM)
{

    int tarifa;

    for (int i = 0; i < TAM_KM; i++)
    {
        cout << "Número de Tarifa: #" << (i + 1) << endl;

        cout << "Ingrese importe por KM: $";
        cin >> importeKM[i];
    }
}

void cargaLoteDeRegistro(int numTarifa[], int TAM_TAR, int importeKM[], int TAM_KM, int numeroCamion[], int TAM_CAM, int KMrecorridos[], int TAM_REC)
{

    int numCamion, tarifa, kilometros;

    cout << "Ingrese número de camión: ";
    cin >> numCamion;

    while (numCamion > 0)
    {
        cout << "Ingrese número de tarifa: ";
        cin >> tarifa;

        cout << "Ingrese kilometro recorridos:";
        cin >> kilometros;

        //A)
        numTarifa[tarifa-1] += (importeKM[tarifa-1] * kilometros);
        //B)
        numeroCamion[numCamion-1] += (importeKM[tarifa-1] * kilometros);
        //C)
        KMrecorridos[numCamion-1] += kilometros;

        cout << "Ingrese número de camión: ";
        cin >> numCamion;
    }
}

void mostrarTotalPorTarifa(int numTarifa[], int TAM_TAR){

    for (int i = 0; i < TAM_TAR; i++)
    {
        if (numTarifa[i] > 0)
        {
            cout << "----------------------------------------------" << endl;
            cout << "La tarifa #" << (i+1) << " recaudó: $" << numTarifa[i] << endl;
        }
    }
    cout << "----------------------------------------------" << endl;
    
}

void mostrarListadoCamion(int numeroCamion[], int TAM_CAM){

    cout << "Número de Camion:          Total recaudado: " << endl;
    for (int i = 0; i < TAM_CAM; i++)
    {
        if (numeroCamion[i] > 0)
        {
            cout << "----------------------------------------------" << endl;
            cout <<  (i+1) << "                     $" << numeroCamion[i] << endl;
        }
    }
    cout << "----------------------------------------------" << endl;
}

int mostrarMenorRecorrido(int KMrecorridos[], int TAM_REC){

    int kilomettrosMenor = 0, numeroCamionMinimo;

    for (int i = 0; i < TAM_REC; i++)
    {
        if (kilomettrosMenor == 0 || KMrecorridos[i] < kilomettrosMenor && KMrecorridos[i] > 0)
        {
            kilomettrosMenor = KMrecorridos[i];
            numeroCamionMinimo = (i + 1);
        }
    }

    return numeroCamionMinimo;
    
}