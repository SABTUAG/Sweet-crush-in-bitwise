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
void instruccionesDeJuego(){
    cout<<"\n***  BIENVENIDO A CANDY CRUSH  ***"<<endl;
    cout<<"Instrucciones de juego"<<endl;
    cout<<"1. El objetivo del juego es lograr un puntaje determinado en un numero limitado de movimientos."<<endl;
    cout<<"2. El puntaje necesario para ganar y los movimientos disponibles se definen por el tamaño del tablero."<<endl;
    cout<<"¡Mucha suerte!\n"<<endl;
}
void iniciarPartida(){
    char nombreJugador[20]; 
    cout<<"Ingrese su nombre: ";
    cin.getline(nombreJugador, 20);
    cout<<"¡Hola, "<<nombreJugador<<"! ¡Bienvenido a Candy Crush!"<<endl;
    int filas; 
    cout<<"Ingrese el número de filas del tablero: ";
    cin>>filas;
    int columnas;
    cout<<"Ingrese el número de columnas del tablero: ";
    cin>>columnas;
}
