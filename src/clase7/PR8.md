
# Práctica 8: Estructuras de datos. Vectores multidimensionales 

_________________________
## Ejercicios a completar  de forma PRESENCIAL
____________________________________________



### **1.** Contar coloreados - EJERCICIO MÍNIMO REQUERIDO (VecinosColoreadosPR.c)
Construir un programa en C que emula una imagen sobre una matriz de tamaño máximo 10x10 con valores 0 (no coloreado) y 1 (coloreado). El programa coloreará aleatoriamente 20 puntos distintos y luego utilizará una función para contar cuántos de esos puntos tienen vecinos coloreados. Matriz original:

```
0 0 1 0 0 0 0 0 0 0 
1 0 0 1 0 0 0 1 0 0 
0 1 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 1 1 0 0 
0 1 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 1 
1 0 0 0 0 1 1 0 1 1 
0 0 1 0 0 0 0 0 0 0 
0 0 0 0 0 1 1 0 0 0 
0 1 0 0 0 1 0 1 0 0 

Total de puntos coloreados con vecinos coloreados: 15
```

Completa lo que falta en el siguiente código


```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../.vscode/test/TEST.h"

#define FILAS 10
#define COLUMNAS 10
#define PUNTOS_ALEATORIOS 20

typedef int ///.....completar

// Funciones
void inicializarMatriz(Matriz matriz);
void mostrarMatriz(Matriz matriz);
void colorearPuntosAleatorios(Matriz matriz);
int contarVecinosColoreados(Matriz matriz, int fila, int columna, int distancia);
int contarPuntosConVecinosColoreados(Matriz matriz);

extern void PROBAR();

int main(int argc, char *argv[])
{
    INICIO_TEST();
    if (argc > 1)  {
        PROBAR();
        PRINT_TEST("1");
    }  

    Matriz matriz;

    inicializarMatriz(matriz);
    colorearPuntosAleatorios(matriz);
    printf("Matriz original:\n");
    mostrarMatriz(matriz);

    int puntosConVecinosColoreados = contarPuntosConVecinosColoreados(matriz);

    printf("\nTotal de puntos coloreados con vecinos coloreados: %d\n", puntosConVecinosColoreados);

    FIN_TEST();
    return 0;
}

void inicializarMatriz(Matriz matriz) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = 0;  // Inicializar la matriz con 0 (no coloreado)
        }
    }
}

void mostrarMatriz(Matriz matriz) {
// COMPLETAR
}

void colorearPuntosAleatorios(Matriz matriz) {
    srand(time(NULL));

    int puntosColoreados = 0;
    while (puntosColoreados < PUNTOS_ALEATORIOS) {
        int fila = rand() % FILAS;
        int columna = rand() % COLUMNAS;

		// COMPLETAR, No basta con asignar  matriz[fila][columna] = 1;
		// hay que comprobar que no esa coloreado

    }
}

int contarVecinosColoreados(int matriz[FILAS][COLUMNAS], int fila, int columna, int distancia) {
    int contador = 0;

    for (int i = -distancia; i <= distancia; i++) {
        for (int j = -distancia; j <= distancia; j++) {
            int nuevaFila = fila + i;
            int nuevaColumna = columna + j;

            // Verificar que la posición esté dentro de los límites de la matriz
            if (nuevaFila >= 0 && nuevaFila < FILAS && nuevaColumna >= 0 && nuevaColumna < COLUMNAS) {
                // Excluir el punto central y verificar si el vecino está coloreado
                if (!(i == 0 && j == 0) && matriz[nuevaFila][nuevaColumna] == 1) {
                    contador++;
                }
            }
        }
    }

    return contador;
}


int contarPuntosConVecinosColoreados(Matriz matriz) {
    int puntosConVecinosColoreados = 0;


	// COMPLETAR, PARA CADA ELEMENTO DE LA MATRIZ COMPROBAR QUE ESTANDO COLOREADO TIENE VECINOS COLOREADOS
	// UTILIZANDO LA FUNCIÓN contarVecinosColoreados(matriz, i, j, 1), EN ESE CASO INCREMENTAR EL CONTADOR.

    return puntosConVecinosColoreados;
}

```


