#include "../include/TEST.h"
#include <stdio.h>

extern void PROBAR();

/**
 * Determina si un año es bisiesto
 * Devuelve 1 si es bisiesto, 0 en caso contrario
 * Reglas:
 * - Divisible por 4 (potencialmente bisiesto)
 *   - Si es divisible por 100 (año secular)
 *     - Si es divisible por 400 (bisiesto)
 *     - En caso contrario (no es bisiesto)
 *   - En caso contrario (es bisiesto)
 * - En caso contrario (no es bisiesto)
 */
int esBisiesto(int anio) {
    printf("Comprobando si %d es bisiesto...\n", anio);
    // Comprobación de bisiesto
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