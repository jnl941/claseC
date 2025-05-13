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

    printf("Ingrese el límite inferior: ");
    scanf("%lf", &limiteInferior);
    printf("Ingrese el límite superior: ");
    scanf("%lf", &limiteSuperior);
}

void leerRaw(double raw[]) {

}

void analizarDatos(double raw[], double procesados[], double limiteInferior, double limiteSuperior, int *tamProcesados) {
    double suma = 0.0;
    int contador = 0;


}