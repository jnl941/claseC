#include <stdio.h>

int main() {
    int n;
    double x[100], y[100]; // Asumo un máximo de 100 vértices
    double area = 0.0, x_cent = 0.0, y_cent = 0.0;
    double termino;
    
    // Leer el número de lados del polígono
    printf("Introduce el número de lados del polígono: ");
    scanf("%d", &n);
    
    // Validar que n >= 3
    if (n < 3) {
        printf("Error: El polígono debe tener al menos 3 lados\n");
        return 1;
    }
    
    // Leer las coordenadas de los vértices
    for (int i = 0; i < n; i++) {
        printf("Introduce la coordenada x del vértice %d: ", i+1);
        scanf("%lf", &x[i]);
        
        printf("Introduce la coordenada y del vértice %d: ", i+1);
        scanf("%lf", &y[i]);
    }
    
    // Cerrar el polígono (el último punto se conecta con el primero)
    x[n] = x[0];
    y[n] = y[0];
    
    // Calcular el área del polígono
    for (int i = 0; i < n; i++) {
        termino = x[i] * y[i+1] - x[i+1] * y[i];
        area += termino;
    }
    area = 0.5 * fabs(area); // Asegurar que el área sea positiva
    
    // Calcular las coordenadas del centroide
    for (int i = 0; i < n; i++) {
        termino = x[i] * y[i+1] - x[i+1] * y[i];
        x_cent += (x[i+1] + x[i]) * termino;
        y_cent += (y[i+1] + y[i]) * termino;
    }
    
    x_cent = x_cent / (6 * area);
    y_cent = y_cent / (6 * area);
    
    // Mostrar resultados
    printf("Centroide: (%.3f, %.3f)\n", x_cent, y_cent);
    
    return 0;
}