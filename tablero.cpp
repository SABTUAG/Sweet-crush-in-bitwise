#include <iostream>
#include <fichas.h>
using namespace std;

//#include "configuracion.h"


// tablero dinamico
//bits minimo 126
// fila min = 6, max = 12
// columna min = 7, max = 14
//bits maximos 504

unsigned char *crearTablero(int filas, int columnas){
    int bitsRequeridos = 3*filas*columnas;
    int cantidadNecesariaDeBytes = (bitsRequeridos+7)/8;
    unsigned char *tablero = new unsigned char[cantidadNecesariaDeBytes]();
    agregarFichasATablero(tablero,filas,columnas);
    return tablero;
}

void mostrarTablero(unsigned char *tablero, int filas, int columnas){
    cout<<"     ";
    for (int columna=0; columna<columnas; columna++){
        if(columna<10) cout<<columna<<"   ";
        else cout <<columna<<"  ";
    }
    cout<<endl;
    for (int fila=0; fila<filas; fila++){
        if(fila<10)cout<<" "<<fila<<"  ";
        else cout<<" "<<fila<<" ";
        for (int columna=0; columna<columnas; columna++){
            int indice=fila*columnas+columna;
            unsigned char ficha=leerFicha(tablero, indice);
            cout<<"["<<mostrarFicha(ficha)<<"] ";
        }
        cout<<endl;
    }
    cout<<""<<endl;
}

void liberarEspacioDeTablero(unsigned char *tablero){
    delete[] tablero;
    tablero = nullptr;
}