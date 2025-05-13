#ifndef PR8_H
#define PR8_H

#define FILAS 10
#define COLUMNAS 10
#define PUNTOS_ALEATORIOS 20

typedef int Matriz[FILAS][COLUMNAS];

// Function declarations
void inicializarMatriz(Matriz matriz);
void mostrarMatriz(Matriz matriz);
void colorearPuntosAleatorios(Matriz matriz);
int contarVecinosColoreados(Matriz matriz, int fila, int columna, int distancia);
int contarPuntosConVecinosColoreados(Matriz matriz);

#endif // PR8_H