/*
Una granja vende la caja de 12 unidades a $ 100 y cada huevo suelto a $ 12.
Hacer un programa para ingresar la cantidad de huevos que compra un cliente y
mostrar por pantalla el importe total a pagar.

Recordatorio. Por cada 12 huevos se debe calcular una caja y el excedente se
calcula como suelto.
*/

#include <iostream>
using namespace std;

int main (){
int huevosComprados, total;
cout << "Ingrese cuantos huevos compro: ";
cin >> huevosComprados;
total = (huevosComprados/12*100)+(huevosComprados%12*12);
cout << "Importe a abonar: $" << total;
return 0;
}
