/*Hacer un programa para ingresar por teclado dos números y
luego informar por pantalla la diferencia absoluta entre ambos. */


#include <iostream>
using namespace std;

int main (){
int a, b;
cout << "Ingrese dos numeros: " << endl;
cin >> a >> b;
if (a>b){
    cout << a - b;
}

else{
   cout << b - a;
}
return 0;
}
