#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Función de pausa para todos los ejercicios
void pausa(void);

// Funciones para el ejercicio 1 (MenuDosNumerosPR.c)
int calcular_mcd(int a, int b);
int obtener_maximo(int a, int b);

// Funciones para el ejercicio 2 (MenuFechasPR.c)
bool es_bisiesto(int anno);
bool validar_fecha(int dia, int mes, int anno);
void sumar_dias(int *dia, int *mes, int *anno, int dias);

#endif // UTILS_H