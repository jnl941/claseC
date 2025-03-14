#include <stdio.h>
#include <stdbool.h>

int nivelAgua = 0;
bool botellaLlena = false;



void estadoBotella(){
    if(nivelAgua > 100) {
        printf("ERROR: Nivel de agua incorrecto, es mayor a 100\n");
        return;
    } 
    if(nivelAgua < 0){
        printf("ERROR: Nivel de agua incorrecto, es menor a 0\n");
        return;
    }
    printf("Nivel Agua: ");
    printf("%d", nivelAgua);
    printf("\n");
    
    if(botellaLlena){
        printf("\nBotella llena\n");
    } else {
        printf("\nBotella vacía\n");
    }

}




void llenarBotella(){
    nivelAgua = 100;
    actualizarEstado();
}

void vaciarBotella(){
    nivelAgua = 0;
    actualizarEstado();
}

void actualizarEstado(){
    //Debe comprobar si el nivel de agua es igual a 100, si es asi, debe cambiar el estado de botellaLlena a true
    //Si no, debe cambiar el estado de botellaLlena a false
    //RETO: Usar claúsula else

    if(nivelAgua == 100){ 
        botellaLlena = true;
    } else {
        botellaLlena = false;
    }
}

void beber() {
    /* CUMPLIDO:
    - Debe quitar 20 al nivel de agua
    - Debe mantener el valor entre 0 y 100
    */
    
    
    
    //Debe actualizar el estado

    //Debe hacer un printf si la botella está vacía (nivelAgua == 0)
    //Debe hacer un printf si no hay suficientes agua (nivelAgua < 20)

    //PISTA1: variableArestar = variableArestar - valorArestar
    //PISTA2: 
    //PISTA3: 
    
    //if( (condicion1) && (condicion2) )

    nivelAgua = nivelAgua - 20; //nivelAgua = (0 < nivelAgua) //True o False;

if (nivelAgua<0){
   nivelAgua=0; //Comparación = Booleano //True o False
}
if (nivelAgua>100){
    nivelAgua=100;
}
//botellaLlena = True o False;
//actualizarEstado();
    /* code */
    
    // if (botellaLlena = true){
    //     actualizarEstado()
    // } else {
        
    // }
    actualizarEstado();
}


int main(){
    //CASO 1: Llenar la botella
    printf("CASO 1: Llenar la botella\n");
    llenarBotella();
    estadoBotella();

    //CASO 2: Vaciar la botella
    printf("CASO 2: Vaciar la botella\n");
    vaciarBotella();
    estadoBotella();

    //CASO 3: Beber (botella vacía)
    printf("CASO 3: Beber (botella vacía)\n");
    beber();
    estadoBotella();

    //CASO 4: Beber (botella con agua)
    printf("CASO 4: Beber (botella con agua)\n");
    llenarBotella();
    beber();
    estadoBotella();


    //CASO 5: Beber sin suficiente agua
    printf("CASO 5: Beber sin suficiente agua\n");
    nivelAgua = 15;
    beber();
    estadoBotella();

    //CASO 6: Beber sin suficiente agua
    printf("CASO 6: Beber sin suficiente agua\n");
    nivelAgua = 151;
    beber();
    estadoBotella();


    //CASO 7: Beber hasta vaciar
    printf("CASO 7: Beber hasta vaciar\n");
    llenarBotella();
    beber();
    beber();
    beber();
    beber();
    beber();
    estadoBotella();

    return 0;


}