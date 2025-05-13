#include <stdio.h>

#define MAX 100

typedef int tipo_vector[MAX];

void leerVector(tipo_vector v, int *tam);
void contarDuplicados(tipo_vector raw, tipo_vector conteo, int tam);
void mostrarResultados(tipo_vector conteo, int tam);

int main() {
    tipo_vector raw = {0};
    tipo_vector conteo = {0};
    int tam = 0;

    leerVector(raw, &tam);
    contarDuplicados(raw, conteo, tam);
    mostrarResultados(conteo, tam);

    return 0;
}

void leerVector(tipo_vector v, int *tam) {
    int num;
    *tam = 0;

    printf("Ingrese números entre 1 y 100 (0 para terminar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        if (num > 0 && num <= 100) {
            v[(*tam)++] = num;
        }
    }
}

void contarDuplicados(tipo_vector raw, tipo_vector conteo, int tam) {
    for (int i = 0; i < tam; i++) {
        conteo[raw[i] - 1]++;
    }
}

void mostrarResultados(tipo_vector conteo, int tam) {
    printf("Números que se repiten y sus conteos:\n");
    for (int i = 0; i < 100; i++) {
        if (conteo[i] > 1) {
            printf("Número %d se repite %d veces\n", i + 1, conteo[i]);
        }
    }
}