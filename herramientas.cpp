#include <iostream>
using namespace std;

int inputInt(char mensaje[]){
    int numero;
    cout<<mensaje;
    cin>>numero;
    return numero;
}

void validarEntrada(int& numero, int min, int max){
    while(numero<min || numero>max){
        cout<<"Error: Ingrese un numero entre "<<min<<" y "<<max<<endl;
        numero = inputInt("ingresa un numero: ");
    }
}