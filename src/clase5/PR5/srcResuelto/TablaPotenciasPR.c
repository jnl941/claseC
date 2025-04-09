#include "../include/TEST.h"
#include <stdio.h>

extern void PROBAR();

float potencia(float base, int exponente) {
    printf("Calculando %.2f ^ %d\n", base, exponente);
    if (base == 0 && exponente == 0) {
        return 0; // Indeterminación
    }
    if (exponente < 0) {
        return 1.0 / potencia(base, -exponente);
    }
    float resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

void TablaPotencias(int n, int a, int b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    for (int i = a; i <= b; i++) {
        float resultado = potencia(n, i);
        printf("%d ^ %d = %.3f\n", n, i, resultado);
    }
}

int main(int argc, char *argv[]) {
    INICIO_TEST();
    
    if (argc > 1) {
        PROBAR();
        FIN_TEST();
        return 0;
    }

    int n, a, b;

    do {
        printf("Introduzca la base (entre -5 y 5, excluyendo 0): ");
        scanf("%d", &n);
    } while (n < -5 || n > 5 || n == 0);

    do {
        printf("Introduzca el límite inferior (entre -10 y 10): ");
        scanf("%d", &a);
        printf("Introduzca el límite superior (entre -10 y 10): ");
        scanf("%d", &b);
    } while (a < -10 || a > 10 || b < -10 || b > 10);

    TablaPotencias(n, a, b);

    FIN_TEST();
    return 0;
}