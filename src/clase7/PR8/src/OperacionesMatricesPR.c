#include <stdio.h>
#include <stdlib.h>

#define MAX_FILAS 5
#define MAX_COLUMNAS 5

void leerMatriz(int** matriz, int* filas, int* columnas);
void imprimirMatriz(int** matriz, int filas, int columnas);
void sumarMatrices(int** matriz1, int** matriz2, int** resultado, int filas, int columnas);
// void multiplicarMatrices(int matriz1[MAX_FILAS][MAX_COLUMNAS], int filas1, int columnas1, int matriz2[MAX_FILAS][MAX_COLUMNAS], int filas2, int columnas2, int resultado[MAX_FILAS][MAX_COLUMNAS]);

int main() {
    int **matriz1 = malloc(MAX_FILAS * sizeof(int*));
    int **matriz2 = malloc(MAX_FILAS * sizeof(int*));
    int **suma = malloc(MAX_FILAS * sizeof(int*));
    int **producto = malloc(MAX_FILAS * sizeof(int*));
    
    
    int filas1, columnas1, filas2, columnas2;
    printf("Ingrese las dimensiones de la primera matriz (filas y columnas): ");
    // Se leen las dimensiones de la primera matriz
    leerMatriz(matriz1, &filas1, &columnas1);

    printf("Ingrese las dimensiones de la segunda matriz (filas y columnas): ");
    // Se leen las dimensiones de la primera matriz
    leerMatriz(matriz2, &filas2, &columnas2);

    printf("Ingrese las dimensiones de la segunda matriz (filas y columnas): ");
    imprimirMatriz(matriz1, filas1, columnas1);
    imprimirMatriz(matriz2, filas2, columnas2);
    printf("\n");




    // Comprobar si las matrices son compatibles para la suma y la multiplicación

    // Condición suma: Las filas y columnas de ambas matrices 
    //                 deben ser iguales
    if(filas1 == filas2 && columnas1 == columnas2){
        sumarMatrices(matriz1, matriz2, suma, filas1, columnas2);
        imprimirMatriz(suma, filas1, columnas1);
    }


    // Condición multiplicación: Las columnas de la primera matriz
    //                            deben ser iguales a las filas de la segunda
    //                            matriz
    if(columnas1 == filas2) {
        multiplicarMatrices(matriz1, matriz2, producto, filas1, columnas1, filas2, columnas2);
        imprimirMatriz(producto, filas1, columnas2);
    }
    

    return 0;
}

// void auxPrintMatrizSiguiente(int** matriz, int filas, int columnas, int nextIndex) {
//     printf("Matriz:\n");
//     for (int i = 0; i < filas; i++) {
//         for (int j = 0; j < columnas; j++) {
//             if(matriz[i][j] == nextIndex) {
//                 printf("X ");
//             } else if (matriz[i][j] == NULL) {
//                 printf("N ");
                
//             } else {
//                 printf("%d ", matriz[i][j]);
//             }
//         }
//         printf("\n");
//     }
// }

void leerMatriz(int** matriz, int* filas, int* columnas) {
    scanf("%d %d", filas, columnas);
    printf("filas: %d, columnas: %d\n", *filas, *columnas);
    while((*filas) < 0 || (*filas) > MAX_FILAS
    || (*columnas) < 0 || (*columnas) > MAX_COLUMNAS) {
        printf("No es correcto, no se permiten dimensiones negativas o menores que cero\n");
        printf("Ingrese las dimensiones de la matriz (filas y columnas): ");
        scanf("%d %d", filas, columnas);
    }
    for(int i = 0; i < (*filas); i++) {
        matriz[i] = malloc((*columnas) * sizeof(int));
        for(int j = 0; j < (*columnas); j++){
            printf("Introduce el valor de la posicion [%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirMatriz(int** matriz, int filas, int columnas) {
    printf("Matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void sumarMatrices(int** matriz1, int** matriz2, int** resultado, int filas, int columnas) {
    printf("Suma de matrices:\n");
    printf("filas: %d, columnas: %d\n", filas, columnas);

    for(int i = 0; i < filas; i++) {
        resultado[i] = malloc(columnas * sizeof(int));
        for(int j = 0; j < columnas; j++){
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void multiplicarMatrices(int** matriz1, int** matriz2, int** resultado, int filas1, int columnas1, int filas2, int columnas2) {
    printf("Multiplicación de matrices:\n");
    printf("filas1: %d, columnas1: %d\n", filas1, columnas1);
    printf("filas2: %d, columnas2: %d\n", filas2, columnas2);

    for(int i = 0; i < filas1; i++) {
        resultado[i] = malloc(columnas2 * sizeof(int));
        for(int j = 0; j < columnas2; j++){
            resultado[i][j] = 0;
            for(int k = 0; k < columnas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

// void multiplicarMatrices() {

// }