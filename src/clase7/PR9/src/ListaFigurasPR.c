#include <stdio.h>
#include <stdlib.h>
#include "figuras.h"

#define MAX_FIGURAS 10

typedef struct {
    int circulos;
    int triangulos;
    int rectangulos;
    float areaCirculos;
    float areaTriangulos;
    float areaRectangulos;
} tipo_analisis;

void analizarFiguras(tipo_analisis *analisis, figura_t figuras[], int count) {
    for (int i = 0; i < count; i++) {
        switch (figuras[i].tipo) {
            case 'C':
                analisis->circulos++;
                analisis->areaCirculos += calcularAreaCirculo(figuras[i].radio);
                break;
            case 'R':
                analisis->rectangulos++;
                analisis->areaRectangulos += calcularAreaRectangulo(figuras[i].base, figuras[i].altura);
                break;
            case 'T':
                analisis->triangulos++;
                analisis->areaTriangulos += calcularAreaTriangulo(figuras[i].lado1, figuras[i].lado2, figuras[i].lado3);
                break;
        }
    }
}

int main() {
    figura_t figuras[MAX_FIGURAS];
    tipo_analisis analisis = {0, 0, 0, 0.0, 0.0, 0.0};
    int count = 0;

    // Lógica para leer figuras y almacenarlas en el arreglo figuras
    // ...

    analizarFiguras(&analisis, figuras, count);

    printf("Total de círculos: %d, Área total: %.2f\n", analisis.circulos, analisis.areaCirculos);
    printf("Total de rectángulos: %d, Área total: %.2f\n", analisis.rectangulos, analisis.areaRectangulos);
    printf("Total de triángulos: %d, Área total: %.2f\n", analisis.triangulos, analisis.areaTriangulos);

    return 0;
}