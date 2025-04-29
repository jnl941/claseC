#include <stdio.h>
#include "../common/utils.h"

/* Prototipos de funciones */
void mostrar_menu();
void calcular_mcd(int a, int b);
void mostrar_maximo(int a, int b);
void cambiar_numeros(int *a, int *b);

int main() {
    int num1, num2;
    char opcion;
    
    // TODO: Leer dos números enteros positivos
    printf("Ingrese el primer número entero positivo: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número entero positivo: ");
    scanf("%d", &num2);
    
    do {
        // TODO: Mostrar el menú y leer la opción
        printf("\nMENU DE OPCIONES\n");
        printf("================\n\n");
        printf("1. Calcular y mostrar el MCD\n");
        printf("2. Calcular y mostrar el máximo\n");
        printf("3. Cambiar los números\n");
        printf("4. Finalizar ejecución\n\n");
        printf("\tIntroduzca opción: ");
        scanf(" %c", &opcion);
        
        // TODO: Ejecutar la acción correspondiente a la opción elegida
        switch (opcion) {
            case '1':
                calcular_mcd(num1, num2);
                break;
            case '2':
                mostrar_maximo(num1, num2);
                break;
            case '3':
                cambiar_numeros(&num1, &num2);
                break;
            case '4':
                printf("\nFin de ejecución\n");
                break;
            default:
                printf("\nOpción no válida. Intente de nuevo.\n");
                break;
        }
        
    } while (opcion != '4');
    
    return 0;
}

/* TODO: Implementar la función calcular_mcd */
void calcular_mcd(int a, int b) {
    // Usar la función calcular_mcd de utils.c o implementar aquí
    // el algoritmo de Euclides para calcular y mostrar el MCD
}

/* TODO: Implementar la función mostrar_maximo */
void mostrar_maximo(int a, int b) {
    // Usar la función obtener_maximo de utils.c o implementar aquí
    // la comparación para mostrar el máximo de los dos números
}

/* TODO: Implementar la función cambiar_numeros */
void cambiar_numeros(int *a, int *b) {
    // Pedir al usuario dos nuevos números y actualizar los
    // valores usando los punteros a y b
}