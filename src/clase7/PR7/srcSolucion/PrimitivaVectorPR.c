#include <stdio.h>
#include "../.vscode/test/TEST.h"

#define MAX 6 
typedef int tipo_vector[MAX];
extern void PROBAR();

int existeEnArray(int num, tipo_vector array);
void ordenarArray(tipo_vector array);

int main(int argc, char *argv[])
{
    INICIO_TEST();
    if (argc > 1) PROBAR(); 

    tipo_vector numerosPrimitiva = {0, 0, 0, 0, 0, 0};
    int count = 0;
    int num;

    printf("Ingresa 6 números para la primitiva (entre 1 y 49, sin repetir):\n");
    
    while (count < MAX) {
        printf("Número %d: ", count + 1);
        scanf("%d", &num);

        if (num < 1 || num > 49) {
            printf("Número fuera de rango. Debe estar entre 1 y 49.\n");
        } else if (existeEnArray(num, numerosPrimitiva)) {
            printf("Número ya ingresado. Por favor, ingresa un número diferente.\n");
        } else {
            numerosPrimitiva[count] = num;
            count++;
        }
    }

    ordenarArray(numerosPrimitiva);

    // Mostrar el array ordenado
    printf("\nNúmeros ordenados de la primitiva:\n");
    for (int i = 0; i < MAX; i++) {
        PRINT_TEST(numerosPrimitiva[i]);
    }
    printf("\n");

    FIN_TEST();
    return 0;
}

// Función para verificar si un número ya existe en el array
int existeEnArray(int num, tipo_vector array) {
    for (int i = 0; i < MAX; i++) {
        if (array[i] == num) {
            return 1; // El número ya existe
        }
    }
    return 0; // El número no existe
}

void ordenarArray(tipo_vector array) {
    int temp;
    for (int i = 0; i < MAX - 1; ++i) {
        for (int j = i + 1; j < MAX; ++j) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}