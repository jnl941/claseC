#include <stdio.h>

int main() {
    float volumen_inicial, temp_inicial, temp_final;
    float aumento_volumen;
    
    // Leer volumen inicial
    printf("Introduce el volumen inicial (m^3): ");
    scanf("%f", &volumen_inicial);
    
    // Validar que el volumen sea positivo
    
    // Leer temperatura inicial
    printf("Introduce la temperatura inicial (K): ");
    scanf("%f", &temp_inicial);
    
    // Validar temperatura inicial (entre 0 y 6000K)
    
    // Leer temperatura final
    printf("Introduce la temperatura final (K): ");
    scanf("%f", &temp_final);
    
    // Validar temperatura final (entre 0 y 6000K)
    
    // Intercambiar temperaturas si la inicial es mayor que la final

    // Mostrar encabezado de la tabla
    printf("\nTabla de expansión de volumen para un gas ideal:\n");
    printf("Temperatura (K) | Aumento de volumen (m^3)\n");
    printf("---------------|------------------------\n");
    
    // Generar la tabla
    for (float temp = temp_inicial; temp <= temp_final; temp += 5) {
        // Calcular el aumento de volumen usando la fórmula
        
        // Imprimir fila de la tabla
        printf("%.2f         | %.2f\n", temp, aumento_volumen);
        
    }
    
    return 0;
}