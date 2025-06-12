#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef int tipo_vector[MAX];

tipo_vector* leerVector(tipo_vector *v, int *tam);
tipo_vector* contarDuplicados(tipo_vector* raw, tipo_vector *conteo, int tam);
void mostrarResultados(tipo_vector* conteo, int tam);

int main() {
    tipo_vector* raw = malloc(sizeof(tipo_vector)); //raw (main)
    //raw (main)
    tipo_vector* conteo = malloc(sizeof(tipo_vector));

    // raw = {2,2,5,8,8}
    // C no sabe copiar directamente el array
    // conteo = raw -> NO SABE
    // &raw = 0x00000010
    // &conteo = &raw = 0x00000010
    
    int* tam = malloc(sizeof(int));


    // VARIABLE 
    // int total = 0;
    // int vector_num[3] = {2,2,5};
    // int funcionSuma(int vector_num[]);
    // total = funcionSuma(vector_num);
    //     funcionSuma => int
    // total = int

    // int* total = malloc(sizeof(int));
    // int vector_num[3] = {2,2,5};
    // void funcionSuma(int vector_num[], int* total);
    // funcionSuma(vector_num, total);

    // usar raw para asignarle el valor de leerVector
    raw = leerVector(raw, tam);

    printf("Vector leído:\n");
    for (int i = 0; i < *tam; i++) {
        printf("%d ", *raw[i]);
    }
    printf("\n");

    // Modificar la función para que se adapte a la nueva estructura
    // raw    = {2,2,5,8,8}
    // conteo = {0, 2, 0, 0, 1, 0, 0, 2 ... }
    conteo = contarDuplicados(raw, conteo, *tam);
    
    mostrarResultados(conteo);
    
    // Liberar la memoria asignada
    free(raw);
    free(conteo);
    return 0;
}

tipo_vector* leerVector(tipo_vector *v, int *tam) {
    // v(leerVector) = copia de raw(main)
    int num;
    *tam = 0;

    
    // PROBLEMA A RESOLVER: 
    // 1. Leer números hasta que se ingrese 0 por entrada
           // Bucle FOR
           // 2. IF -> Si es 0, terminar
           //    SI NO -> Sigue, pidiendo números (print y scanf), se meten en el array "v"
           // 3. Aumentar el tamaño del array en 1
    for (int i = 0; i < MAX; i++) {
        printf("Ingrese números entre 1 y 100 (0 para terminar):\n");
        scanf("%d", &num);
        
        if (num == 0){
            break;
        } else {
            // v[0] = 0;
            // v[1] = 0;
            // v[99] = 0;

            // i = 2; num = 10;
            // v[2] = v[10];s
            // v[10]: 0
            // v[2] = 0;
            // v[2] = 10;
            *v[i] = num;
            *tam = *tam + 1;
            printf("Vector leído LEERVECTOR:\n");
            printf("test %d\n", *tam);
            for (int i = 0; i < *tam; i++) {
                printf("%d ", *v[i]);
            }
            printf("\n");
        }
     }
     //devolver el vector
     return v;

     
}

tipo_vector* contarDuplicados(tipo_vector* raw, tipo_vector *conteo, int tam) {
    // PROBLEMA A RESOLVER: Contar los números duplicados
    // 1. Pasar uno por uno -> Bucle for
        // 2. Contar cuántos hay de cada número
        // i = 1; -> 1
        // i = 2; -> 2
        // ...
        // i = 100; -> 100
        // 3 (EJ). Cuántos 1s hay en el array
        // 4 (EJ). Bucle FOR para recorrer el array RAW
        // 5 (EJ). Si encontramos 1 -> conteo[i]++;
    // 6. Devolver el conteo

    int cuentaActual = 0;
    // Podemos empezar en i = 1, pero... HAY QUE HACER OTRA COSA
    for(int numeroArrayAencontrar = 1; numeroArrayAencontrar < MAX+1; numeroArrayAencontrar++){
        for(int posicionEnRaw = 0; posicionEnRaw < tam; posicionEnRaw++){
            if(*raw[posicionEnRaw] == numeroArrayAencontrar){
                cuentaActual = cuentaActual + 1;
                printf("Número %d encontrado en la posición %d. CUENTA ACTUAL: %d\n", numeroArrayAencontrar, posicionEnRaw, cuentaActual);
            }
            
        }

       *conteo[numeroArrayAencontrar] = cuentaActual;
       cuentaActual = 0;
    }
    return conteo;
}

void mostrarResultados(tipo_vector* conteo) {
    printf("Conteo de duplicados:\n");
    for (int i = 0; i < MAX; i++) {
        if (*conteo[i] > 0) {
            printf("Número %d: %d veces\n", i, *conteo[i]);
        }
    }
    printf("\n");
}