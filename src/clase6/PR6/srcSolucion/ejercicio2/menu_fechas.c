#include <stdio.h>
#include "utils.h"

void cambiar_fecha(int *dia, int *mes, int *anno);
void sumar_n_dias(int *dia, int *mes, int *anno, int dias);
void mostrar_fecha(int dia, int mes, int anno);

int main() {
    int dia = 1, mes = 1, anno = 2023;
    char opcion;

    do {
        printf("      MENU DE OPCIONES\n");
        printf("      ================\n\n");
        printf("\t1.- Cambiar fecha\n");
        printf("\t2.- Sumar n días a la fecha\n");
        printf("\t3.- Mostrar fecha\n");
        printf("\t4.- Finalizar ejecución\n\n");
        printf("\t\tIntroduzca opción: ");
        scanf(" %c", &opcion);

        switch (opcion) {
            case '1':
                cambiar_fecha(&dia, &mes, &anno);
                break;
            case '2': {
                int dias;
                printf("Ingrese el número de días a sumar: ");
                scanf("%d", &dias);
                sumar_n_dias(&dia, &mes, &anno, dias);
                break;
            }
            case '3':
                mostrar_fecha(dia, mes, anno);
                break;
            case '4':
                printf("\n\nFIN DE EJECUCIÓN\n");
                break;
            default:
                printf("\aOpción no válida. Intente de nuevo.\n");
                break;
        }
    } while (opcion != '4');

    return 0;
}

void cambiar_fecha(int *dia, int *mes, int *anno) {
    printf("Ingrese el nuevo día: ");
    scanf("%d", dia);
    printf("Ingrese el nuevo mes: ");
    scanf("%d", mes);
    printf("Ingrese el nuevo año: ");
    scanf("%d", anno);

    if (!validar_fecha(*dia, *mes, *anno)) {
        printf("Fecha no válida. Intente de nuevo.\n");
        cambiar_fecha(dia, mes, anno);
    }
}

void sumar_n_dias(int *dia, int *mes, int *anno, int dias) {
    for (int i = 0; i < dias; i++) {
        (*dia)++;
        if (!validar_fecha(*dia, *mes, *anno)) {
            *dia = 1;
            (*mes)++;
            if (*mes > 12) {
                *mes = 1;
                (*anno)++;
            }
        }
    }
}

void mostrar_fecha(int dia, int mes, int anno) {
    printf("Fecha actual: %02d-%02d-%04d\n", dia, mes, anno);
}