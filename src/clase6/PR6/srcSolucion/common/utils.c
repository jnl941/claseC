#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Function prototypes */
bool validar_fecha(int dia, int mes, int anno);
bool es_bisiesto(int anno);
void sumar_dias(int *dia, int *mes, int *anno, int dias);
int calcular_mcd(int a, int b);
int maximo(int a, int b);

int dias_por_mes[12];

bool validar_fecha(int dia, int mes, int anno) {
    if (anno < 1 || mes < 1 || mes > 12 || dia < 1) {
        return false;
    }
    int dias_por_mes[] = {31, (es_bisiesto(anno) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return dia <= dias_por_mes[mes - 1];
}

bool es_bisiesto(int anno) {
    return (anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0);
}

void sumar_dias(int *dia, int *mes, int *anno, int dias) {
    *dia += dias;
    while (!validar_fecha(*dia, *mes, *anno)) {
        *dia -= dias_por_mes[*mes - 1];
        *mes += 1;
        if (*mes > 12) {
            *mes = 1;
            *anno += 1;
        }
    }
}

int calcular_mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int maximo(int a, int b) {
    return (a > b) ? a : b;
}