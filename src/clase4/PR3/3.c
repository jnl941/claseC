#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, y;
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0, sumY2 = 0;
    double r;
    
    // Leer el número de puntos
    printf("Introduce el número de puntos: ");
    scanf("%d", &n);
    
    // Validar que el número de puntos sea positivo
    
    // Leer las coordenadas de cada punto y calcular las sumas necesarias
    for (int i = 0; i < n; i++) {
        printf("Introduce la coordenada x del punto %d: ", i+1);
        scanf("%lf", &x);
        
        printf("Introduce la coordenada y del punto %d: ", i+1);
        scanf("%lf", &y);
        
    }
    
    // Calcular el coeficiente de correlación

    // Evitar división por cero
    
    printf("El coeficiente de correlación es: %.5lf\n", r);
    
    return 0;
}