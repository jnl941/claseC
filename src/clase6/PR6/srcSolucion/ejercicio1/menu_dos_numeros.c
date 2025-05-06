#include <stdio.h>
#include "utils.h"

void calcular_mcd_menu(int a, int b);
void mostrar_maximo_menu(int a, int b);
void cambiar_numeros_menu(int *a, int *b);

int main() {
    int num1, num2;
    char opcion;

    printf("Ingrese el primer numero positivo: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero positivo: ");
    scanf("%d", &num2);

    do {
        printf("\nMENU DE OPCIONES\n");
        printf("1. Calcular MCD\n");
        printf("2. Mostrar maximo\n");
        printf("3. Cambiar numeros\n");
        printf("4. Finalizar ejecucion\n");
        printf("Seleccione una opcion: ");
        scanf(" %c", &opcion);

        switch (opcion) {
            case '1':
                calcular_mcd_menu(num1, num2);
                break;
            case '2':
                mostrar_maximo_menu(num1, num2);
                break;
            case '3':
                cambiar_numeros_menu(&num1, &num2);
                break;
            case '4':
                printf("Finalizando ejecucion...\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
                break;
        }
    } while (opcion != '4');

    return 0;
}

void calcular_mcd_menu(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("El MCD es: %d\n", a);
}

void mostrar_maximo_menu(int a, int b) {
    if (a > b) {
        printf("El maximo es: %d\n", a);
    } else {
        printf("El maximo es: %d\n", b);
    }
}

void cambiar_numeros_menu(int *a, int *b) {
    printf("Ingrese el nuevo primer numero: ");
    scanf("%d", a);
    printf("Ingrese el nuevo segundo numero: ");
    scanf("%d", b);
}