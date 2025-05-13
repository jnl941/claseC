#include <stdio.h>


#define MAX 6 
typedef int tipo_vector[MAX];

int existeEnArray(int num, tipo_vector array);
void ordenarArray(tipo_vector array);

int main(int argc, char *argv[])
{

    tipo_vector numerosPrimitiva = {0, 0, 0, 0, 0, 0};
    int count = 0;
    int num;
    int correcto;

    //BUCLE para pedir números y recorrer el array numerosPrimitiva
    printf("Introduce los 6 numeros de la primitiva:\n");
    for(int i = 0; i < MAX; i++) {
        // Pedir un número con scanf
        // Números entre 1 y 49
        do {
            scanf("%d", &num);
            if(num < 1 || num > 49) {
                // Si el número no es válido, mostrar un mensaje de error
                printf("Numero erroneo, vuelve a introducir:\n");
            }
        } 
        while(num < 1 || num > 49);

        //A PARTIR DE AQUI, EL NUMERO ES VALIDO
        // Comprobar si el número ya existe en el array
            //existeEnArray()
        
        do {
            correcto = existeEnArray( num, numerosPrimitiva); // 0 o 1
            if(correcto == 1){
                printf(" Dato erroneo, Introduzca otro dato:\n");
                scanf("%d", &correcto);
            }
        } while(correcto == 1);
        

        // Introducir el numero en el array numerosPrimitiva
    
        numerosPrimitiva[i] = num;
    }

    return 0;
}

// Función para verificar si un número ya existe en el array
int existeEnArray(int num, tipo_vector array) {
    // Recorrer el array y comprobar si el número ya existe
    // Recorrer = for
    // Comprobar = if
        int correcto;
        
    for(int i = 0; i < MAX; i++){
        if(array[i] == num){
            correcto = 1;
            break;
        } else {
            correcto = 0;
        }
    }
    printf("Correcto = %d\n", correcto);

    return correcto;
}

void ordenarArray(tipo_vector array) {
    int temp;

}