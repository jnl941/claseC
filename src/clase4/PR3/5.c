#include <stdio.h>
#include <math.h>

int main() {
    float temperatura;
    float suma = 0, suma_cuadrados = 0;
    int n = 0;  // Contador de datos válidos
    float media, desviacion;
    
    printf("Introduce temperaturas entre -50 y 50 grados (-99 para terminar):\n");
    
    while (1) {
        scanf("%f", &temperatura);
        
        // Comprobar si es el valor de terminación -99
        
        // Validar que la temperatura esté en el rango correcto
        
        // Acumular datos para cálculos
    }
    
    // Comprobar si se ingresaron datos válidos
    
    // Calcular la media

    // Calcular la desviación estándar

    // Mostrar resultados
    printf("Nº de datos válidos: %d\n", n);
    printf("Temperatura media: %.2f\n", media);
    printf("Desviación estándar: %.2f\n", desviacion);
    
    return 0;
}