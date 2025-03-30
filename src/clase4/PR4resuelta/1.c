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