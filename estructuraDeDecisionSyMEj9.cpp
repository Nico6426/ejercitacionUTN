/* Hacer un programa para ingresar tres números y listar el máximo de ellos.
*/

#include <iostream>
using namespace std;

int main (){
int a, b, c, maximo;
cout << "Ingrese tres numeros: " << endl;
cin >> a >> b >> c;
if(a > b){
 maximo = a;
}
else {
    maximo = b;
}
if(c > maximo){
    maximo = c;
}
cout << "El maximo de ellos es: " << maximo;
return 0;
}
