# Práctica 7: Estructuras de Datos. vectores 

_________________________
## Ejercicios a completar de forma PRESENCIAL
____________________________________________

### **1.** Anotar número de lotería primitiva - EJERCICIO MÍNIMO REQUERIDO (PrimitivaVectorPR.c)

Construir un programa en C que solicita al usuario ingresar 6 números para la primitiva, verifica que estén dentro del rango permitido y que no se repitan, los almacena en un vector y luego ordena el vector. Basta con completar lo que falta en el siguiente código:

```c
#include <stdio.h>
#include "../.vscode/test/TEST.h"

#define MAX 6 
typedef int tipo_vector[MAX];
extern void PROBAR();

int existeEnArray(int num, tipo_vector array);
void ordenarArray(tipo_vector array);

int main(int argc, char *argv[])
{
    INICIO_TEST();
    if (argc > 1) PROBAR(); 

    tipo_vector numerosPrimitiva={0,0,0,0,0,0};

    printf("Ingresa 6 números para la primitiva (entre 1 y 49, sin repetir):\n");
    
   // COMPLETAR

    ordenarArray(numerosPrimitiva);

    // Mostrar el array ordenado
    printf("\nNúmeros ordenados de la primitiva:\n");

   // COMPLETAR colocando los PRINT_TEST apropiados segun  los test
   
    printf("\n");

    FIN_TEST();
    return 0;
}

// Función para verificar si un número ya existe en el array
int existeEnArray(int num, tipo_vector array) {
// COMPLETAR
}

void ordenarArray(tipo_vector array) {
    int temp;
    for (int i = 0; i < MAX - 1; ++i) {
        for (int j = i + 1; j < MAX; ++j) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
```

### **2.** Derivación polinomio (DerivadaPolinomioPR.c)

Considere la siguiente representación de un polinomio mediante un vector de coeficientes:

```c
#define	MAX 100	// Grado máximo del polinomio 

typedef double tipo_polinomio[MAX];
```

Ej:   P=$x^4-8x^2+6x-10$

|  0  | 1 | 2  | 3 | 4 | 5 | 6 | ... |   | 100 |
|:---:|:-:|:--:|:-:|:-:|:-:|:-:|:---:|:-:|:---:|
| -10 | 6 | -8 | 0 | 1 | 0 | 0 |  0  | 0 |  0  |


Construir un programa para derivar polinomios, que lea por teclado el grado (máximo 99) y los coeficientes del polinomio a derivar, y que imprima en pantalla el polinomio resultante, que también debe almacenarse sobre un vector, puesto que es un polinomio de un grado menos. Ejemplo:

 $dP/dx=4x^3-16x+6$

| 0 |  1  | 2 | 3 | 4 | 5 | 6 | ... |   | 100 |
|:-:|:---:|:-:|:-:|:-:|:-:|:-:|:---:|:-:|:---:|
| 6 | -16 | 0 | 4 | 0 | 0 | 0 |  0  | 0 |  0  |


**Datos de prueba**

- $P=x^4-8x^2+6x-10$  es 
  $dP/dx=4x^3-16x+6$
- $P=10x^5+8x^4+x$ es
	$dP/dx=50x^4+32x^3+1$
- $P=0$ es
	$dP/dx=0$

En este ejemplo se utiliza otra forma de realizar la prueba, para ello la función de prueba se ejecutará al final y además el archivo de casos de prueba es solo instrumental, tiene un contenido fijo para marcar que se ejecutará la prueba.

En este caso la función probar recibirá ambos vectores como argumento de la forma: 
```c
extern void PROBAR(double poinomio[], double derivado[], int grado)
```

Será llamada usando los nombres de variables definidos por el estudiante para cada argumento  justo al final de ```main``` de la forma 

```c
....
PRINT_TEST("PROBAR");  // sirve para validar sobre las variables.
if (argc > 1)   probar(<variable polinomio>, <variable vector derivada>, <grado>); 
FIN_TEST();
```

### **3.** Contar duplicados (ContarDuplicadosPR.c)

Construya un programa en C que, para un vector de hasta 100 enteros en el intervalo [1, 100], indique cuántos números se repiten, especificando cuáles son y cuántas veces se repite cada uno.

