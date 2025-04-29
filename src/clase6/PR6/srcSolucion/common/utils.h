#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function prototypes
bool validar_fecha(int dia, int mes, int anno);
bool es_bisiesto(int anno);
int calcular_mcd(int a, int b);
int maximo(int a, int b);
void pausar();

#endif // UTILS_H