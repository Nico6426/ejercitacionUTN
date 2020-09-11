/*
Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar por teclado
la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas
para cada una de ellas.
*/

#include <iostream>
using namespace std;

int main (){
int a, b, c;
float pa, pb, pc;
cout << "Alfajores vendidos de A: ";
cin >> a;
cout << "Alfajores vendidos de B: ";
cin >> b;
cout << "Alfajores vendidos de C: ";
cin >> c;
pa=(float)a*100/(a+b+c);
pb=(float)b*100/(a+b+c);
pc=(float)c*100/(a+b+c);
cout << "Porcentaje vendido de A: " << pa << endl;
cout << "Porcentaje vendido de B: " << pb << endl;
cout << "Porcentaje vendido de C: " << pc << endl;
return 0;
}
