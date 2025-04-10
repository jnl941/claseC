#include "../include/TEST.h"
#include <stdio.h>
#include <math.h>

extern void PROBAR();

float masaBola(float diametro, float densidad) {
    float radio = diametro / 2.0;
    float volumen = (4.0/3.0) * M_PI * radio * radio * radio;
    float masa = volumen * densidad;
    printf("Volumen: %.2f cm³\n", volumen);
    printf("Densidad: %.2f g/cm³\n", densidad);
    printf("Masa: %.2f cg\n", masa*100);

    return masa;
}

int main(int argc, char *argv[]) {
    INICIO_TEST();
    
    if (argc > 1) {
        PROBAR();
        FIN_TEST();
        return 0;
    }

    float diametro;
    char material;
    float densidad;

    printf("Introduzca el diámetro de la bola (cm): ");
    scanf("%f", &diametro);
    printf("Introduzca el material (N para hierro, S para plata): ");
    scanf(" %c", &material);

    if (material == 'N') {
        densidad = 0.00786; // Densidad del hierro en g/cm³
        //La densidad del hierro es 7.86 g/cm³, sin embargo, aquí se pone el valor 0.00786 ya que se está calculando la masa en kg
    } else if (material == 'S') {
        densidad = 0.01049; // Densidad de la plata en g/cm³
        //La densidad del hierro es 7.86 g/cm³, sin embargo, aquí se pone el valor 0.00786 ya que se está calculando la masa en kg
    } else {
        printf("Material no reconocido.\n");
        return 1;
    }

    float masa = masaBola(diametro, densidad);
    printf("La masa de la bola es: %.2f Kg\n", masa);
    
    FIN_TEST();
    return 0;
}