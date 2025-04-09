#include "../include/TEST.h"
#include <stdio.h>

extern void PROBAR();

// Renamed to match the test function name
int esBisiesto(int anio) {
    printf("Comprobando si %d es bisiesto...\n", anio);
    if (anio % 4 == 0) {
        if (anio % 100 == 0) {
            if (anio % 400 == 0) {
                return 1; // Es bisiesto
            } else {
                return 0; // No es bisiesto
            }
        } else {
            return 1; // Es bisiesto
        }
    } else {
        return 0; // No es bisiesto
    }
}

int main(int argc, char *argv[]) {
    INICIO_TEST();
    
    if (argc > 1) {
        PROBAR();
        FIN_TEST();
        return 0;
    }

    int anio;
    printf("Introduce un año: ");
    scanf("%d", &anio);

    if (esBisiesto(anio)) {
        printf("%d es un año bisiesto.\n", anio);
    } else {
        printf("%d no es un año bisiesto.\n", anio);
    }

    FIN_TEST();
    return 0;
}