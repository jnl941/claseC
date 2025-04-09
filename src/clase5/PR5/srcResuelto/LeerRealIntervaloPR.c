#include "../include/TEST.h"
#include <stdio.h>

extern void PROBAR();

// Add the function required by the tests
float leerRealIntervalo(float a, float b) {
    printf("leerRealIntervalo: a=%.2f, b=%.2f\n", a, b);
    float x;
    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }
    do {
        printf("\nIntroduzca numero en [%.2f, %.2f]: ", a, b);
        scanf("%f", &x);
    } while (x < a || x > b);
    return x;
}

void leerRealIntervalo1(float a, float b, float *x) {
    printf("leerRealIntervalo1: a=%.2f, b=%.2f\n", a, b);
    if (a == b) {
        *x = a;
    } else {
        if (a > b) {
            float temp = a;
            a = b;
            b = temp;
        }
        do {
            printf("\nIntroduzca numero en [%.2f, %.2f]: ", a, b);
            scanf("%f", x);
        } while (*x < a || *x > b);
    }
}

float leerRealIntervalo2(float a, float b) {
    printf("leerRealIntervalo2: a=%.2f, b=%.2f\n", a, b);
    float x;
    leerRealIntervalo1(a, b, &x);
    return x;
}

int leerRealIntervalo3(float a, float b, float *x) {
    printf("leerRealIntervalo3: a=%.2f, b=%.2f\n", a, b);
    int intentos = 0;
    while (intentos < 3) {
        printf("\nIntroduzca numero en [%.2f, %.2f]: ", a, b);
        scanf("%f", x);
        if (*x >= a && *x <= b) {
            return 1; // éxito
        }
        intentos++;
    }
    return 0; // error
}

int main(int argc, char *argv[]) {
    INICIO_TEST();
    
    if (argc > 1) {
        PROBAR();
        FIN_TEST();
        return 0;
    }

    float a, b, x;
    
    printf("Introduzca el límite inferior: ");
    scanf("%f", &a);
    printf("Introduzca el límite superior: ");
    scanf("%f", &b);
    
    x = leerRealIntervalo(a, b);
    printf("Valor introducido: %.2f\n", x);
    
    FIN_TEST();
    return 0;
}