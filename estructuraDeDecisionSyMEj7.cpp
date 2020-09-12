/*Hacer un programa para ingresar por teclado tres números e
informar con una leyenda aclaratoria si los tres son todos
distintos entre sí, caso contrario no emitir nada.
*/


#include <iostream>
using namespace std;

int main (){
int a, b, c;
cout << "Ingrese tres numeros:" << endl;
cin >> a >> b >> c;
if(a != b && a != c && b!=c)
{
  cout << "Todos los numeros son distintos!!";
}
return 0;
}
