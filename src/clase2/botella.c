#include <stdio.h>

int nivelAgua = 0;
bool botellaLlena = false;



void llenarBotella(){
    nivelAgua = 100;
    actualizarEstado();
}

void vaciarBotella(){
    nivelAgua = 0;
    actualizarEstado();
}

void estadoBotella(){
    if(nivelAgua > 100) return "Nivel de agua incorrecto, es mayor a 100\n";
    char* estado = "Nivel Agua: ";
    estado += nivelAgua;
    estado += "\n"
    if(botellaLlena){
        return estado + "Botella llena\n";
    }else{
        return estado + "Botella vacia\n";
    }
}

void actualizarEstado(){
    //Debe comprobar si el nivel de agua es mayor a 100, si es asi, debe cambiar el estado de botellaLlena a true
    //Si no, debe cambiar el estado de botellaLlena a false
    //RETO: Usar claúsula else
}

void beber() {
    //Debe quitar 20 al nivel de agua, y mantener el valor entre 0 y 100, además de actualizar el estado
    //Debe hacer un print si la botella está vacía (nivelAgua == 0)
    //Debe hacer un print si no hay suficientes agua (nivelAgua < 20)
}

int main(){
    //CASO 1: Llenar la botella
    llenarBotella();
    printf(estadoBotella());

    //CASO 2: Vaciar la botella
    vaciarBotella();
    printf(estadoBotella());

    //CASO 3: Beber (botella vacía)
    beber();
    printf(estadoBotella());

    //CASO 4: Beber (botella con agua)
    llenarBotella();
    beber();
    printf(estadoBotella());


    //CASO 5: Beber sin suficiente agua
    nivelAgua = 15;
    beber();
    printf(estadoBotella());


    //CASO 6: Beber hasta vaciar
    llenarBotella();
    beber();
    beber();
    beber();
    beber();
    beber();
    printf(estadoBotella());

    return 0;


}