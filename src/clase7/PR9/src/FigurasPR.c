#include <stdio.h>
#include <math.h>
#include "figuras.h"

void calcularAreaFigura() {
    char tipoFigura;
    printf("Ingrese el tipo de figura (C: Círculo, R: Rectángulo, T: Triángulo): ");
    scanf(" %c", &tipoFigura);

    switch (tipoFigura) {
        case 'C':
        {
            float radio;
            printf("Ingrese el radio del círculo: ");
            scanf("%f", &radio);
            if (radio > 0) {
                float area = PI * radio * radio;
                printf("Área del círculo: %.2f\n", area);
            } else {
                printf("Círculo no válido\n");
            }
            break;
        }
        case 'R':
        {
            float base, altura;
            printf("Ingrese la base y altura del rectángulo: ");
            scanf("%f %f", &base, &altura);
            if (base > 0 && altura > 0) {
                float area = base * altura;
                printf("Área del rectángulo: %.2f\n", area);
            } else {
                printf("Rectángulo no válido\n");
            }
            break;
        }
        case 'T':
        {
            float lado1, lado2, lado3;
            printf("Ingrese las longitudes de los tres lados del triángulo: ");
            scanf("%f %f %f", &lado1, &lado2, &lado3);
            if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
                float s = (lado1 + lado2 + lado3) / 2;
                float area = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
                printf("Área del triángulo: %.2f\n", area);
            } else {
                printf("Triángulo no válido\n");
            }
            break;
        }
        default:
            printf("Tipo de figura no válido\n");
            break;
    }
}

int main() {
    calcularAreaFigura();
    return 0;
}