#ifndef GESTIONDEMEMORIA_H
#define GESTIONDEMEMORIA_H
char* reservarEspacios(unsigned short espacios);
char **crearVector(unsigned short longitud);
char **crearMatriz(unsigned short filas, unsigned short columnas);
// Liberar espacios
void liberarEspacio(char*& elemento);
void liberarEspacioVector(char**& vector);
void liberarEspacioDeMatriz(char**& matriz, unsigned short filas);
#endif // GESTIONDEMEMORIA_H
