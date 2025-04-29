#include "utils.h"

// Implementación de la función de pausa
void pausa(void) {
    printf("\nPresiona Enter para continuar...");
    while (getchar() != '\n'); // Limpiar buffer
    getchar(); // Esperar Enter
}

// TODO: Implementar la función para calcular el MCD usando el algoritmo de Euclides
int calcular_mcd(int a, int b) {
    // Implementar algoritmo de Euclides:
    // Mientras b != 0, calcular a % b, asignar b a 'a' y el resto a 'b'
    // Al final, 'a' contendrá el MCD
    return 0; // Reemplazar con la implementación correcta
}

// TODO: Implementar la función para obtener el máximo de dos números
int obtener_maximo(int a, int b) {
    // Devolver el mayor de los dos números
    return 0; // Reemplazar con la implementación correcta
}

// TODO: Implementar la función para verificar si un año es bisiesto
bool es_bisiesto(int anno) {
    // Un año es bisiesto si:
    // - Es divisible por 4 y no por 100, o
    // - Es divisible por 400
    return false; // Reemplazar con la implementación correcta
}

// TODO: Implementar la función para validar una fecha
bool validar_fecha(int dia, int mes, int anno) {
    // Verificar:
    // 1. El año debe ser positivo
    // 2. El mes debe estar entre 1 y 12
    // 3. El día debe ser válido según el mes
    //    (considerar años bisiestos para febrero)
    return false; // Reemplazar con la implementación correcta
}

// TODO: Implementar la función para sumar días a una fecha
void sumar_dias(int *dia, int *mes, int *anno, int dias) {
    // Incrementar la fecha día a día, ajustando el mes y año cuando sea necesario
    // Considerar la cantidad de días de cada mes (y años bisiestos para febrero)
}