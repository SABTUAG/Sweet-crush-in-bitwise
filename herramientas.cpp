#include <ctime>
using namespace std;

short numeroAleatorio(short valorMinimo, short valorMaximo){
    const unsigned long long a=1103515245;
    const unsigned long long m=1ULL<<31;
    const unsigned short c=12345;
    static unsigned long long semilla = time(nullptr);
    semilla=(a * semilla + c)%m;
    short rango=valorMaximo-valorMinimo+1;
    short numero= valorMinimo + (semilla%rango);
    return numero;
}

// Bitwise

// modificar bits
// construir valores


// Tools
