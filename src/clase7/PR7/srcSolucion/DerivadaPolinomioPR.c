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

    if (grado < 0 || grado > 99) {
        printf("Grado invalido. Debe estar entre 0 y 99.\n");
        return 1;
    }

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
    for (int i = 0; i <= *grado; i++) {
        printf("Coeficiente de x^%d: ", i);
        scanf("%lf", &polinomio[i]);
    }
}

void derivarPolinomio(tipo_polinomio polinomio, tipo_polinomio derivado, int grado) {
    for (int i = 1; i <= grado; i++) {
        derivado[i - 1] = polinomio[i] * i;
    }
}

void imprimirPolinomio(tipo_polinomio polinomio, int grado) {
    for (int i = 0; i <= grado; i++) {
        if (i == 0) {
            printf("%lf", polinomio[i]);
        } else {
            printf(" + %lfx^%d", polinomio[i], i);
        }
    }
    printf("\n");
}