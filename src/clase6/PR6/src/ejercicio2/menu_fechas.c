#include <stdio.h>
#include "../common/utils.h"

/* Prototipos de funciones */
void cambiar_fecha(int *dia, int *mes, int *anno);
void sumar_n_dias(int *dia, int *mes, int *anno);
void mostrar_fecha(int dia, int mes, int anno);

int main() {
    // Inicializar la fecha a 1-1-2023
    int dia = 1, mes = 1, anno = 2023;
    char opcion;

    do {
        // TODO: Mostrar el menú con las opciones
        printf("\nMENU DE OPCIONES\n");
        printf("================\n\n");
        printf("1. Cambiar fecha\n");
        printf("2. Sumar n días a la fecha\n");
        printf("3. Mostrar fecha\n");
        printf("4. Finalizar ejecución\n\n");
        printf("\tIntroduzca opción: ");
        scanf(" %c", &opcion);

        // TODO: Ejecutar la acción correspondiente a la opción elegida
        switch (opcion) {
            case '1':
                cambiar_fecha(&dia, &mes, &anno);
                break;
            case '2':
                sumar_n_dias(&dia, &mes, &anno);
                break;
            case '3':
                mostrar_fecha(dia, mes, anno);
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

/* TODO: Implementar la función cambiar_fecha */
void cambiar_fecha(int *dia, int *mes, int *anno) {
    // 1. Pedir al usuario que introduzca una nueva fecha (día, mes, año)
    // 2. Validar la fecha usando la función validar_fecha
    // 3. Si la fecha es válida, actualizar los valores usando los punteros
    // 4. Si la fecha no es válida, mostrar un mensaje de error
}

/* TODO: Implementar la función sumar_n_dias */
void sumar_n_dias(int *dia, int *mes, int *anno) {
    // 1. Pedir al usuario la cantidad de días a sumar
    // 2. Llamar a la función sumar_dias para actualizar la fecha
    int dias;
    printf("Ingrese la cantidad de días a sumar: ");
    scanf("%d", &dias);
    
    // Llamar a la función sumar_dias de utils.c
    sumar_dias(dia, mes, anno, dias);
}

/* TODO: Implementar la función mostrar_fecha */
void mostrar_fecha(int dia, int mes, int anno) {
    // Mostrar la fecha en formato DD-MM-AAAA
    printf("Fecha actual: %02d-%02d-%04d\n", dia, mes, anno);
}