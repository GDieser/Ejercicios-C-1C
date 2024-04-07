#include <iostream>
using namespace std;

int main() {

    /*Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario
    y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.*/


   int horas, pago, total;

   cout << "Ingrese cantidad de horas trabajadas: " << endl;
   cin >> horas;

   cout << "Ingrese el valor por hora de trabajo: " << endl;
   cin >> pago;

   total = horas * pago;

   cout << "Total a pagar: $" << total << endl;

   return 0;
}
