#include <stdio.h>

#define MAX_FILAS 5
#define MAX_COLUMNAS 5

void leerImagen(float imagen[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas);
float calcularMedia(float imagen[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas);
void imprimirPixelesContaminados(float imagen[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas, float umbral);

int main() {
    float imagen[MAX_FILAS][MAX_COLUMNAS];
    int filas, columnas;

    printf("Ingrese el número de filas (máximo %d): ", MAX_FILAS);
    scanf("%d", &filas);
    printf("Ingrese el número de columnas (máximo %d): ", MAX_COLUMNAS);
    scanf("%d", &columnas);

    if (filas > MAX_FILAS || columnas > MAX_COLUMNAS) {
        printf("Dimensiones de la imagen exceden el límite permitido.\n");
        return 1;
    }

    leerImagen(imagen, filas, columnas);
    float media = calcularMedia(imagen, filas, columnas);
    float umbral = media * 1.25;

    printf("Polución media: %.3f\n", media);
    printf("Pixeles con polución superior al 25%% de la media (%.3f):\n", umbral);
    imprimirPixelesContaminados(imagen, filas, columnas, umbral);

    return 0;
}

void leerImagen(float imagen[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas) {
    printf("Ingrese los valores de la imagen (0 a 1):\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            scanf("%f", &imagen[i][j]);
        }
    }
}

float calcularMedia(float imagen[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas) {
    float suma = 0.0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            suma += imagen[i][j];
        }
    }
    return suma / (filas * columnas);
}

void imprimirPixelesContaminados(float imagen[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas, float umbral) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (imagen[i][j] > umbral) {
                printf("\t(%d,%d) ", i + 1, j + 1);
            }
        }
    }
    printf("\n");
}