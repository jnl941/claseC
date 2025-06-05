/*1.- (1.5) Completar un programa que calcula e imprime las frecuencias relativas de 
hasta 1000 tiradas de dados generadas por la funcion tirar dados, que devuelve el número de tiradas (n) 
ejecutadas por el experimento y un vector con los valores "tiradas" 
(esta función no debe implementarse pero sí completar su interfaz). 
El programa calculará sobre el vector frecuencia_absoluta los conteos del vector de tiradas y, 
puesto que se conoce el tamaño de la muestra, recorrerá el vector de frecuencia_absoluta mostrando la 
frecuencia relativa de los valores de 1 a 6. A modo de ayuda se indica con puntos suspensivos los 
lugares donde, como mínimo, habría que incluir código. 

Ejemplo: si tenemos 10 tiradas (1,2,3,4,2,1,6,5,1}, la frecuencia absoluta de 1 es 3 y su frecuencia 
relativa es 3/10 en el caso de 4 su frecuencia absoluta es 1 y su frecuencia relativa 4/10.*/

#include <stdio.h>

#define MAX_TIRADAS 1000

typedef int tipo_tiradas[MAX_TIRADAS];

//6 porque son 6 números del dado, del 1 al 6
typedef int tipo_frecuencias[6];

int tirar_dados(tipo_tiradas tiradas);

//n = 1000 tiradas
//frecuencia_absoluta = int
int main() {
    // Definicion e inicializacion de las frecuencias
    tipo_frecuencias frecuencia_absoluta = {0}; // IMPORTANTE: Inicializamos todas las frecuencias a 0 con {0} 
    tipo_tiradas tiradas;
    int n = tirar_dados(tiradas); //llamada a la funcion ya construida

    for (int i = 0; i < n; ++i) {
        frecuencia_absoluta[tiradas[i] - 1]++;
    }

    
    printf("\nFrecuencias relativas:\n");
    for(int i = 0; i < 6; i++)
    {
        printf("Tirada %d: %.2f\n", i + 1, (float)frecuencia_absoluta[i] / n);
    }
    return 0;
}

// ubicacion de la implementacion de la funcion tirar_dados que no deben implementar
int tirar_dados(tipo_tiradas tiradas) {
    int n;
    for(int i = 0; i < MAX_TIRADAS; i++){
        int numero_sacado = (int) rand() % 6 + 1; // Podeis obviar la declaracion de la variable numero_sacado
                                                    // y simplemente usar la expresion directamente
        tiradas[i] = numero_sacado;
    }
    return n;
}