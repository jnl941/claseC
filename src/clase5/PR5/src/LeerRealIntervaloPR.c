#include "../include/TEST.h"
#include <stdio.h>

extern void PROBAR(); // Función externa de prueba

/**
 * Función 1: Lee un número real dentro de un intervalo (versión original)
 * Devuelve directamente el valor leído
 */
float leerRealIntervalo(float a, float b) {
    printf("leerRealIntervalo: a=%.2f, b=%.2f\n", a, b);
    // Asegurarse de que a es menor que b
    
    // Leer hasta que se introduzca un valor válido

    // Devolver el valor leído
}

/**
 * Función 2: Alternativa usando parámetro de salida
 * Devuelve el valor a través del puntero x
 */
void leerRealIntervalo1(float a, float b, float *x) {
    printf("leerRealIntervalo1: a=%.2f, b=%.2f\n", a, b);
    // Maneja el caso especial cuando a es igual a b
        // En tal caso, el valor leído debe ser a (o b)

    
    // Resto de la implementación...
}

/**
 * Función 3: Alternativa que envuelve la versión 1
 * Usa la versión 1 y devuelve el valor directamente
 */
float leerRealIntervalo2(float a, float b) {
    printf("leerRealIntervalo2: a=%.2f, b=%.2f\n", a, b);

    // Llama a la función leerRealIntervalo1 y pasa la dirección del valor
    
    // Devolver el valor leído
}

/**
 * Función 4: Versión con intentos limitados
 * Devuelve estado de éxito/fracaso
 */
int leerRealIntervalo3(float a, float b, float *x) {
    // Permite solo 3 intentos para leer un número válido
    
    // Control de intentos y lógica de lectura, devolviendo 1 en caso de éxito
    // o 0 en caso de error
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