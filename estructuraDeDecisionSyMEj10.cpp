/*Hacer un programa para ingresar cinco números y listar el máximo de ellos.*/

#include <iostream>
using namespace std;

int main (){
int a, b, c, d, e, maximo;
cout << "Ingrese cinco numeros: " << endl;
cin >> a >> b >> c >> d >> e;
if(a > b){
 maximo = a;
}
else {
    maximo = b;
}
if(c > maximo){
    maximo = c;
}
if(d > maximo){
    maximo = d;
}
if(e > maximo){
    maximo = e;
}
cout << "El maximo de ellos es: " << maximo;
return 0;
}
