#include <iostream>
//#include "gestionDeMemoria.h"
//#include "configuracion.h"
//#include "fichas.h"
//#include "tablero.h"
#include "juego.h"
using namespace std; 
// Integracion de sistema

int main(){
    bool flagExe=true;
    while(flagExe){
        instruccionesDeJuego();
        int accionJugador;
        cout<<"Menu de opciones "<<endl;
        cout<<"1. Jugar\n 2. Salir"<<endl;
        cin>>accionJugador;
        if (accionJugador==2) break;
    }
    return 0;
}
