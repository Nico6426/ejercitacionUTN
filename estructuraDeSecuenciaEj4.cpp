/*
Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avión
y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación
y el porcentaje de no ocupación del mismo.
*/

#include <iostream>
using namespace std;

int main (){
int totalAsientos, asientosOcupados;
cout << "Ingrese el total de asientos: ";
cin >> totalAsientos;
cout << "Cantidad de asientos ocupados: ";
cin >> asientosOcupados;
cout << "Porcentaje de ocupacion es: " << (float)asientosOcupados*100/totalAsientos << endl;
cout << "Porcentaje libre: " << 100-((float)asientosOcupados*100/totalAsientos);

return 0;
}
