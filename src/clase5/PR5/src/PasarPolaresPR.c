#include "../include/TEST.h"
#include <stdio.h>
#include <math.h>

extern void PROBAR();

/**
 * Convierte coordenadas cartesianas (x,y) a coordenadas polares (r,θ)
 * Los resultados se devuelven a través de los parámetros de salida r y theta
 * NO HAY QUE HACER RETURN, RECORDAD EL USO DE PUNTEROS
 * 
 */

void polares(float x, float y, float *r, float *theta) {
    // Calcula el radio (distancia desde el origen)
    *r = sqrt(x * x + y * y);
    
    // Calcula el ángulo en grados
        // Caso especial para el origen (0,0) (debería ser 0)

        // Convierte de radianes a grados y asegura que el ángulo sea positivo
        // Se usa atan2 para manejar correctamente los cuadrantes
            // INFO -> Cuadrante: 1 (0 a 90), 2 (90 a 180), 3 (180 a 270), 4 (270 a 360)
        // atan2(y, x) devuelve el ángulo en radianes
    printf("Coordenadas polares calculadas: r = %.2f, theta = %.2f grados\n", *r, *theta);
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