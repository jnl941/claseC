#include <stdio.h>
#include "tiempo.h"

void leerRegistro(Tiempo *t) {
    do {
        printf("Ingrese la hora (0-23): ");
        scanf("%d", &t->h);
    } while (t->h < 0 || t->h >= 24);

    do {
        printf("Ingrese los minutos (0-59): ");
        scanf("%d", &t->mn);
    } while (t->mn < 0 || t->mn >= 60);

    do {
        printf("Ingrese los segundos (0-59): ");
        scanf("%d", &t->sg);
    } while (t->sg < 0 || t->sg >= 60);

    do {
        printf("Ingrese las centésimas de segundo (0-99): ");
        scanf("%d", &t->ct);
    } while (t->ct < 0 || t->ct >= 100);
}

void calcularTiempoTranscurrido(Tiempo inicio, Tiempo fin, Tiempo *resultado) {
    // Convertir ambos tiempos a centésimas de segundo
    long inicioTotal = inicio.h * 360000 + inicio.mn * 6000 + inicio.sg * 100 + inicio.ct;
    long finTotal = fin.h * 360000 + fin.mn * 6000 + fin.sg * 100 + fin.ct;

    // Si el tiempo final es menor que el tiempo inicial, se considera el día siguiente
    if (finTotal < inicioTotal) {
        finTotal += 8640000; // Añadir 24 horas en centésimas de segundo
    }

    long transcurrido = finTotal - inicioTotal;

    // Convertir el tiempo transcurrido de nuevo a horas, minutos, segundos y centésimas
    resultado->h = transcurrido / 360000;
    transcurrido %= 360000;
    resultado->mn = transcurrido / 6000;
    transcurrido %= 6000;
    resultado->sg = transcurrido / 100;
    resultado->ct = transcurrido % 100;
}

int main() {
    Tiempo inicio, fin, resultado;

    printf("Registro de tiempo inicial:\n");
    leerRegistro(&inicio);

    printf("Registro de tiempo final:\n");
    leerRegistro(&fin);

    calcularTiempoTranscurrido(inicio, fin, &resultado);

    printf("Tiempo transcurrido: %02d:%02d:%02d.%02d\n", resultado.h, resultado.mn, resultado.sg, resultado.ct);

    return 0;
}