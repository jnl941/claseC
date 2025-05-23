#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UMBRAL_MULT 0.25

void leerValoresAuto(float** matriz, int filas, int columnas);
void imprimirMatriz(float** matriz, int filas, int columnas);
void calcularMedia(float **matriz, int filas, int columnas, float* media);
void imprimirPixelesContaminados(float ** matriz, int filas, int columnas, float umbral);
int main() {
    // Inicializar variables
    float** matrizContaminacion;
    int filas, columnas;
    float media;
    // Ingresar el numero de filas y columnas   
    do {
        printf("Introduce cuántas filas y columnas tiene la imagen: ");
        scanf("%d %d", &filas, &columnas);
        if(filas <= 0 || columnas <= 0) {
            printf("No es correcto, no se permiten dimensiones negativas o menores que cero\n");
        }
    } while (filas <= 0 || columnas <= 0);


    // Reservar memoria para la matriz
    matrizContaminacion = malloc(filas * sizeof(float*));

    // Introducir los valores de la imagen
    leerValoresAuto(matrizContaminacion, filas, columnas);
    printf("Valor FUERA [0][0]: %f\n", matrizContaminacion[0][0]);
    // Imprimir la matriz
    imprimirMatriz(matrizContaminacion, filas, columnas);

    // Calcular la media de la imagen
    calcularMedia(matrizContaminacion, filas, columnas, &media);
    // Calcular el umbral (25% de la media)
    float umbral = media * UMBRAL_MULT;
    printf("Umbral: %.3f\n", umbral);
    // Imprimir los píxeles contaminados
    imprimirPixelesContaminados(matrizContaminacion, filas, columnas, umbral);

    return 0;
}

void imprimirMatriz(float** matriz, int filas, int columnas) {
    printf("Matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%f ", matriz[i][j]);
        }
        printf("\n");
    }
}

void leerValoresAuto(float** matriz, int filas, int columnas) {
    // matrizContaminacion (main) -> puntero a primer elemento de la matriz
    // matriz = puntero copia de matrizContaminacion


    srand(time(NULL));

    // matriz = malloc(filas * sizeof(float*));
    // matriz (leerValoresAuto) sabe cuánto se ha reservado y que ya se ha reservado la memoria
    // matrizContaminacion (main) no tiene ni idea de que se ha reservado memoria
    
    for(int i = 0; i < filas; i++) {
        matriz[i] = malloc(columnas * sizeof(float));
        for(int j = 0; j < columnas; j++){
            float valor = (rand() % 1024) / 1024.0;
            printf("Valor [%d][%d]: %f\n", i, j, valor);
            matriz[i][j] = valor;
            printf("Valor Matriz [%d][%d]: %f\n", i, j, matriz[i][j]);
        }
    }
}

void calcularMedia(float **matriz, int filas, int columnas, float* media) {
    float suma = 0;
    int contador = filas*columnas;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++){
            suma += matriz[i][j];
        }
    }
    *media = suma / contador;
    printf("Media: %.3f\n", *media);

}

void imprimirPixelesContaminados(float** matriz, int filas, int columnas, float umbral) {
    printf("Píxeles contaminados:\n");
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            if(matriz[i][j] > umbral) {
                printf("[%d][%d] está contaminado\n", i, j);
            }
        }
    }
}