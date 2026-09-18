#include <iostream>
#include <ctime>
using namespace std;

void borrarLineasAnterioresEnConsola(int LineasABorrar=1) {
    for (int i=0; i<LineasABorrar; i++){
        cout<<"\033[A\33[2K\r";
    }
}

//void mostrarMensajesTemporales(char *mensaje, short duracionSegundo=10);

char ingresarCaracterValido(char caracteresValidos[], int tamanoArreglo){
    char caracter;
    while(true){
        cout<<"Ingresa el caracter: ";
        cin>>caracter;
        cin.clear();
        cin.ignore(1000, '\n');
        if (caracter>=65 && caracter<=90)caracter+=32;
        bool caracterValido=0;
        for(int n=0; n<tamanoArreglo; n++){
            if (caracter==caracteresValidos[n]){
                caracterValido=1;
                continue;
            }
        }
        if(!caracterValido){
            borrarLineasAnterioresEnConsola();
            continue;
        }
        break;
    }
    return caracter;
}

int ingresarNumero(int minimo=0, int maximo=10){
    int numero;
    while(true){
        cout<<"Ingresa el valor numerico: ";
        cin>>numero;
        cin.clear();
        cin.ignore(1000, '\n');
        if (numero<minimo || numero>maximo){
            borrarLineasAnterioresEnConsola();
            continue;
        }
        break;
    }
    return numero;
}

int pseudoNumeroAleatorio(int valorMin, int valorMax){
    int numero = rand()%(valorMax-valorMin+1)+valorMin;
    return numero;
}
