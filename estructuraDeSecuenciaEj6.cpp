/*
Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos
para cada una de las cuatros semanas del mes. El programa debe listar la recaudación
promedio por semana y el porcentaje de recaudación por semana.
*/

#include <iostream>
using namespace std;

int main (){
float semana1, semana2, semana3, semana4, suma;
cout << "Ingrese la venta de cada semana..." << endl;
cout << "Semana 1: $";
cin >> semana1;
cout << "Semana 2: $";
cin >> semana2;
cout << "Semana 3: $";
cin >> semana3;
cout << "Semana 4: $";
cin >> semana4;
suma = semana1+semana2+semana3+semana4;
cout << "Promedio de venta semanal: $" << suma/4 << endl;
cout << "Porcentaje de venta de cada semana..." << endl;
cout << "Semana 1: %" << semana1*100/suma << endl;
cout << "Semana 2: %" << semana2*100/suma << endl;
cout << "Semana 3: %" << semana3*100/suma << endl;
cout << "Semana 4: %" << semana4*100/suma << endl;

return 0;
}
