/*Basado en los 2 ejercicios anteriores,
hacer un programa para ingresar por teclado la longitud
de los tres lados de un triángulo y luego listar que tipo de triángulo es.
*/

#include <iostream>
using namespace std;

int main (){
int a, b, c;
cout << "Ingrese los tres lados del triangulo:" << endl;
cin >> a >> b >> c;
if(a == b && a == c){
    cout << "Es un triangulo Equilatero!!";
}
else if(a != b && a != c && b!=c)
{
  cout << "Es un triangulo Escaleno!!";
}
else {
    cout << "Es un triangulo Isoseles!!";
}
return 0;
}
