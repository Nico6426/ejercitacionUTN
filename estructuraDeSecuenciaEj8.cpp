
/*
Hacer un programa para ingresar por teclado el importe de una venta sin el descuento
y el importe de esa misma venta con el descuento aplicado y luego informar por pantalla
el porcentaje de descuento aplicada a la misma.
*/
#include <iostream>
using namespace std;

int main (){
float importeVenta, importeConDesc;
cout << "Ingrese importe de la venta: $";
cin >> importeVenta;
cout << "Ingrese monto final: $";
cin >> importeConDesc;
cout << "El descuento realizado fue de: %" <<   (importeVenta-importeConDesc)*100/importeVenta;
return 0;
}
