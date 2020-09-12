/*
Un año es bisiesto si es múltiplo de 4, exceptuando a los años que son múltiplos
de 100 pero que no sean múltiplos de 400.
Esto último significa que el año 1900 no es bisiesto, pero el año 2000 si lo es.
Hacer un programa para que ingresar un año y listar por pantalla si es bisiesto o no lo es.
*/
#include <iostream>
using namespace std;

int main (){
int ano;
cout << "Ingrese un año: ";
cin >> ano;
if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
    cout << "El año es bisiesto!";
}
else {
    cout << "El año no es bisiesto!!";
}
return 0;
}
