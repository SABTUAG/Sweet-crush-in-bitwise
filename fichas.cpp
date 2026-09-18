#include <iostream>
#include "herramientas.h"
using namespace std;

unsigned char generarFicha(int elegida=0){
    // solo debe ocupar 3 bits
    switch(elegida){
        case 1: return 0b001; //A
        case 2: return 0b010; //B
        case 3: return 0b011; //C
        case 4: return 0b100; //D
        case 5: return 0b101; //E
        case 6: return 0b110; //F
        default: return 0b000;
    }
}

unsigned char leerFicha(unsigned char *tablero,int indice){
    int bitInicial=indice*3;
    unsigned char ficha = 0;
    short bitsDeLaFicha = 3;
    for (int bitFicha=0; bitFicha<bitsDeLaFicha; bitFicha++){
        int bitGlobal=bitInicial+bitFicha;
        int numeroByte=bitGlobal/8;
        int posicionDentroDelByte=bitGlobal%8;
        unsigned char mascara=(unsigned char)(1u<<(7-posicionDentroDelByte));
        if ((tablero[numeroByte]&mascara) != 0){
            ficha=(unsigned char)(ficha|(1u<<(2-bitFicha)));
        }
    }
    return ficha;
}

unsigned char mostrarFicha(unsigned char ficha){
    switch(ficha){
        case 0b001: return 'A';
        case 0b010: return 'B';
        case 0b011: return 'C';
        case 0b100: return 'D';
        case 0b101: return 'E';
        case 0b110: return 'F';
        default: return ' ';
    }
}

void agregarFicha(unsigned char *tablero, unsigned char ficha, int indice){
    int bitInicial = 3*indice;
    short bitsDeLaFicha = 3;
    for (int bitFicha=0; bitFicha<bitsDeLaFicha; bitFicha++){
        int bitGlobal = bitInicial + bitFicha;
        int numeroByte = bitGlobal/8;
        int posicionDentroDelByte = bitGlobal%8;
        unsigned char mascara=(unsigned char)(1u<<(7-posicionDentroDelByte));
        unsigned char bitActual=(unsigned char)(1u<<(2-bitFicha));
        if ((ficha&bitActual) != 0){
            tablero[numeroByte]=(unsigned char)(tablero[numeroByte]|mascara);
        }else{
            tablero[numeroByte]=(unsigned char)(tablero[numeroByte]&(unsigned char)~mascara);
        }
    }
}

void agregarFichasATablero(unsigned char *tablero, int filas, int columnas){
    int posicionesExistentes=filas*columnas;
    for (int posicion=0; posicion<posicionesExistentes; posicion++){
        int fichaAleatoria = pseudoNumeroAleatorio(1,6);
        agregarFicha(tablero, generarFicha(fichaAleatoria), posicion);
    }
}

bool moverFicha(unsigned char *tablero, int filas, int columnas){
    cout<<"Movimiento ... "<<endl;
    cout<<"-> Fila de la ficha"<<endl;
    int fila = ingresarNumero(0,filas-1);
    borrarLineasAnterioresEnConsola(2);
    cout<<"-> Columna de la ficha"<<endl;
    int columna = ingresarNumero(0,columnas-1);
    borrarLineasAnterioresEnConsola(2);
    cout<<"-> Direccion (w=arriba, s=abajo, a=izquierda, d=derecha)"<<endl;
    char letrasValidasParaMoverse[4]={119,115,97,100};
    char direccion=ingresarCaracterValido(letrasValidasParaMoverse,4);
    borrarLineasAnterioresEnConsola(2);
    int nuevaFila = fila;
    int nuevaColumna = columna;
    if (direccion==119) nuevaFila--;
    else if (direccion==115) nuevaFila++;
    else if (direccion==97) nuevaColumna--;
    else if (direccion==100) nuevaColumna++;
    if (fila<0 || fila>=filas ||
        columna<0 || columna>=columnas ||
        nuevaFila<0 || nuevaFila>=filas ||
        nuevaColumna<0 || nuevaColumna>=columnas) return 0;
    int indiceOrigen = fila*columnas+columna;
    int indiceDestino = nuevaFila*columnas+nuevaColumna;
    unsigned char fichaOrigen = leerFicha(tablero,indiceOrigen);
    unsigned char fichaDestino = leerFicha(tablero,indiceDestino);
    agregarFicha(tablero, fichaDestino, indiceOrigen);
    agregarFicha(tablero, fichaOrigen, indiceDestino);
    return 1;
}

