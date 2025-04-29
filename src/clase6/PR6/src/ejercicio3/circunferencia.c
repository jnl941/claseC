#include <stdio.h>
#include <math.h>

/* Prototipos de funciones */
int son_colineales(double x1, double y1, double x2, double y2, double x3, double y3);
void calcular_centro_radio(double x1, double y1, double x2, double y2, double x3, double y3,
                          double *xc, double *yc, double *r);

int main() {
    double x1, y1, x2, y2, x3, y3;
    double xc, yc, r;
    
    // TODO: Leer las coordenadas de tres puntos
    printf("Ingrese las coordenadas del punto 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Ingrese las coordenadas del punto 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("Ingrese las coordenadas del punto 3 (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);
    
    // TODO: Verificar si los puntos son colineales
    if (son_colineales(x1, y1, x2, y2, x3, y3)) {
        printf("Los puntos son colineales. No definen una única circunferencia.\n");
        return 1;
    }
    
    // TODO: Calcular el centro y radio de la circunferencia
    calcular_centro_radio(x1, y1, x2, y2, x3, y3, &xc, &yc, &r);
    
    // Mostrar los resultados
    printf("Centro de la circunferencia: (%.2f, %.2f)\n", xc, yc);
    printf("Radio de la circunferencia: %.2f\n", r);
    
    return 0;
}

/* TODO: Implementar la función para verificar si tres puntos son colineales */
int son_colineales(double x1, double y1, double x2, double y2, double x3, double y3) {
    // Calcular el producto vectorial de los vectores V1 y V2
    // V1 = (x1-x2, y1-y2)
    // V2 = (x3-x2, y3-y2)
    // Si el producto vectorial es cero, los puntos son colineales
    
    // Reemplazar con la implementación correcta que devuelve 1 si son colineales, 0 si no
    return 0;
}

/* TODO: Implementar la función para calcular el centro y radio de la circunferencia */
void calcular_centro_radio(double x1, double y1, double x2, double y2, double x3, double y3,
                         double *xc, double *yc, double *r) {
    // Implementar las fórmulas del enunciado:
    // y_c = [(x1-x3)*(x1-x2)*(x2-x3) + (x1-x3)*(y1^2-y2^2) - (x1-x2)*(y1^2-y3^2)] / 
    //       [2*(x1-x3)*(y1-y2) - 2*(x1-x2)*(y1-y3)]
    
    // x_c = [(y1-y3)*(y1-y2)*(y2-y3) + (y1-y3)*(x1^2-x2^2) - (y1-y2)*(x1^2-x3^2)] / 
    //       [2*(y1-y3)*(x1-x2) - 2*(y1-y2)*(x1-x3)]
    
    // r^2 = (x1-x_c)^2 + (y1-y_c)^2
    
    // Calcular las diferencias necesarias
    
    // Calcular el denominador para x_c e y_c (verificar que no sea cero)
    
    // Calcular x_c e y_c
    
    // Calcular el radio
    
    // Asignar los valores calculados a través de los punteros
    *xc = 0.0; // Reemplazar con el valor calculado
    *yc = 0.0; // Reemplazar con el valor calculado
    *r = 0.0;  // Reemplazar con el valor calculado
}