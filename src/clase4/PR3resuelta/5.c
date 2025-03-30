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
        
        // Comprobar si es el valor de terminación
        if (temperatura == -99) {
            break;
        }
        
        // Validar que la temperatura esté en el rango correcto
        if (temperatura < -50 || temperatura > 50) {
            printf("Temperatura fuera de rango. Debe estar entre -50 y 50 grados.\n");
            continue;  // Ignorar este valor y pedir el siguiente
        }
        
        // Acumular datos para cálculos
        suma += temperatura;
        suma_cuadrados += temperatura * temperatura;
        n++;
    }
    
    // Comprobar si se ingresaron datos válidos
    if (n == 0) {
        printf("NO DATOS\n");
        PRINT_TEST("NO DATOS");
        return 0;
    }
    
    // Calcular la media
    media = suma / n;
    
    // Calcular la desviación estándar
    desviacion = sqrt((suma_cuadrados - n * media * media) / n);
    
    // Mostrar resultados
    printf("Nº de datos válidos: %d\n", n);
    printf("Temperatura media: %.2f\n", media);
    printf("Desviación estándar: %.2f\n", desviacion);
    
    // Para el test
    PRINT_TEST("%10.2f %10.2f %10d", media, desviacion, n);
    
    return 0;
}