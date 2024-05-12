#include <iostream>

using namespace std;

/*22
Una compañía de turismo aventura registró los paquetes vendidos durante la última temporada vacacional. Para cada venta se ingresó:

-Número de paquete (4 dígitos no correlativos).
-Cantidad de personas incluidas.
-Precio por persona.
-Horas totales de actividades.
-Tipo de aventura (“M”, Montaña. “T”, Trekking. “R”, Rafting. “B”, Bicicleta. “C”, Canopy. “E”, Escalar. “K”, Sky.
 “S”, Snowboard. “J”, Jumping. “P”, Parapente).

El lote se encuentra no ordenado y agrupado por tipo de aventura y corta con número de paquete cero. 
En el lote no se ingresan registros cuyo tipo de aventura no se haya vendido.
A partir de dichos datos, se solicita informar:

a) La cantidad de paquetes vendidos de cada tipo de aventura.
b) La cantidad total de personas que disfrutaron de las aventuras durante la temporada.
c) El total recaudado por cada venta.
d) La venta con mayor importe de cada tipo de aventura.
*/

int main()
{
    int numPaquete, cantidad, precioPersona, horasTotales, cantTotalFinal = 0;
    char tipoAventura, tipoAventuraActual;

    cout << "Ingrese numero de paquete: " << endl;
    cin >> numPaquete;

    cout << "Ingrese tipo de aventura: 'M': Montaña, 'T': Trekking, 'R': Rafting, 'B': Bicicleta, 'C': Canopy, 'E': Escalar, 'K': Sky, 'S': Snowboard, 'J': Jumping o 'P': Parapente" << endl;
    cin >> tipoAventura;

    while (numPaquete != 0)
    {   
        int cantVendidos = 0, recaudacionMayor = 0, recaudacion = 0;
        bool recMayor = true;

        tipoAventuraActual = tipoAventura;

        while (tipoAventuraActual == tipoAventura && numPaquete != 0)
        {
            cout << "Ingrese cantidad de personas incluidas: " << endl;
            cin >> cantidad;

            cout << "Ingrese precio por persona: " << endl;
            cin >> precioPersona;

            cout << "Ingrese horas totales por actrividad: " << endl; 
            cin >> horasTotales;

            //Cantidad de paquetes por tipo?
            cantVendidos += cantidad;
            cantTotalFinal += cantidad;

            //Recaudacion por venta
            recaudacion = (cantidad * precioPersona);
            
            //C)
            cout << "Se recaudaron: " << recaudacion << "$ en ésta venta." << endl;

            //Guardo recaudacion mayor por tipo
            if (recMayor == true || recaudacion > recaudacionMayor)
            {
                recaudacionMayor = recaudacion;
                recMayor = false;
            }
            
            cout << "Ingrese numero de paquete: " << endl;
            cin >> numPaquete;

            cout << "Ingrese tipo de aventura: 'M': Montaña, 'T': Trekking, 'R': Rafting, 'B': Bicicleta, 'C': Canopy, 'E': Escalar, 'K': Sky, 'S': Snowboard, 'J': Jumping o 'P': Parapente" << endl;
            cin >> tipoAventura;
        }

        //A)
        cout << "La cantidad de paquetes vendidos fueron: " << cantVendidos << endl;

        //D)
        cout << "La venta con mayor importe fue: " << recaudacionMayor << "$" << endl;
        
    }

    //B)
    cout << "La cantidad total de personas durantre la temporada fueron: " << cantTotalFinal << endl;
    
    return 0;
}