[( - ```  ```   ](../PR8_resuelta/VecinosColoreadosPR.c)[[link privado]](https://github.com/24-25-Programacion-44101107/_PracticasLaboratorioPrivado/blob/main/PR8_resuelta/VecinosColoreadosPR.c)

### **2.** Operaciones con matrices (OperacionesMatricesPR.c)

Construir un programa que lea por teclado dos matrices rectangulares de hasta 5 filas por 5 columnas, y que calcule (si ello es posible) la suma y el producto de las mismas y lo imprima en pantalla. Las dimensiones de cada matriz (nº de filas y nº de columnas) también se introducirán por teclado, pudiendo ser diferentes.

https://es.wikipedia.org/wiki/Multiplicaci%C3%B3n_de_matrices



**Datos de prueba**

Matriz primera (3x3)

     1    2    3         	
     4    5    6         	
     7    8    9         	

Matriz segunda (3x3)

   	1    1    1
   	2    2    2
   	3    3    3


Suma de matrices:

	 1    2    3         1    1    1         2    3    4
	 4    5    6    +    2    2    2   =     6    7    8
	 7    8    9         3    3    3        10   11   12

Producto de matrices:

	 1    2    3         1    1    1        14   14   14
   	 4    5    6    *    2    2    2   =    32   32   32
     7    8    9         3    3    3        50   50   50


Matriz primera (3x5):

    1    1    1    1    1    
    1    1    1    1    1   
    1    1    1    1    1     
                              
                              
Matriz segunda (5x2):

    2    2 
    2    2 
    2    2 
    2    2 
    2    2 

Suma de matrices: no se pueden sumar.

Producto de matrices:

    1    1    1    1    1         2    2        10   10
    1    1    1    1    1    *    2    2   =    10   10
    1    1    1    1    1         2    2        10   10
                                  2    2     
                                  2    2




[( - ```  ```   ](../PR8_resuelta/OperacionesMatricesPR.c)[[link privado]](https://github.com/24-25-Programacion-44101107/_PracticasLaboratorioPrivado/blob/main/PR8_resuelta/OperacionesMatricesPR.c)


____________________________________________________
## Ejercicios a completar  de forma NO PRESENCIAL
____________________________________________


### **Ejercicio 3.** Estudio de polución (PolucionPR.c)

Considerar las siguientes estructuras de datos para representar una imagen digital obtenida mediante un satélite correspondiente a una zona rectangular de una ciudad determinada:


La imagen está dividida en pequeños cuadrados (píxeles) donde se almacena un valor real comprendido entre 0 y 1, el cual es proporcional a la polución por $CO_2$ en dicha zona. Construir un programa que lea por teclado una imagen y que imprima en pantalla las coordenadas de los píxeles con valores de contaminación superiores en un 25% al valor de la polución media.

**Datos de prueba**
	Pruebas con NF=NC=3
	
	Datos de Entrada:
    	    1     2     3
  	1 0.130 0.368 0.926
  	2 0.666 0.949 0.119
  	3 0.383 0.568 0.062

	Polución media: 0.464
	Pixeles con polución superior al 25% de la media (0.579):
 		(1,3) (2,1) (2,2)        

	Datos de Entrada:
    	    1     2     3
  	1 0.308 0.977 0.589
  	2 0.832 0.450 0.149
  	3 0.209 0.411 0.586

	Polución media: 0.501
	Pixeles con polución superior al 25% de la media (0.627):
 		(1,2) (2,1)

La estrategia de prueba en este caso será distinta, probar se ejecutará al final 

[( - ```  ```   ](../PR8_resuelta/PolucionPR.c)[link privado](https://github.com/24-25-Programacion-44101107/_PracticasLaboratorioPrivado/blob/main/PR8_resuelta/PolucionPR.c)
