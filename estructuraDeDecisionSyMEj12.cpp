/*Hacer un programa para leer tres números diferentes y determinar e informar
el número del medio. Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.
*/

#include <iostream>
using namespace std;

int main (){
int a, b, c, medio;
cout << "Ingrese tres numeros distintos: " << endl;
cin >> a >> b >> c;
if(a > b && a < c || a > c && a < b){
    medio = a;
}
if(b > a && b < c || b > c && b < a){
    medio = b;
}
if(c > b && c < a || c > a && c < b){
    medio = c;
}
cout << "El numero del medio es: " << medio;
return 0;
}
