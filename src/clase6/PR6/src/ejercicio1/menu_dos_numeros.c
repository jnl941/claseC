#include <stdio.h>
// #include "../common/utils.h"

/* Prototipos de funciones */
void mostrar_menu();
void calcular_mcd_menu(int a, int b);
void mostrar_maximo_menu(int* a, int* b);
void cambiar_numeros_menu(int *a, int *b);
void opciones(int* num1, int* num2, char opcion);

void opciones(int* num1, int* num2, char opcion){
    //num1 (opciones) = num1 (main)
    //maximo, cambiar_numeros modifica num1 (opciones) y num2 (opciones)
    switch (opcion) {
        case '1':
            calcular_mcd_menu(*num1, *num2);
            break;
        case '2':
            mostrar_maximo_menu(num1, num2);
            break;
        case '3':
            cambiar_numeros_menu(num1, num2);
            break;
        case '4':
            printf("\nFin de ejecución\n");
            break;
        default:
            printf("OPCION ELEGIDA %d.\n", opcion);
            printf("\nOpción no válida. Intente de nuevo.\n");
            break;
    }
}

void menu (char* opcion){
    //opcion (menu) = opcion (main)
    //opcion -> opcion (main)
    printf("\nMENU DE OPCIONES\n");
    printf("================\n\n");
    printf("1. Calcular y mostrar el MCD\n");
    printf("2. Calcular y mostrar el máximo\n");
    printf("3. Cambiar los números\n");
    printf("4. Finalizar ejecución\n\n");
    printf("\tIntroduzca opción: ");
    scanf(" %c", opcion);
}

int main() {
    int *num1 = malloc(sizeof(int));
    int *num2 = malloc(sizeof(int));
    char opcion;
    
    // TODO: Leer dos números enteros positivos
    printf("Ingrese el primer número entero positivo: ");
    scanf("%d", num1);
    printf("Numero 1: %d\n", *num1);
    printf("Ingrese el segundo número entero positivo: ");
    scanf("%d", num2);
    printf("Numero 2: %d\n", *num2);
    
    do {
        // TODO: Mostrar el menú y leer la opción
        // PASARLO A FUNCIÓN -> Chema
        //opcion (main) 
        menu(&opcion);

        printf("Opción elegida: %c\n", opcion);
        // TODO: Ejecutar la acción correspondiente a la opción elegida
        // PASARLO A FUNCIÓN -> Angel
        opciones(num1, num2, opcion);
          
    } while (opcion != '4');
    
    return 0;
}

/* TODO: Implementar la función calcular_mcd */
//CHEMA
void calcular_mcd_menu(int a, int b) {
    // Implementar aquí la función
    // el algoritmo de Euclides para calcular y mostrar el MCD

    // Algoritmo de Euclides:
        // Paso 1: Si b = 0, entonces el MCD es "a" porque no hay más números
        // Paso 2: Si b != 0, entonces:
            // Paso 2.1: Calcular el resto de "a" dividido por "b"
            // Paso 2.2: Asignar el valor de "b" a "a"
            // Paso 2.3: Asignar el valor del resto a "b"
            // Repetir desde el paso 1
            
    //Consejos:
        // 1. Usa un bucle while para repetir el proceso hasta que b sea 0
        // 2. Calcular el resto usando el operador %

    do {
    
        
        int x = a % b; //int x = 5 % 0
        a = b;
        b = x; //b = 0
        
        

    } while(b != 0);

    printf("El MCD es %d\n", a); 

}

/* TODO: Implementar la función mostrar_maximo */
//ANGEL
void mostrar_maximo_menu(int* a, int* b) { 
    //& -> direccion de memoria
    //DEFINIR VARIABLE
        //tipo nombreVariable
        //tipo* punteroAVariable 
    //USAR VARIABLE
        //nombreVariable
        //&nombreVariable = punteroAVariable
        //*punteroAVariable = valor de la variable
    printf("Los números son %d y %d\n", *a, *b);
    if (*a < *b){
        printf("El número máximo es %d", *b);
    } else {
        printf("El número máximo es %d", *a);
    }
}

/* TODO: Implementar la función cambiar_numeros */
// ANGEL
void cambiar_numeros_menu(int *a, int *b) {
    printf("Ingresa dos nuevos números:\n");

    //scanf
    //a = 0x12345678
    //TERMINAL: 5
    //Direccion de memoria de a: 0x12345678d
    //¿Qué valor tiene a? -> 5

    //b = 0x12345679

    //12
    //1 2
    
    scanf("%d %d", a, b);
    // Pedir al usuario dos nuevos números y actualizar los
    // valores usando los punteros a y b
}