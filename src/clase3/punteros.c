#include <stdio.h>

int main(){

    int n = 50;

    int *puntero = &n;

    printf("Valor de n: %d\n", n);
    printf("Direccion de n: %p\n", &n);
    printf("Valor de puntero: %p\n", puntero);
    printf("Valor de lo que apunta puntero: %d\n\n", *puntero);

    //*puntero = *puntero - 1;
    //  &n


    int *puntero2 = &n;
    *puntero2 = *puntero2 - 1;
    
    printf("Valor de puntero2: %p\n", puntero2);
    printf("Valor de lo que apunta puntero2: %d\n", *puntero2);
    printf("Valor de n: %d\n\n", n);    

    int *puntero3 = &n;
    *puntero3 = *puntero3 + 2;
    

    printf("Valor de puntero3: %p\n", puntero3);
    printf("Valor de lo que apunta puntero3: %d\n", *puntero3);
    printf("Valor de puntero2: %p\n", puntero2);
    printf("Valor de lo que apunta puntero2: %d\n", *puntero2);
    printf("Valor de n: %d\n\n", n);    


    //sizeof(tipoDato) -> num_bytes
    //int *puntero = malloc(num_bytes -> int)
    //int*
    //puntero4_i
    //sizeof -> int
    //free(puntero)

    //valor = 100
    
    
    sizeof(int);
    int *puntero4_i = malloc(4);
    *puntero4_i = 100;
    printf("Valor de puntero4_i: %p\n", puntero4_i);
    printf("Valor de lo que apunta puntero4_i: %d\n", *puntero4_i);
    
    //valor = 200
    sizeof(int);
    int *puntero5_j = malloc(4);
    *puntero5_j= 200;
    printf("Valor de puntero5_j: %p\n", puntero5_j);
    printf("Valor de lo que apunta puntero5_j: %d\n\n", *puntero5_j);

    printf("Direccion: %p\n", (puntero5_j - sizeof(int)*2));
    printf("Valor: %d\n", *(puntero5_j - sizeof(int)*2));

}