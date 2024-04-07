#include <iostream>
using namespace std;

int main() {

    /*Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario
    y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.*/


   //int horas, valor, sueldo;

   int a, b, c, may, men, med;

   cin >> a;
   cin >> b;
   cin >> c;

   if(a > b) {
       may = a;
       men = b;
   }
   else{
       may = b;
       men = a;
   }
    if(c > may){
       med = may;
   }
   else{
    if(c < men){
       med = men;
   }
   else{
       med = c;
   }
   }


   cout << "Medio: " <<med;

   return 0;
}
