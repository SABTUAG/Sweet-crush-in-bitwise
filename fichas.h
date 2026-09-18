#ifndef FICHAS_H
#define FICHAS_H
unsigned char generarFicha(int elegida=0);
unsigned char leerFicha(unsigned char *tablero, int posicion);
unsigned char mostrarFicha(unsigned char ficha);
void agregarFicha(unsigned char *tablero, unsigned char ficha, int indice);
void agregarFichasATablero(unsigned char *tablero, int filas, int columnas);
bool moverFicha(unsigned char *tablero, int filas, int columnas);
#endif // FICHAS_H
