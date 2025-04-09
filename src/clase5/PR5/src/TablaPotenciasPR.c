#include "../include/TEST.h"
#include <stdio.h>

extern void PROBAR();

/**
 * Calcula base^exponente sin usar math.h
 * Caso especial: Devuelve 0 para 0^0 (indeterminado)
 */
float potencia(float base, int exponente) {
    // Maneja casos especiales: Indeterminación y exponente negativo
    printf("Calculando %.2f ^ %d\n", base, exponente);
    
    // Calcula exponente positivo
}

/**
 * Genera una tabla de potencias para la base n desde a hasta b
 */
void TablaPotencias(int n, int a, int b) {
    // Asegura que a <= b
    
    // Imprime tabla de potencias
}

int main(int argc, char *argv[]) {
    INICIO_TEST();
    
    if (argc > 1) {
        PROBAR();
        FIN_TEST();
        return 0;
    }
    
    // Ejecución normal del programa...
    
    FIN_TEST();
    return 0;
}