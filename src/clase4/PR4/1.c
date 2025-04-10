#include <stdio.h>

int main() {
    int max = 0;
    

    // Bucle para pedir el valor hasta que válido
    while (max <= 0)
    {
        printf("Introduce el número máximo de asteriscos: ");
        scanf("%d", &max);
        if(max <= 0){
            printf("Dato erróneo");
        } else {
            break;
        }
    }
    
    // Leer el número máximo de asteriscos
    
    
    // Validar que el número sea positivo
    
    
    // Imprimir patrón A -> Angel
    printf("Patrón A:\n");
    for(int i = 1; i <= max; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    //BUCLE ASCENDENTE:
    // para max = 5;
    // *
    // **
    // ***
    // ****
    // *****
    //Bucle para las filas;
        // Bucle para las columnas;
            // Imprimir asterisco
            
    

    
    // Imprimir patrón B -> Chema
    //BUCLE DESCENDENTE:
    // para max = 5;
    // *****
    // ****
    // ***
    // **
    // *
    //Bucle para las filas;
        // Bucle para las columnas;
            // Imprimir asterisco
    printf("\nPatrón B:\n");
    for(int i=1; i<=max;i++ ){
        for (int j = 1; j<= max-i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}