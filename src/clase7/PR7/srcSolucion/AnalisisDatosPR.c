#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10  // se podrá ajustar después cuando sepamos el tamaño de la muestra

typedef double tipo_vector[N];

void leerRaw(double raw[]);
void analizarDatos(double raw[], double procesados[], double limiteInferior, double limiteSuperior, int *tamProcesados);

int main(int argc, char *argv[])
{
    tipo_vector raw = {0}; // Vector para almacenar los datos crudos
    tipo_vector procesados = {0}; // Vector para almacenar los datos procesados (válidos)
    double limiteInferior, limiteSuperior;
    int tamProcesados = 0;

    // Generar el vector aleatorio sobre raw
    srand(time(NULL));
    for (int i = 0; i < N; ++i) {
        raw[i] = (double)(rand() % 201 - 100); // Genera números entre -100 y 100
    }

    printf("Ingrese el límite inferior: ");
    scanf("%lf", &limiteInferior);
    printf("Ingrese el límite superior: ");
    scanf("%lf", &limiteSuperior);

    analizarDatos(raw, procesados, limiteInferior, limiteSuperior, &tamProcesados);

    printf("Datos válidos:\n");
    for (int i = 0; i < tamProcesados; ++i) {
        printf("%lf\n", procesados[i]);
    }

    return 0;
}

void leerRaw(double raw[]) {
    for (int i = 0; i < N; ++i) {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%lf", &raw[i]);
    }
}

void analizarDatos(double raw[], double procesados[], double limiteInferior, double limiteSuperior, int *tamProcesados) {
    double suma = 0.0;
    int contador = 0;

    for (int i = 0; i < N; ++i) {
        if (raw[i] >= limiteInferior && raw[i] <= limiteSuperior) {
            procesados[contador++] = raw[i];
            suma += raw[i];
        }
    }

    *tamProcesados = contador;

    if (contador > 0) {
        double media = suma / contador;
        printf("Media de los valores válidos: %lf\n", media);
        for (int i = 0; i < contador; ++i) {
            printf("Diferencia con la media para %lf: %lf\n", procesados[i], procesados[i] - media);
        }
    } else {
        printf("No hay datos válidos.\n");
    }
}