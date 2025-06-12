#include <stdio.h>

#define MAX 100 // Grado máximo del polinomio 

typedef double tipo_polinomio[MAX];

void leerPolinomio(tipo_polinomio polinomio, int *grado);
void derivarPolinomio(tipo_polinomio polinomio, tipo_polinomio derivado, int grado);
void imprimirPolinomio(tipo_polinomio polinomio, int grado);

int main(int argc, char *argv[])
{
    tipo_polinomio polinomio = {0};
    tipo_polinomio derivado = {0};
    int grado;

    printf("Ingrese el grado del polinomio (maximo 99): ");
    scanf("%d", &grado);

    // Verificar que el grado no exceda el máximo permitido

    printf("Ingrese los coeficientes del polinomio:\n");
    leerPolinomio(polinomio, &grado);

    derivarPolinomio(polinomio, derivado, grado);

    printf("Polinomio original:\n");
    imprimirPolinomio(polinomio, grado);

    printf("Derivada del polinomio:\n");
    imprimirPolinomio(derivado, grado - 1);

    return 0;
}

void leerPolinomio(tipo_polinomio polinomio, int *grado) {

}

void derivarPolinomio(tipo_polinomio polinomio, tipo_polinomio derivado, int grado) {

}

void imprimirPolinomio(tipo_polinomio polinomio, int grado) {

    printf("\n");
}