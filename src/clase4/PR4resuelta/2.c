#include <stdio.h>

int main() {
    int alto, ancho, grosor;
    
    // Leer dimensiones y grosor
    printf("Introduce el alto (4-14): ");
    scanf("%d", &alto);
    
    printf("Introduce el ancho (4-14): ");
    scanf("%d", &ancho);
    
    printf("Introduce el grosor del borde: ");
    scanf("%d", &grosor);
    
    // Validar dimensiones
    if (alto < 4 || alto > 14 || ancho < 4 || ancho > 14) {
        printf("Error: El alto y ancho deben estar entre 4 y 14\n");
        return 1;
    }
    
    // Validar grosor
    int min_dimension = (alto < ancho) ? alto : ancho;
    if (grosor < 1 || grosor > min_dimension / 2) {
        printf("Error: Grosor inválido para estas dimensiones\n");
        return 1;
    }
    
    // Dibujar el rectángulo
    for (int i = 0; i < alto; i++) {
        for (int j = 0; j < ancho; j++) {
            // Comprobar si estamos en el borde con el grosor especificado
            if (i < grosor || i >= alto - grosor || j < grosor || j >= ancho - grosor) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}