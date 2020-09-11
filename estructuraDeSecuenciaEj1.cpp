#include <iostream>
using namespace std;

int main (){
float horas, valorHora;
cout << "Ingrese la cantidad de horas trabajadas: " << endl;
cin >> horas;
cout << "Ingrese valor de la hora de trabajo: " << endl;
cin >> valorHora;
cout << "Importe a cobrar: $" << horas*valorHora;

return 0;
}
