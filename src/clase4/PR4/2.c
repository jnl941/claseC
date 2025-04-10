#include <stdio.h>

int main() {
    int alto, ancho, grosor;
    
    // Leer dimensiones y grosor
    
    
    
    
    
    
    // Validar dimensiones
    //BUCLE WHILE VALIDACION
                //TRUE
    while(alto < 4 || alto > 14){
        
        printf("Introduce el alto (4-14): ");
        scanf("%d", &alto);
        
        if(alto < 4 || alto > 14){
        printf("Altura errónea, introduce otro dato: ");
        } else {
            break;
        }
    }
    
    
    
        // Validar alto -> Angel

    //BUCLE WHILE VALIDACION
    while (ancho < 4||ancho > 14){
        printf("Introduce el ancho (4-14): ");
        scanf("%d", &ancho); 
        if (ancho < 4||ancho > 14)
        printf("ERROR:El ancho tiene que ser entre 4 y 14\n");
    }

    //BUCLE WHILE VALIDACION
        // Validar grosor -> Angel y Chema
    do {
        printf("Introduce el grosor del borde: ");
        scanf("%d", &grosor); 
       if(grosor <= 0){
        printf("Grosor erroneo, introduce otro dato\n");
       }else{
           break;
        }
    } while(grosor <= 0);
    
    
    printf("\nVERSIÓN CHEMA:\n");
    // Dibujar el rectángulo
    for(int i = 0; i < alto; i++){
        for(int j = 0; j < ancho; j++){
            if(i < grosor || i >= alto-grosor || j < grosor || j >= ancho-grosor){
                printf("* ");  
               
            }
            else{
                printf("  ");
            }
            //ancho = 5
            //alto = 5
            //grosor = 2
            //i = 0, j = 0 -> TRUE || FALSE || 
    }
    printf("\n");
    }

    printf("\nVERSIÓN ÁNGEL:\n");
    for(int i = 0; i < grosor; i++){
        for(int j = 0; j < ancho; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i = 0; i < alto - grosor * 2; i++){
        for(int j = 0; j < grosor; j++){
            printf("* ");
        }
        for(int j = 0; j < ancho - grosor * 2; j++){
            printf("  ");
        }
        for(int j = 0; j < grosor; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i = 0; i < grosor; i++){
        for(int j = 0; j < ancho; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}