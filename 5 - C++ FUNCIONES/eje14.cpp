#include <iostream>

using namespace std;

/* 14) Hacer una función llamada esNumeroArmstrong que reciba un número entero
y devuelva true si el número enviado es un Número Armstrong y false si no lo
es.
NOTA: Un número N es un número Armstrong si la suma de sus cifras elevadas
a la cantidad de cifras del número da como resultado N.

Por ejemplo:
371 tiene 3 cifras.

Luego:
3 3 + 7 3 + 1 3 → 371
27 + 343 + 1 → 371
*/

bool esNumeroArmstrong(int num){

    int numTotal, digitos, suma = 0, contDigitos = 1, pot = 1;

    numTotal = num;
    digitos = num;

    while (digitos > 9)
    {
        digitos = digitos / 10;
        contDigitos++;
    }

    digitos = num;

    for (int i = 0; i < contDigitos; i++)
    {
        digitos = num % 10;

        for (int x = 0; x < contDigitos; x++)
        {
            pot *= digitos;
        }

        cout << pot << endl;

        suma += pot;
        pot = 1;
        num = num /10;
        
    }

    cout << suma << endl;
    
    if (numTotal == suma)
    {
        return true;
    }else
    {
        return false;
    }
    
}

int main()
{
    int num, r;

    cout << "Ingrese un número: " << endl;
    cin >> num;

    r = esNumeroArmstrong(num);

    if (r)
    {
        cout << "Es Numero de Armstrong " << endl;
    }else
    {
        cout << "No es Numero de Armstrong " << endl;
    }

    return 0;
}
