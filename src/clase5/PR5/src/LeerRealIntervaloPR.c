#include "../include/TEST.h"
#include <stdio.h>

extern void PROBAR(); // Función externa de prueba

/**
 * Función 1: Lee un número real dentro de un intervalo (versión original)
 * Devuelve directamente el valor leído
 */
float leerRealIntervalo(float a, float b) {
    printf("leerRealIntervalo: a=%.2f, b=%.2f\n", a, b);
    // Asegurarse de que a es menor que b -> Angel
    while(b < a){
        if(b < a){
            printf("El valor a introducido es erroneo, introduce otro dato:\n");
            scanf("%f" ,a);
            printf("El valor b introducido es erroneo, introduce otro dato:\n");
            scanf("%f" ,b);
        }
        
    }
    // Leer hasta que se introduzca un valor válido -> Chema y Angel
    // valor x -> float
    // comprobar que este entre a y b
    // do while();

    //definir aqui x
    
    float x;
    do {
        printf("El valor x introducido es erroneo, introduce otro dato\n:");
        scanf("%f", x);
    } while(x < a && x > b);
   return x;
    // Devolver el valor leído
}

/**
 * Función 2: Alternativa usando parámetro de salida
 * Devuelve el valor a través del puntero x
 */
void leerRealIntervalo1(float a, float b, float *x) {
    printf("leerRealIntervalo1: a=%.2f, b=%.2f\n", a, b);
    // Maneja el caso especial cuando a es igual b
    while(b < a){
        if(b < a){
            printf("El valor a introducido es erroneo, introduce otro dato:\n");
            scanf("%f" ,a);
            printf("El valor b introducido es erroneo, introduce otro dato:\n");
            scanf("%f" ,b);
        }
        
    }
    // float *puntero;
    // *puntero (valor del puntero, valor al que esta apuntando en memoria el puntero)
    // &puntero (direccion de memoria del puntero)
    // puntero (direccion de memoria del valor)
    
    do {
        printf("El valor x introducido es erroneo, introduce otro dato\n:");
        scanf("%f", *x);
    } while(*x < a && *x > b);

        // En tal caso, el valor leído debe ser a (o b)

    
    // Resto de la implementación...
}

/**
 * Función 3: Alternativa que envuelve la versión 1
 * Usa la versión 1 y devuelve el valor directamente
 */
float leerRealIntervalo2(float a, float b) {
    printf("leerRealIntervalo2: a=%.2f, b=%.2f\n", a, b);

    // Llama a la función leerRealIntervalo1
    float *x;
    // float *puntero;
    // *puntero (valor del puntero, valor al que esta apuntando en memoria el puntero)
    // &puntero (direccion de memoria del puntero)
    // puntero (direccion de memoria del valor)
    leerRealIntervalo1(a, b, x);
    return *x;
    // Devolver el valor leído
}

/**
 * Función 4: Versión con intentos limitados
 * Devuelve estado de éxito/fracaso
 */
int leerRealIntervalo3(float a, float b, float *x) {
    
    // Permite solo 3 intentos para leer un número válido
    // Control de intentos y lógica de lectura, devolviendo 1 en caso de éxito
    // o 0 en caso de error
    //IGNORAD ESTO
    // while(b < a){
    //     if(b < a){
    //         printf("El valor a introducido es erroneo, introduce otro dato:\n");
    //         scanf("%f" ,a);
    //         printf("El valor b introducido es erroneo, introduce otro dato:\n");
    //         scanf("%f" ,b);
    //     }
    // }
    //IGNORAD ESTO
    // printf("leerRealIntervalo3: a=%.2f, b=%.2f\n", a, b);
    // printf("ANGEL:\n");
    // for(int n = 0; n < 3; n++){
    //     printf("Introduce un valor entre a y b:\n");
    //     scanf("%f", x);
    //     printf("*x=%f\n", *x);
    //     if(*x >= a && *x <=b){
    //         printf("El valor introducido es correcto\n");
    //         return 1;
    //     }
    //     printf("El valor introducido es erroneo, introduce otro dato:\n");
    // }
    // printf("Se han superado los 3 intentos, el valor introducido es erroneo\n");
    // return 0;
    printf("CHEMA:\n");
    int intentos = 0;
    while(intentos < 3){
        printf("LeerIntervalo3: a=%f, b=%f/n:", a , b );
        scanf("%f", x);
        if (*x >= a && *x <= b) {
             printf("El valor introducido es correcto\n");
            return 1;
        }
        // Control de intentos y lógica de lectura, devolviendo 1 en caso de éxito
        // o 0 en caso de error
        intentos++;
    }
    printf("Se han superado los 3 intentos, el valor introducido es erroneo\n");
   return 0; 
}

int main(int argc, char *argv[]) {
    INICIO_TEST();
    
    if (argc > 1) {
        PROBAR();
        FIN_TEST();
        return 0;
    }
    
    // Ejecución normal del programa...
    
    FIN_TEST();
    return 0;
}