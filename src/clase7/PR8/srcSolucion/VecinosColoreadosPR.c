#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "PR8.h"

#define FILAS 10
#define COLUMNAS 10
#define PUNTOS_ALEATORIOS 20

typedef int Matriz[FILAS][COLUMNAS];

// Funciones
void inicializarMatriz(Matriz matriz);
void mostrarMatriz(Matriz matriz);
void colorearPuntosAleatorios(Matriz matriz);
int contarVecinosColoreados(Matriz matriz, int fila, int columna, int distancia);
int contarPuntosConVecinosColoreados(Matriz matriz);

int main(int argc, char *argv[])
{
    Matriz matriz;

    inicializarMatriz(matriz);
    colorearPuntosAleatorios(matriz);
    printf("Matriz original:\n");
    mostrarMatriz(matriz);

    int puntosConVecinosColoreados = contarPuntosConVecinosColoreados(matriz);

    printf("\nTotal de puntos coloreados con vecinos coloreados: %d\n", puntosConVecinosColoreados);

    return 0;
}

void inicializarMatriz(Matriz matriz) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = 0;  // Inicializar la matriz con 0 (no coloreado)
        }
    }
}

void mostrarMatriz(Matriz matriz) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void colorearPuntosAleatorios(Matriz matriz) {
    srand(time(NULL));

    int puntosColoreados = 0;
    while (puntosColoreados < PUNTOS_ALEATORIOS) {
        int fila = rand() % FILAS;
        int columna = rand() % COLUMNAS;

        if (matriz[fila][columna] == 0) {
            matriz[fila][columna] = 1;  // Colorear el punto
            puntosColoreados++;
        }
    }
}

int contarVecinosColoreados(Matriz matriz, int fila, int columna, int distancia) {
    int contador = 0;

    for (int i = -distancia; i <= distancia; i++) {
        for (int j = -distancia; j <= distancia; j++) {
            int nuevaFila = fila + i;
            int nuevaColumna = columna + j;

            // Verificar que la posición esté dentro de los límites de la matriz
            if (nuevaFila >= 0 && nuevaFila < FILAS && nuevaColumna >= 0 && nuevaColumna < COLUMNAS) {
                // Excluir el punto central y verificar si el vecino está coloreado
                if (!(i == 0 && j == 0) && matriz[nuevaFila][nuevaColumna] == 1) {
                    contador++;
                }
            }
        }
    }

    return contador;
}

int contarPuntosConVecinosColoreados(Matriz matriz) {
    int puntosConVecinosColoreados = 0;

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j] == 1 && contarVecinosColoreados(matriz, i, j, 1) > 0) {
                puntosConVecinosColoreados++;
            }
        }
    }

    return puntosConVecinosColoreados;
}