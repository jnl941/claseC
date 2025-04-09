#include "../include/TEST.h"
#include <stdio.h>

extern void PROBAR();

/**
 * Implementa la función de Ackermann - un ejemplo clásico de función recursiva
 * que crece muy rápidamente y demuestra comportamiento recursivo no primitivo
 * 
 * Definición:
 * A(m,n) = n+1                  si m=0
 * A(m,n) = A(m-1,1)             si m>0 y n=0
 * A(m,n) = A(m-1,A(m,n-1))      si m>0 y n>0
 */
int Ackermann(int m, int n) {
    printf("Ackermann(%d, %d)\n", m, n);
    // Implementación de la función de Ackermann
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