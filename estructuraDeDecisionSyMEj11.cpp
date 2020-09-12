/*Hacer un programa para ingresar cinco números y
listar cuántos de esos cinco números son positivos.*/

#include <iostream>
using namespace std;

int main (){
int a, b, c, d, e, con = 0;
cout << "Ingrese cinco numeros: " << endl;
cin >> a >> b >> c >> d >> e;
if(a > 0){
    con++;
}
if(b > 0){
    con++;
}
if(c > 0){
    con++;
}
if(d > 0){
    con++;
}
if(e > 0){
    con++;
}
cout << "Son " << con << " numeros positivos.";
return 0;
}
