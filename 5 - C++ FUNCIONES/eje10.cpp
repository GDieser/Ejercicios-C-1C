#include <iostream>

using namespace std;

/* 10) Hacer una función que reciba un código de naipe (del 1 al 40) y determine el
número y el palo de la baraja española de 40 cartas. La función debe recibir por
referencia el número de naipe y el nombre del palo y por valor el código de
naipe.
Tener en cuenta que:
Los códigos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del
21 al 30 y oro del 31 al 40. Por ejemplo, naipe con ID #10 es el 12 de espadas.
*/

void Naipe( int Id, string& nombre, int& num){

    if (Id < 11)
    {
        nombre = "Espada";
    }else if (Id < 21)
    {
        nombre = "Basto";
    }else if (Id < 31)
    {
        nombre = "Copa";
    }else
    {
        nombre = "Oro";
    }

    if (Id > 10)
    {
        num = Id % 10;
    }else
    {
        num = Id;
    }
    
    
    
    if (Id == 8 || Id == 18 || Id == 28 || Id == 38)
    {
        num = 10;
    }else if(Id == 9 || Id == 19 || Id == 29 || Id == 39)
    {
        num = 11;
    }else if (Id == 10 || Id == 20 || Id == 30 || Id == 40)
    {
        num = 12;
    }
    
}

int main()
{

    int ID, numCarta;
    string carta;

    cout << "Ingrese numero de carta: 1 a 40" << endl;
    cin >> ID;

    Naipe(ID, carta, numCarta);

    cout << "ID: #" << ID << ", numero: " << numCarta << ", Palo: " << carta << endl;

    return 0;
}
