#include <iostream>
//#include <herramientas.h>
//#include "tablero.h"
using namespace std;

// No ficha existe ficha nula, siempre habra fichas en el tablero
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
    int movimientosRestantes
    ){
    cout<<"----"<<endl;
    cout<<"Dimensiones actuales de tablero: "<<filas<<"x"<<columnas<<endl;
    cout<<"Fichas eliminadas por ti: "<<eliminacionesRealizadasPorJugador<<endl;
    cout<<"Fichas eliminadas totales: "<<fichasEliminadasTotales<<endl;
    cout<<"Combinaciones detectadas: "<<combinacionesDetectadas<<endl;
    cout<<"Cascadas obtenidas: "<<cascadasTotalesObtenidas<<endl;
    cout<<"Puntuacion obtenida: "<<PuntuacionObtenida<<endl;
    cout<<"Movimientos restantes: "<<movimientosRestantes<<endl;
    cout<<"----\n"<<endl;
}
void iniciarJuego();
