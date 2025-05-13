#include <stdio.h>
// #include "../common/utils.h"

/* Prototipos de funciones */
void cambiar_fecha(int *dia, int *mes, int *anno);
void sumar_n_dias(int *dia, int *mes, int *anno);
void mostrar_fecha(int *dia, int *mes, int *anno);
void opciones(int *dia, int *mes, int *anno, int opcion);

void opciones(int *dia, int *mes, int *anno, int opcion){
    //& -> direccion de memoria


    //DEFINIR VARIABLE
        //tipo nombreVariable
        //tipo* punteroAVariable 
    //USAR VARIABLE
        //nombreVariable
        //&nombreVariable   = punteroAVariable
        //&punteroAVariable = puntero al punteroAVariable
        //*punteroAVariable = valor de la variable
     
    switch (opcion){
        case 1:
            cambiar_fecha(dia, mes, anno);
            printf("Fecha:%d-%d-%d\n", *dia, *mes, *anno);
            break;
        case 2:
            sumar_n_dias(dia, mes, anno);
            break;
        case 3:
            printf("Fecha:%d-%d-%d\n", *dia, *mes, *anno);
            mostrar_fecha(dia, mes, anno);
            break;
        case 4:
            printf("\nFin de ejecución\n");
            break;
        default:
            printf("\nOpción no válida. Intente de nuevo.\n");
            break;
    }
}

int main() {

    // Inicializar la fecha a 1-1-2023
    int dia = 1, mes = 1, anno = 2023;
    int opcion;


    // TODO: Hacer un bucle para mostrar el menú y leer la opción -> Chema
    
    // Opciones: 1. Cambiar fecha, 2. Sumar n días, 3. Mostrar fecha, 4. Finalizar ejecución
    do{
        //& -> direccion de memoria
        //DEFINIR VARIABLE
            //tipo nombreVariable
            //tipo* punteroAVariable 
        //USAR VARIABLE
            //nombreVariable
            //&nombreVariable = punteroAVariable
            //&punteroAVariable = puntero al punteroAVariable
            //*punteroAVariable = valor de la variable
        menu(&opcion);
        printf("Fecha main antes:%d-%d-%d\n", dia, mes, anno);
        opciones(&dia, &mes, &anno, opcion);
        printf("Fecha main despues:%d-%d-%d\n", dia, mes, anno);
        
        // TODO: Mostrar el menú con las opciones -> Chema

        // TODO: Ejecutar la acción correspondiente a la opción elegida -> Ángel
        
    } while(opcion != 4);
        

    return 0;
}
void menu(int* opcion){
    printf("Mostrar el menu:\n");
    printf(" 1- Cambiar fecha: \n");
    printf(" 2- Sumar n dias\n");
    printf(" 3- Mostrar fecha:\n");
    printf(" 4- Finalizar la ejecucion:\n ");
    scanf("%d", opcion);
    printf("Opcion elegida: %d\n", *opcion);
}
/* TODO: Implementar la función cambiar_fecha */
void cambiar_fecha(int *dia, int *mes, int *anno) {
    // 1. Pedir al usuario que introduzca una nueva fecha (día, mes, año)
    // 2. Validar la fecha
    // 3. Si la fecha es válida, actualizar los valores usando los punteros
    // 4. Si la fecha no es válida, mostrar un mensaje de error
    printf("Introduce una nueva fecha:\n");
    int* diatemp = dia;
    int* mestemp = mes;
    int* annotemp = anno;
    scanf("%2d %2d %4d", diatemp, mestemp, annotemp);
    
    printf("%2d %2d %4d", *diatemp, *mestemp, *annotemp);
    if(*mestemp<=0 || *mestemp >= 13 || *diatemp <= 0 || *diatemp >= 32 || *annotemp < 0){
        
        printf("Error fecha no válida\n");
    } else {
        *dia = *diatemp;
        *mes = *mestemp;
        *anno = *annotemp;
    }

    //SI ES VALIDO -> reemplazar valores de la fecha por los variables temporales
}

/* TODO: Implementar la función sumar_n_dias */
void sumar_n_dias(int *dia, int *mes, int *anno) {
    // 1. Pedir al usuario la cantidad de días a sumar
    // 2. Llamar a la función sumar_dias para actualizar la fecha
    int dias;
    printf("Ingrese la cantidad de días a sumar: ");
    scanf("%d", &dias);
    
    // Sumar días a la fecha
    
}

/* TODO: Implementar la función mostrar_fecha */
void mostrar_fecha(int* dia, int* mes, int* anno) {
    // Mostrar la fecha en formato DD-MM-AAAA -> Chema
    // %2d -> 2 dígitos
    printf("Fecha:%d-%d-%d\n", *dia, *mes, *anno);
}