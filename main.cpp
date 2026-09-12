#include <iostream>
//#include "configuracion.h"
//#include "fichas.h"
//#include "tablero.h"
using namespace std;

// Integracion de sistema

int main(){
    int x = 5;
    int y = 11;

    int bit_and = x&y;
    int bit_or = x|y;
    int bit_xor = x^y;
    int bit_not = ~x;
    int movebitToRight = x>>1;
    int moveBitToLeft = y<<1;

    cout<<bit_and<<endl;
    cout<<bit_or<<endl;
    cout<<bit_xor<<endl;
    cout<<bit_not<<endl;
    cout<<movebitToRight<<endl;
    cout<<moveBitToLeft<<endl;

    return 0;
}
