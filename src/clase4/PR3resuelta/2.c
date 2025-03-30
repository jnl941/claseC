#include <stdio.h>

int main() {
    float volumen_inicial, temp_inicial, temp_final;
    float aumento_volumen;
    
    // Leer volumen inicial
    printf("Introduce el volumen inicial (m^3): ");
    scanf("%f", &volumen_inicial);
    
    // Validar que el volumen sea positivo
    if (volumen_inicial <= 0) {
        printf("Error: El volumen debe ser positivo\n");
        return 1;
    }
    
    // Leer temperatura inicial
    printf("Introduce la temperatura inicial (K): ");
    scanf("%f", &temp_inicial);
    
    // Validar temperatura inicial (entre 0 y 6000K)
    if (temp_inicial < 0 || temp_inicial > 6000) {
        printf("Error: La temperatura inicial debe estar entre 0 y 6000K\n");
        return 1;
    }
    
    // Leer temperatura final
    printf("Introduce la temperatura final (K): ");
    scanf("%f", &temp_final);
    
    // Validar temperatura final (entre 0 y 6000K)
    if (temp_final < 0 || temp_final > 6000) {
        printf("Error: La temperatura final debe estar entre 0 y 6000K\n");
        return 1;
    }
    
    // Intercambiar temperaturas si la inicial es mayor que la final
    if (temp_inicial > temp_final) {
        float temp = temp_inicial;
        temp_inicial = temp_final;
        temp_final = temp;
    }
    
    // Mostrar encabezado de la tabla
    printf("\nTabla de expansión de volumen para un gas ideal:\n");
    printf("Temperatura (K) | Aumento de volumen (m^3)\n");
    printf("---------------|------------------------\n");
    
    // Generar la tabla
    for (float temp = temp_inicial; temp <= temp_final; temp += 5) {
        // Calcular el aumento de volumen usando la fórmula
        aumento_volumen = volumen_inicial * ((temp / temp_inicial) - 1);
        
        // Imprimir fila de la tabla
        printf("%.2f         | %.2f\n", temp, aumento_volumen);
        
    }
    
    return 0;
}