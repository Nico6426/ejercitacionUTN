
/*
Hacer un programa para ingresar por teclado una cantidad de horas y
mostrar por pantalla a cuantos días y horas equivalen.
*/

#include <iostream>
using namespace std;

int main (){
int horas;
cout << "Ingrese cantidad de horas a calcular: ";
cin >> horas;
cout << "Son " << horas/24 << " dia/s y " <<  horas%24 << " hora/s.";
return 0;
}
