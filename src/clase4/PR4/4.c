#include <stdio.h>
#include <math.h>

// Función para calcular f(x) = x^3 - 3x^2 + 5
double f(double x) {
    return x*x*x - 3*x*x + 5;
}

int main() {
    double a, b, base;
    double area = 0.0;
    
    // Leer los límites de integración y el tamaño del incremento
    printf("Introduce el límite inferior (a): ");
    scanf("%lf", &a);
    
    printf("Introduce el límite superior (b): ");
    scanf("%lf", &b);
    
    printf("Introduce el tamaño del incremento (base): ");
    scanf("%lf", &base);
    
    // Validar parámetros
    
    // Calcular el número de intervalos completos
    
    // Calcular el área usando el método de los trapecios
    
    // Añadir el área del último trapecio si queda un residuo
    
    // Mostrar resultado
    printf("El área bajo la curva f(x) = x^3 - 3x^2 + 5 en [%.2f, %.2f] es: %.6f\n", a, b, area);
    
    return 0;
}