Aunque no es estrictamente necesario, dado que se trata de una práctica sobre vectores de datos, se debe utilizar un vector del mismo tipo tanto para almacenar los datos base como los resultados. Es decir, la cantidad de veces que se repite cada número debe guardarse en un segundo vector de 100 enteros indexado por posición.

En este vector de conteos, la posición i representa el número i + 1. Por ejemplo:

- Si en la posición 5 hay un 1, significa que el número 6 aparece una vez en el vector de datos.

- Si en la posición 7 hay un 5, significa que el número 8 aparece cinco veces.

Este vector de conteos debe ser recorrido para mostrar los números que se repiten y la cantidad de veces que lo hacen.

En cuanto a la estructura del programa, se debe aplicar el modelo Entrada, Proceso, Salida, de la siguiente manera:

- Entrada: una función llamada leerVector debe leer los datos del vector hasta que se ingrese un 0 (el cual no debe almacenarse). Si el valor ingresado es negativo o mayor que 100, no debe incluirse en el vector. Esta función también debe devolver la cantidad de elementos válidos ingresados.

- Proceso: uno o varios módulos deben encargarse de generar el vector de conteos y de contar cuántos números se repiten.

- Salida: se deben mostrar los resultados, indicando los números que se repiten y cuántas veces lo hacen.

En este caso la función probar recibirá ambos vectores como argumento de la forma: 
```c
extern void probar(int raw[], int conteo[], int tam)
```
siendo ```raw``` el vector con los datos leídos a chequear, ```conteo``` el vector con el número de repetidos en el vector y ```tam``` el número de elementos leídos sobre ```raw```.

Será llamada tras realizar el conteo utilizando los nombres de variables definidos por el estudiante para cada argumento  justo al final de ```main``` de la forma 
```c
....
if (argc > 1)   PROBAR(<variable vector>, <variable vector>, <variable tamaño>); 
FIN_TEST();
return (0);
```
PRINT_TEST no será necesario, están en el modulo probar

### **Ejercicio 4.** Análisis de datos (AnalisisDatosPR.c)

Construir un programa en C realice el análisis de los datos en bruto (raw) de un experimento, 10 datos y siempre 10. Se ha de realizar un análisis de la validez de esos datos, a través de un limite superior e inferior introducido por el usuario. Así se informará de cuantos datos son válidos, ofreciendo la media de los valores válidos, además de mostrar solo para los valores válidos su diferencia con la media, implica generar un nuevo conjunto de datos ```procesados``` con solo los datos válidos. Los datos se generarán aleatoriamente tal como se indica más abajo.

Para simplificar el proceso de prueba en caso de estar probando se utilizará una función de lectura desde teclado. El código se muestra a continuación

```c
#define N 10  // se podrá ajustar después cuando sepamos el tamaño de la muestra

typedef double tipo_vector[N];

...

void leerRaw(double raw[]);

extern void PROBAR(tipo_vector raw, tipo_vector procesados, double limiteInferior, double limiteSuperior);

int main(int argc, char *argv[])
{
    INICIO_TEST();

    tipo_vector raw = {0}; // Vector para almacenar los datos crudos
    tipo_vector procesados = {0}; // Vector para almacenar los datos procesados (válidos)
    
    // Generar el vector aleatorio sobre raw

  if (argc > 1) {  // cuando se esta probando se sobreescribe el vector raw
        leerRaw(raw);
    }

...

...
    fin_test();
    return 0
}
....
.....

void leerVector(tipo_vector v) {
    for (int i = 0; i < N; ++i) {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%lf", &v[i]);
    }
}
```

Para generar los datos de prueba se puede utilizar la siguiente función que genera números aleatorios entre dos valores, también es necesario inicializar el generador de números aleatorios en main

```c
#include<time.h>
.....

// Semilla para la generación de números aleatorios basada en el tiempo actual
    srand(time(NULL));

.....


float generarNumeroAleatorio(int minimo, int maximo) {
    // Genera un número aleatorio en el rango [minimo, maximo]
    int numeroAleatorio = rand() % (maximo - minimo + 1) + minimo;

    return numeroAleatorio;
}
```

a la que se llamará para generar números entre -100 y 100
```c
    for (int i = 0; i < N; ++i) {
        raw[i] = generarNumeroAleatorio(-100, 100);
    }
```