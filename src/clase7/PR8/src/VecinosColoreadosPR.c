#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 10
#define COLUMNAS 10
#define PUNTOS_ALEATORIOS 20

void introducirDatosEnMatrizManual(int** matriz){
    for(int i = 0; i < FILAS; i++) {
        matriz[i] = malloc(COLUMNAS * sizeof(int));
        for(int j = 0; j < COLUMNAS; j++){
            printf("Introduce el valor de la posicion [%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

}

void introducirDatosEnMatrizAuto(int** matriz){
    for(int i = 0; i < FILAS; i++) {
        matriz[i] = malloc(COLUMNAS * sizeof(int));
        for(int j = 0; j < COLUMNAS; j++){
            matriz[i][j] = 0;
        }
    }
}

void mostrarMatriz(int** matriz) {
    for (int i = 0; i < FILAS; i++) {
        for(int j = 0; j < COLUMNAS; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void colorearPuntosAleatorios(int** matriz) {
    srand(time(NULL));
    for (int i = 0; i < PUNTOS_ALEATORIOS; i++) {
        int filaAleatoria = rand() % FILAS;
        int columnaAleatoria = rand() % COLUMNAS;
        while(matriz[filaAleatoria][columnaAleatoria] == 1){
            filaAleatoria = rand() % FILAS;
            columnaAleatoria = rand() % COLUMNAS;
        }
        matriz[filaAleatoria][columnaAleatoria] = 1;
        // if(matriz[filaAleatoria][columnaAleatoria] == 1) {
        //     i--;
        //     //break; TERMINA Y SE VA
        //     //continue; TERMINA LA ITERACION ACTUAL Y VUELVE A EMPEZAR
        //     continue;
        // }
    }
}

void contarPuntosConVecinosColoreados(int** matriz, int* contador){
    int vecinoEncontrado = 0;
    for(int i = 0; i < FILAS; i++) {
        for(int j = 0; j < COLUMNAS; j++){
            if(matriz[i][j] == 1){
                // Verificar vecinos
                for (int ii = -1; ii <= 1; ii++){
                    for(int jj = -1; jj <= 1; jj++){
                        if(ii == 0 && jj == 0) {
                            continue;
                        }
                        int filaVecino = i + ii;
                        int columnaVecino = j + jj;
                        if(filaVecino >= 0 && filaVecino < FILAS
                        && columnaVecino >= 0 && columnaVecino < COLUMNAS){
                            if(matriz[filaVecino][columnaVecino] == 1){
                                (*contador)++;
                                printf("Punto Vecino [%d][%d] vecino de [%d][%d]\n es coloreado", filaVecino, columnaVecino, i, j);
                                printf("\n");
                                vecinoEncontrado = 1;
                                break;
                            }
                        }
                    }
                    if(vecinoEncontrado == 1){
                        vecinoEncontrado = 0;
                        break;
                    }
                }
            }
        }
    }
}

// Funciones
int main(int argc, char *argv[])
{

    int** matriz = malloc(FILAS * sizeof(int*));
    int contadorPuntosVecinosColoreados = 0;



    //Inicializar la matriz
    // introducirDatosEnMatrizManual(matriz);
    introducirDatosEnMatrizAuto(matriz);
    mostrarMatriz(matriz);
    printf("\n");
    //Colorear puntos aleatorios
    colorearPuntosAleatorios(matriz);
    mostrarMatriz(matriz);
    //Mostrar la matriz
    // mostrarMatriz(matriz);
    
    contarPuntosConVecinosColoreados(matriz, &contadorPuntosVecinosColoreados);
    printf("Total de puntos con vecinos coloreados: %d\n", contadorPuntosVecinosColoreados);
    //Contar puntos con vecinos coloreados
    // contarPuntosConVecinosColoreados(matriz, &contadorPuntosVecinosColoreados);

    return 0;
}

