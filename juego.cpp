#include <iostream>
#include <herramientas.h>
#include "tablero.h"
#include "fichas.h"
using namespace std;


// No ficha existe ficha especial
// El jugador tendra unos movimientos definida para lograr un puntaje
// si logra ese puntaje, gana, sino pierde.
// El puntaje necesario para ganar y los movimientos disponibles se definiran por el tamaño
// del tablero

// Configuraciones de juego básicas
//Dentro de iniciar Juego;
void estadoJuego(
    int filas,
    int columnas,
    int eliminacionesRealizadasPorJugador,
    int fichasEliminadasTotales,
    int combinacionesDetectadas,
    int PuntuacionObtenida,
    int cascadasTotalesObtenidas,
    int puntuacionParaGanar,
    int movimientosRestantes
    ){
    cout<<"----"<<endl;
    cout<<"Dimensiones actuales de tablero: "<<filas<<"*"<<columnas<<endl;
    cout<<"Fichas eliminadas por ti: "<<eliminacionesRealizadasPorJugador<<endl;
    cout<<"Fichas eliminadas totales: "<<fichasEliminadasTotales<<endl;
    cout<<"Combinaciones detectadas: "<<combinacionesDetectadas<<endl;
    cout<<"Cascadas obtenidas: "<<cascadasTotalesObtenidas<<endl;
    cout<<"Puntuacion obtenida: "<<PuntuacionObtenida<<endl;
    cout<<"Puntuacion para ganar: "<<puntuacionParaGanar<<endl;
    cout<<"Movimientos restantes: "<<movimientosRestantes<<endl;
    cout<<"----\n"<<endl;
}

void iniciarJuego(){
    cout<<"-> Determinar filas (Entre 6 y 12)"<<endl;
    int filas=ingresarNumero(6,12);
    borrarLineasAnterioresEnConsola(2);

    cout<<"-> Determinar columnas (Entre 7 y 12)"<<endl;
    int columnas=ingresarNumero(7,12);
    borrarLineasAnterioresEnConsola(2);
    unsigned char *tablero = crearTablero(filas, columnas);
    //
    int movimientosTotales=4;
    int movimientosRealizados=0;
    int movi=0;

    while(movimientosRealizados<=movimientosTotales){
        if(movi >= 1) borrarLineasAnterioresEnConsola(filas+4);
        mostrarTablero(tablero, filas, columnas);
        bool movimientoValido = moverFicha(tablero, filas, columnas);
        if(movimientoValido){
            cout<<"Tablero listo. Realiza un movimiento."<<endl;
            movimientosRealizados++;
        }
        else {
            cout<<"Movimiento no permitido."<<endl;
        }
        movi++;
    }


    borrarLineasAnterioresEnConsola();
    mostrarTablero(tablero, filas, columnas);
    cout<<"Movimientos terminados"<<endl;
    liberarEspacioDeTablero(tablero);

}
