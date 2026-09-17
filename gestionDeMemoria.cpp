// Reservar espacios para caracteres
char* reservarEspacio(unsigned short espacios){
    char* elemento = new char[espacios];
    return elemento;
}

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
void liberarEspacio(char*& elemento){
    delete[] elemento;
    elemento = nullptr;
}

void liberarEspacioVector(char**& vector){
    delete[] vector;
    vector = nullptr;
}

void liberarEspacioDeMatriz(char**& matriz, unsigned short filas){
    for(unsigned short fila = 0; fila < filas; fila++){
        liberarEspacio(matriz[fila]);
    }
    liberarEspacioVector(matriz);
}