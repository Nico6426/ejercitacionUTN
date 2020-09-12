/*
Hacer un programa para ingresar por teclado cuatro números.
Si los valores que se ingresaran están ordenados en forma creciente,
emitir el mensaje “Conjunto Ordenado”, caso contrario emitir el mensaje:
“Conjunto Desordenado”.
*/

#include <iostream>
using namespace std;

int main (){
int n1, n2, n3, n4;
cout << "Ingrese 4 numeros: " << endl;
cin >> n1 >> n2 >> n3 >> n4;
if(n1 < n2 && n2 < n3 && n3 < n4){
    cout << "CONJUNTO ORDENADO!!";
}
else{
    cout << "CONJUNTO DESORDENADO!!";
}
return 0;
}
