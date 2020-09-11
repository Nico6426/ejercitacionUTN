/*
Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje
de descuento aplicada a la misma y luego informar por pantalla el importa a pagar.

*/
#include <iostream>
using namespace std;

int main (){
float importeVenta, porcentajeDesc;
cout << "Ingrese el importe de la venta: $";
cin >> importeVenta;
cout << "Porcentaje de descuento: %";
cin >> porcentajeDesc;
cout << "Precio final: $" << importeVenta - (porcentajeDesc*importeVenta/100);
return 0;
}
