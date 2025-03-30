# Práctica 4: Instrucción de control iteración II (Soluciones)

## Ejercicios a completar de forma PRESENCIAL

### **1.** Triángulos de asteriscos - (PatronAstPR.c) EJERCICIO MÍNIMO REQUERIDO

#### Solución:

```c
#include <stdio.h>

int main() {
    int max;
    
    // Leer el número máximo de asteriscos
    printf("Introduce el número máximo de asteriscos: ");
    scanf("%d", &max);
    
    // Validar que el número sea positivo
    if (max <= 0) {
        printf("Error: El número debe ser positivo\n");
        return 1;
    }
    
    // Imprimir patrón A
    printf("Patrón A:\n");
    for (int i = 1; i <= max; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%s", "*");
            PRINT_TEST("*");
        }
        printf("\n");
    }
    
    // Imprimir patrón B
    printf("\nPatrón B:\n");
    for (int i = 1; i <= max; i++) {
        for (int j = 1; j <= max - i + 1; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    
    return 0;
}
```

### **2.** Rectángulo de asteriscos con grosor (RecGrosorPR.c)

#### Solución:

```c
#include <stdio.h>

int main() {
    int alto, ancho, grosor;
    
    // Leer dimensiones y grosor
    printf("Introduce el alto (4-14): ");
    scanf("%d", &alto);
    
    printf("Introduce el ancho (4-14): ");
    scanf("%d", &ancho);
    
    printf("Introduce el grosor del borde: ");
    scanf("%d", &grosor);
    
    // Validar dimensiones
    if (alto < 4 || alto > 14 || ancho < 4 || ancho > 14) {
        printf("Error: El alto y ancho deben estar entre 4 y 14\n");
        return 1;
    }
    
    // Validar grosor
    int min_dimension = (alto < ancho) ? alto : ancho;
    if (grosor < 1 || grosor > min_dimension / 2) {
        printf("Error: Grosor inválido para estas dimensiones\n");
        return 1;
    }
    
    // Dibujar el rectángulo
    for (int i = 0; i < alto; i++) {
        for (int j = 0; j < ancho; j++) {
            // Comprobar si estamos en el borde con el grosor especificado
            if (i < grosor || i >= alto - grosor || j < grosor || j >= ancho - grosor) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
```

### **3.** Centroide de un Polígono (CentroidePoligonoPR.c)

#### Solución:

```c
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
```

## Ejercicios a completar de forma NO PRESENCIAL

### **Ejercicio 4.** Área bajo la curva (IntegralDefinidaPR.c)

#### Solución:

```c
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
```