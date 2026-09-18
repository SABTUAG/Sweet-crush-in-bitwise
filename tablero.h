#ifndef TABLERO_H
#define TABLERO_H
unsigned char *crearTablero(int filas, int columnas);
void mostrarTablero(unsigned char *tablero, int filas, int columnas);
void liberarEspacioDeTablero(unsigned char *tablero);
#endif // TABLERO_H
