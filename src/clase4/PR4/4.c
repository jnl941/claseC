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
    if (b <= a) {
        printf("Error: El límite superior debe ser mayor que el inferior\n");
        return 1;
    }
    
    if (base <= 0) {
        printf("Error: El tamaño del incremento debe ser positivo\n");
        return 1;
    }
    
    // Calcular el número de intervalos completos
    int n = (int)((b - a) / base);
    
    // Calcular el área usando el método de los trapecios
    for (int i = 0; i < n; i++) {
        double x_izq = a + i * base;
        double x_der = a + (i + 1) * base;
        
        double y_izq = f(x_izq);
        double y_der = f(x_der);
        
        area += base * (y_izq + y_der) / 2;
    }
    
    // Añadir el área del último trapecio si queda un residuo
    double residuo = b - (a + n * base);
    if (residuo > 0) {
        double x_izq = a + n * base;
        double y_izq = f(x_izq);
        double y_der = f(b);
        
        area += residuo * (y_izq + y_der) / 2;
    }
    
    // Mostrar resultado
    printf("El área bajo la curva f(x) = x^3 - 3x^2 + 5 en [%.2f, %.2f] es: %.6f\n", a, b, area);
    
    return 0;
}