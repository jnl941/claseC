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
    if (n <= 0) {
        printf("Error: El número de puntos debe ser positivo\n");
        return 1;
    }
    
    // Leer las coordenadas de cada punto y calcular las sumas necesarias
    for (int i = 0; i < n; i++) {
        printf("Introduce la coordenada x del punto %d: ", i+1);
        scanf("%lf", &x);
        
        printf("Introduce la coordenada y del punto %d: ", i+1);
        scanf("%lf", &y);
        
        sumX += x;
        sumY += y;
        sumXY += x * y;
        sumX2 += x * x;
        sumY2 += y * y;
    }
    
    // Calcular el coeficiente de correlación
    double numerador = n * sumXY - sumX * sumY;
    double denominador = sqrt((n * sumX2 - sumX * sumX) * (n * sumY2 - sumY * sumY));
    
    // Evitar división por cero
    if (denominador == 0) {
        r = 0;  // No hay correlación si el denominador es cero
    } else {
        r = numerador / denominador;
    }
    
    printf("El coeficiente de correlación es: %.5lf\n", r);
    
    return 0;
}