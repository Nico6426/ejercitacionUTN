/*Hacer un programa para ingresar por teclado tres números y luego determinar e
informar con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario
no emitir nada.
*/

#include <iostream>
using namespace std;

int main (){
int a, b, c;
cout << "Ingrese tres numeros: " << endl;
cin >> a >> b >> c;
if(a == b && b == c){
    cout << "Los numeros son iguales!!";
}
return 0;
}
