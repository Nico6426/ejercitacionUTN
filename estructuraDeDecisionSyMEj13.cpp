
/*Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona,
ingresando día, mes y año como 3 datos individuales.
Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales.
Calcular luego la edad en años de esa persona y listarlo por pantalla.
*/

#include <iostream>
using namespace std;

int main (){
int diaNac, mesNac, anoNac, diaAct, mesAct, anoAct, edad;
cout << "Ingrese fecha de Nacimiento: " << endl;
cout << "Dia: ";
cin >> diaNac;
cout << "Mes: ";
cin >> mesNac;
cout << "Año: ";
cin >> anoNac;
cout << "Fecha actual: " << endl;
cout << "Dia: ";
cin >> diaAct;
cout << "Mes: ";
cin >> mesAct;
cout << "Año: ";
cin >> anoAct;

if(mesAct != mesNac){
        if(mesAct < mesNac){
            edad = anoAct-anoNac-1;
        }
        else{
            edad = anoAct-anoNac;
        }
    }
else if (diaAct<diaNac){
        edad = anoAct-anoNac-1;
        }
else{
    edad = anoAct-anoNac;
    }
cout << "Su edad es: " << edad;
return 0;
}
