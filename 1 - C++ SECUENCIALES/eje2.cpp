#include <iostream>
using namespace std;

int main() {

    /*Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos
    en dos variables distintas. A continuación se deben intercambiar mutuamente los valores en ambas
    variables y mostrarlos por pantalla.
    Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B, entonces A=3 y B=8,
    pero luego debe quedar A=8 y B=3.*/

   int n1, n2, n3;

   cout << "Ingrese un numero: ";
   cin >> n1;

   cout << "Ingrese otro numero: ";
   cin >> n2;

   cout << "Primer valor: " << n1 << " Segundo valor: " << n2 <<endl;

   n3 = n2;
   n2 = n1;
   n1 = n3;

   cout << "Luego de invertir, primer valor: " << n1 << " y segundo valor: " << n2;

   return 0;
}
