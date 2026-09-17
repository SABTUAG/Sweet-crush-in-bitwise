#include <iostream>
#include "gestionDeMemoria.h"
//#include "configuracion.h"
//#include "fichas.h"
//#include "tablero.h"
using namespace std;

// Integracion de sistema

int main(){
    cout<<"Bienvenidos al juego"<<endl; 
    cout<<"Presiona cualquier tecla para continuar..."<<endl;
    char* tecla = reservarEspacio(1);
    tecla[0] = 'a'; 
    liberarEspacio(tecla);
    return 0;
}
