#include <iostream>
#include <locale.h>
using namespace std;

/*25)
Una agencia de viajes comercializa 20 planes de turismo, para cada uno de ellos
se generó un registro con los siguientes datos:

-Número de plan (1 a 20)
-Precio al contado
-Precio con tarjeta

Los precios son por persona, estos datos se ingresan desordenados.
Existe un segundo lote con las ventas efectuadas durante el
mes pasado en los 8 locales de atención al público.
Por cada venta que se concretó se dispone de los siguientes datos:

-Número de local (1 a 8)
-Número de plan contratado (1 a 20)
-Cantidad de personas que viajan
-Código de pago (1= contado,2= tarjeta)

Este lote finaliza con un registro con número de local igual a 9.
A partir de esta información se pide:

a) Informar el total recaudado por la empresa por pago al contado y por pago
con tarjeta entre todos los locales.
b) Informar cuál fue el plan que eligieron más personas en total.*/

void ingresoDatos(int precioCont[], int TAM_CON, int precioTar[], int TAM_TAR);

void loteMesPasado(int numPlan[], int TAM, int precioCont[], int TAM_CON, int precioTar[], int TAM_TAR, int totalContado, int totalTarjeta);

int planMasElegido(int numPlan[], int TAM);

int main()
{
    setlocale(LC_ALL, "Spanish");

    int const TAM = 20;
    int numPlan[TAM] = {}, precioCon[TAM] = {}, precioTar[TAM] = {}, totalContado = 0, totalTarjeta = 0, planMayor;

    // Ingreso 20 planes
    ingresoDatos(precioCon, TAM, precioTar, TAM);

    // Ingreso por lote y (A)
    loteMesPasado(numPlan, TAM, precioCon, TAM, precioTar, TAM, totalContado, totalTarjeta);

    // B)
    planMayor = planMasElegido(numPlan, TAM);

    cout << endl;
    cout << "El plan más elegido por más personas: #" << planMayor << endl;

    return 0;
}

void ingresoDatos(int precioCont[], int TAM_CON, int precioTar[], int TAM_TAR)
{

    for (int i = 0; i < 20; i++)
    {
        cout << "Plan #" << (i + 1) << endl;

        cout << "Ingrese precio contado: ";
        cin >> precioCont[i];

        cout << "Ingrese precio tarjeta: ";
        cin >> precioTar[i];
    }
}

void loteMesPasado(int numPlan[], int TAM, int precioCont[], int TAM_CON, int precioTar[], int TAM_TAR, int totalContado, int totalTarjeta)
{
    int numeroLocal, plan, cantPersonas, codPago;

    cout << "Ingrese número de local: ";
    cin >> numeroLocal;

    while (numeroLocal != 9)
    {
        cout << "Ingrese número de Plan: ";
        cin >> plan;

        cout << "Ingrese cantidad de personas: ";
        cin >> cantPersonas;

        cout << "Ingrese código de pago: 1- Contado o 2- Tarjeta: ";
        cin >> codPago;

        numPlan[plan - 1] += cantPersonas;

        if (codPago == 1)
        {
            totalContado += (precioCont[plan - 1] * cantPersonas);
        }
        else if (codPago == 2)
        {
            totalTarjeta += (precioTar[plan - 1] * cantPersonas);
        }

        cout << "Ingrese número de local: ";
        cin >> numeroLocal;
    }

    cout << endl;
    cout << "Total recaudado pago contado: " << totalContado << endl;
    cout << endl;
    cout << "Total recaudado pago tarjeta: " << totalTarjeta << endl;
}

int planMasElegido(int numPlan[], int TAM)
{

    int planMayor = 0, numPlanMayor;

    for (int i = 0; i < 20; i++)
    {
        if (planMayor == 0 || numPlan[i] > planMayor)
        {
            planMayor = numPlan[i];
            numPlanMayor = (i + 1);
        }
    }

    return numPlanMayor;
}