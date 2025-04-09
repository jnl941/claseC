#include "../include/TEST.h" // Incluye el marco de pruebas
#include <stdio.h>
#include <math.h>

// Función externa del archivo de prueba para validar nuestra función
extern void PROBAR();

/**
 * Calcula la masa de una esfera dado su diámetro y densidad
 * Esta es la función principal que está siendo probada
 */
float masaBola(float diametro, float densidad) {
    // Calcula el radio, volumen y masa de la esfera
    // Fórmulas:
    // Volumen = (4/3) * π * r³
    // Masa = Volumen * Densidad
    // Donde r es el radio (diámetro / 2)
    // π es una constante matemática (aproximadamente 3.14159)
    // Se puede utilizar M_PI de math.h para mayor precisión
    
    printf("Volumen: %.2f cm³\n", volumen);
    printf("Densidad: %.2f g/cm³\n", densidad);
    printf("Masa: %.2f cg\n", masa * 100); // Convertir a centigramos
    
    // Devuelve la masa calculada
    return masa;
}

int main(int argc, char *argv[]) {
    INICIO_TEST(); // Inicializa el marco de pruebas
    
    // Si se proporciona argumento de prueba, ejecuta la función de prueba y sale
    if (argc > 1) {
        PROBAR(); // Llama a la función de prueba externa
        FIN_TEST();
        return 0;
    }

    // Ejecución normal del programa (cuando no se está probando)

    // Variables para almacenar el diámetro, material y densidad

    // El material puede ser 'N' para hierro o 'S' para plata
    // Recordad que la densidad de la plata es 10.49 g/cm³ y la del hierro es 7.86 g/cm³, 
    // pero que realmente vamos a usar la unidad kg

    // Entrada del usuario y cálculos...
    
    FIN_TEST(); // Finaliza el marco de pruebas
    return 0;
}