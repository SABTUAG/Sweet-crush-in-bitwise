#include <iostream>
using namespace std;

void borrarLineaAnteriorEnConsola(){
    cout<<"\033[A\33[2K\r";
}

int ingresarNumero(int minimo, int maximo){
    int numero;
    while(true){
        cout<<"Ingresa el valor numerico: ";
        cin>>numero;
        cin.clear();
        cin.ignore(1000, '\n');
        if (numero<minimo || numero>maximo){
            borrarLineaAnteriorEnConsola();
            continue;
        }
        return numero;
    }
}