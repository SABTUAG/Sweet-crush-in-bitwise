// Reservar espacios para caracteres

char **crearVector(unsigned short longitud){
    char **vector = new char*[longitud];
    return vector;
}
char **crearMatriz(unsigned short filas, unsigned short columnas){
    char** matriz = crearVector(filas);
    for(unsigned short fila=0; fila<filas; fila++){
        matriz[fila] = new char[columnas];
    }
    return matriz;
}

// Liberar espacios

void liberarEspacioVector(char** vector){
    delete[] vector;
    vector = nullptr;
}

void liberarEspacioDeMatriz(char** matriz, unsigned short filas){
    for(unsigned short fila=0; fila<filas; fila++){
        delete[] matriz[fila];
        matriz[fila] = nullptr;
    }
    liberarEspacioVector(matriz);
}