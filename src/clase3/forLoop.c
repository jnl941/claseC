#include <stdio.h>

char nombre[] = "Angel";


//Parametro = punteroAnombre
//while(punteroAnombre != '\0')
//cout << caracter

//printf("Valor dentro de la direccion del puntero: %c\n", *(puntero + sizeof(char)));
void imprimirNombre(char* punteroNombre) {

    
    //sizeof(char)*indiceChar ->  C -> indiceChar = 0
    //sizeof(char)*indiceChar ->  h -> indiceChar = 1
    //sizeof(char)*indiceChar ->  e -> indiceChar = 2
    //sizeof(char)*indiceChar ->  m -> indiceChar = 3
    //sizeof(char)*indiceChar ->  a -> indiceChar = 4
    //sizeof(char)*indiceChar -> \0 -> indiceChar = 5
    //'\0'
    //while(caracterAimprimir != '\0')

    char caracterAimprimir = '.'; 
    
    //caracterAimprimir = 'C'
    //caracterAimprimir = 'h'
    //caracterAimprimir = 'e'
    //caracterAimprimir = 'm'
    //caracterAimprimir = 'a'
    //caracterAimprimir = '\0'
    
    int indiceChar = 0;
    int *puntero = &indiceChar;


    while(caracterAimprimir != '\0'){
        
        //direccionDentroDelString, puntero -> caracterAimprimir
        //indice = indice + 1;
        //indice += 1;
        char* direccionDentroDelString = punteroNombre + indiceChar * sizeof(char); // -> Direccion del caracter a imprimir
         *puntero = *puntero + 1;

        printf("%p", direccionDentroDelString);
        printf("\n");
        
        //SOLUCION 1: caracterAimprimir
        //caracter = direccionAlCaracter
        caracterAimprimir = *direccionDentroDelString;
        //printf("%c", variableChar);
        printf("%c", caracterAimprimir);
        printf("\n");
    }
    printf("\n");
    
    
}

int main()
{
    //int x=10;
    //For loop
    //for(declaracionVariable; condicion; accion)

    // printf("NOMBRE STRING: %s\n", nombre);

    // //sizeof()
    // for(int i = 0; i < sizeof(nombre); i += 1) {
    //     printf("Caracter %d: %c\n", i, nombre[i]);
    // }


    //int = 4 bytes = 32 bits 
    //char = 1 byte = 8 bits
    // char* puntero = &nombre;

    // printf("Puntero: %p\n", puntero);
    // printf("Valor dentro de la direccion del puntero: %c\n", *puntero);
    // printf("Valor dentro de la direccion del puntero: %c\n", *(puntero + sizeof(char)));

    // printf("Direccion nombre: %p\n", &nombre);

    imprimirNombre(nombre);
}

