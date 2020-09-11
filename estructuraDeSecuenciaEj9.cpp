/*
Hacer un programa para ingresar por teclado una cantidad de minutos y
mostrar por pantalla a cuantas horas y minutos equivalen.

*/

#include <iostream>
using namespace std;

int main (){
int minutos;
cout << "Ingrese cantidad de minutos a calcular: ";
cin >> minutos;
cout << "Son " << minutos/60 << " horas y " <<  minutos%60 << " minutos.";
return 0;
}
