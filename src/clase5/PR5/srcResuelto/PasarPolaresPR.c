#include "../include/TEST.h"
#include <stdio.h>
#include <math.h>

extern void PROBAR();

void polares(float x, float y, float *r, float *theta) {
    *r = sqrt(x * x + y * y);
    if (x == 0 && y == 0) {
        *theta = 0; // Indeterminate angle for the origin
    } else {
        *theta = atan2(y, x) * (180.0 / M_PI); // Convert radians to degrees
        if (*theta < 0) {
            *theta += 360; // Ensure theta is in the range [0, 360)
        }
    }
    printf("Coordenadas polares calculadas: r = %.2f, theta = %.2f grados\n", *r, *theta);
}

int main(int argc, char *argv[]) {
    INICIO_TEST();
    
    if (argc > 1) {
        PROBAR();
        FIN_TEST();
        return 0;
    }

    float x, y, r, theta;

    printf("Introduzca las coordenadas cartesianas (x y): ");
    scanf("%f %f", &x, &y);

    polares(x, y, &r, &theta);

    printf("Coordenadas polares: r = %.2f, theta = %.2f grados\n", r, theta);

    FIN_TEST();
    return 0;
}