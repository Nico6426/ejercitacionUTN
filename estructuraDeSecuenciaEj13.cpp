/*
Hacer un programa para un cajero automático para ingresar un importe a retirar y
convertir el mismo en la cantidad de billetes de $ 1.000, $ 500, $ 200 y $ 100 a entregar.
*/

#include <iostream>
using namespace std;

int main (){
int dinero, bMil, bQuinientos, bDoscientos, bCien;
cout << "Dinero a retirar: $";
cin >> dinero;
bMil = dinero/1000;
dinero -= bMil*1000;
bQuinientos = dinero/500;
dinero -= bQuinientos*500;
bDoscientos = dinero/200;
dinero -= bDoscientos*200;
bCien = dinero/100;
cout << "Entregar: " << bMil << " de $1000." << endl;
cout << "Entregar: " << bQuinientos << " de $500." << endl;
cout << "Entregar: " << bDoscientos << " de $200." << endl;
cout << "Entregar: " << bCien << " de $100." << endl;
return 0;
}
