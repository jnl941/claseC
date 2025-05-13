#include <stdio.h>

#define MAX_FILAS 5
#define MAX_COLUMNAS 5

void leerMatriz(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas);
void imprimirMatriz(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas);
void sumarMatrices(int matriz1[MAX_FILAS][MAX_COLUMNAS], int matriz2[MAX_FILAS][MAX_COLUMNAS], int resultado[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas);
void multiplicarMatrices(int matriz1[MAX_FILAS][MAX_COLUMNAS], int filas1, int columnas1, int matriz2[MAX_FILAS][MAX_COLUMNAS], int filas2, int columnas2, int resultado[MAX_FILAS][MAX_COLUMNAS]);

int main() {
    int matriz1[MAX_FILAS][MAX_COLUMNAS], matriz2[MAX_FILAS][MAX_COLUMNAS];
    int filas1, columnas1, filas2, columnas2;
    int suma[MAX_FILAS][MAX_COLUMNAS], producto[MAX_FILAS][MAX_COLUMNAS];

    printf("Ingrese las dimensiones de la primera matriz (filas y columnas): ");
    scanf("%d %d", &filas1, &columnas1);
    leerMatriz(matriz1, filas1, columnas1);

    printf("Ingrese las dimensiones de la segunda matriz (filas y columnas): ");
    scanf("%d %d", &filas2, &columnas2);
    leerMatriz(matriz2, filas2, columnas2);

    if (filas1 == filas2 && columnas1 == columnas2) {
        sumarMatrices(matriz1, matriz2, suma, filas1, columnas1);
        printf("Suma de matrices:\n");
        imprimirMatriz(suma, filas1, columnas1);
    } else {
        printf("No se pueden sumar las matrices.\n");
    }

    if (columnas1 == filas2) {
        multiplicarMatrices(matriz1, filas1, columnas1, matriz2, filas2, columnas2, producto);
        printf("Producto de matrices:\n");
        imprimirMatriz(producto, filas1, columnas2);
    } else {
        printf("No se pueden multiplicar las matrices.\n");
    }

    return 0;
}

void leerMatriz(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas) {
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void sumarMatrices(int matriz1[MAX_FILAS][MAX_COLUMNAS], int matriz2[MAX_FILAS][MAX_COLUMNAS], int resultado[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void multiplicarMatrices(int matriz1[MAX_FILAS][MAX_COLUMNAS], int filas1, int columnas1, int matriz2[MAX_FILAS][MAX_COLUMNAS], int filas2, int columnas2, int resultado[MAX_FILAS][MAX_COLUMNAS]) {
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < columnas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}