

# Práctica 3: Instrucción de control iteración I 


____________________________________________________
## Ejercicios a completar  de forma PRESENCIAL
____________________________________________

### **1.**   Contar pares e impares  -- EJERCICIO MÍNIMO REQUERIDO (ContarPR.c)

Partiendo del siguiente código añadir las instrucciones necesarias para contar cuantos de los 10 números leídos por teclado son pares y cuantos son impares. Recuerde incluir las condiciones para el test. (    PRINT_TEST(" %d %d ", pares, nones);  )

```c
int pares = 0;       // Variable para contar  los números pares 
int nones = 0;       // Variable para contar  los números pares
int numero;         // Variable para almacenar cada número introducido por el usuario

for (int contador = 0; contador < 10; contador++)
{
    printf("Introduce un número entero: ");
    scanf("%d", &numero);
}

printf("Hay %d pares y %d nones  \n", pares, nones);
```

| Entrada                                        | Salida esperada          |
|------------------------------------------------|--------------------------|
| 2 4 6 8 10 12 14 16 18 20                      | Hay 10 pares y 0 impares |
| 1 3 5 7 9 11 13 15 17 19                       | Hay 0 pares y 10 impares |
| 2 3 4 5 6 7 8 9 10 11                          | Hay 5 pares y 5 impares  |
| 0 0 0 0 0 0 0 0 0 0                            | Hay 10 pares y 0 impares |
| -2 -4 -6 -8 -10 -12 -14 -16 -18 -20            | Hay 10 pares y 0 impares |
| 1 2 3 4 5 6 7 8 9 10                           | Hay 5 pares y 5 impares  |
| 11 12 13 14 15 16 17 18 19 20                  | Hay 5 pares y 5 impares  |
| -1 -2 -3 -4 -5 -6 -7 -8 -9 -10	             |Hay 5 pares y 5 impares      |
| 0 1 0 2 0 3 0 4 0 5                            | Hay 7 pares y 3 impares  |
| 123 456 789 1011 1213 1415 1617 1819 2021 2223 | Hay 1 pares y 9 impares  |

[( - ```  ```   ](../PR3_resuelta/ContarPR.c)[[link privado]](https://github.com/24-25-Programacion-44101107/_PracticasLaboratorioPrivado/blob/main/PR3_resuelta/ContarPR.c) 


### **2.**   Expansión de un gas ideal (ExpanGasPR.c)


La expansión de un gas ideal conforme se calienta hasta una temperatura Kelvin final, T<sub>F</sub>, desde una temperatura Kelvin inicial,   T<sub>0</sub>, puede aproximarse usando la fórmula



Aumento_de_volumen= $V_0 ((T/T_0)-1)$

donde 
 V<sub>0</sub>   es el volumen inicial del gas a la temperatura  T<sub>0</sub>
y T va variando de 5 en 5 hasta $T_f$
Usando esta fórmula, escribe un programa en C que despliegue una tabla de volúmenes de expansión para un gas ideal que tiene un volumen inicial de X metros cúbicos (leídos por teclado y que deben ser positivos)
partiendo de una temperatura inicial leída y correctamente validada por teclado en grados Kelvin, hasta una temperatura final (también validada, contemplar el caso de t1 > t2). Los  incrementos de temperaturas para elaborar la tabla se fijan 5  grados.

Cualquier temperatura debe estar en el rango 0 grados Kelvin a 1.416808×10^(32) (Temperatura de Planck), pero por simplicidad consideraremos el máximo de temperatura como 6000 K.



| Caso | Volumen inicial (m^3) | Temperatura inicial (K) | Temperatura final (K) |
|------|-----------------------|-------------------------|-----------------------|
| 1    | 10.0                  | 300.0                   | 600.0                 |
| 2    | 8.5                   | 400.0                   | 200.0                 |
| 3    | 12.0                  | 500.0                   | 500.0                 |
| 4    | 15.0                  | 0.0                     | 100.0                 |
| 5    | 20.0                  | 5800.0                  | 6000.0                |
| 6    | 0.1                   | 1000.0                  | 3000.0                |
| 7    | 100.0                 | 2000.0                  | 4000.0                |
| 8    | 25.0                  | -50.0                   | 500.0                 |
| 9    | 30.0                  | 1000.0                  | 7000.0                |
| 10   | 18.0                  | 200.0                   | 2200.0                |



**Resultado**

Tabla de expansión de volumen para un gas ideal: para los valores de entrada T<sub>0</sub>=0 T<sub>f</sub>=40, Volumen 10 m^3. 

Temperatura (C) Volumen de expansión (m^3)
0                       0.00
5                       0.18
10                      0.37
15                      0.55
20                      0.73
25                      0.92
30                      1.10
35                      1.28
40                      1.46



**Resultado esperado**
Tabla de Longitudes de Expansión:


Temperatura (grados C) | Aumento de volumen
|       --|         --|
0         |              0.00
5         |              0.43
10        |              0.86
15        |              1.29
20        |              1.72
25        |              2.15
30        |              2.59
35        |              3.02
40        |              3.45


Nota sobre prueba:   
   PRINT_TEST(" %.2f %.2f \n"....) 

el simbolo | en los casos de prueba implica un salto de linea


[( - ```  ```   ](../PR3_resuelta/ExpanGasPR.c)[[link privado]](https://github.com/24-25-Programacion-44101107/_PracticasLaboratorioPrivado/blob/main/PR3_resuelta/ExpanGasPR.c) 


  
### **3.**  Coeficiente  Correlación (CorrelacionPR.c)

Construir un programa que calcule e imprima en pantalla el coeficiente de correlación r de un conjunto de n puntos bidimensionales de datos reales (xi,yi) introducidos por teclado. El número de puntos del conjunto (n) será leído previamente por teclado, introduciéndose a continuación la abscisa (x) y la ordenada (y) de cada punto.


$\frac{n \sum_{i=1}^n x_i y_i - \left( \sum_{i=1}^n x_i \right) \left( \sum_{i=1}^n y_i \right)}
{\sqrt{\left( n \sum_{i=1}^n x_i^2 - \left( \sum_{i=1}^n x_i \right)^2 \right) 
\left( n \sum_{i=1}^n y_i^2 - \left( \sum_{i=1}^n y_i \right)^2 \right)}}
$

        PRINT_TEST(" %.5lf", r);

**Datos de prueba**

| Caso de Prueba | n  | Coordenadas de los Puntos (x, y)       | Salida Esperada |
|----------------|----|----------------------------------------|-----------------|
| 1              | 3  | (1, 2), (2, 3), (3, 4)                 | 1.0             |
| 2              | 3  | (1, 1), (2, 2), (3, 1)                 | 0.0             |
| 3              | 4  | (1, 2), (2, 1), (3, 2), (4, 1)         | 0.0             |
| 4              | 3  | (1, 2), (2, 3), (3, 5)                 | 0.98198         |
| 5              | 5  | (1, 1), (2, 2), (3, 3), (4, 4), (5, 5) | 1.0             |
| 6              | 2  | (1, 2), (2, 2)                         | 0.0             |
| 7              | 0  | N/A                                    | Error           |
| 8              | -3 | N/A                                    | Error           |
|



[( - ```  ```   ](../PR3_resuelta/CorrelacionPR.c)[[link privado]](https://github.com/24-25-Programacion-44101107/_PracticasLaboratorioPrivado/blob/main/PR3_resuelta/CorrelacionPR.c) 


____________________________________________________
## Ejercicios a completar  de forma NO PRESENCIAL
____________________________________________

### **Ejercicio 4.**  Insertar Número (InsertarCentroPR.c)

Escriba un programa en C que lea un número entero positivo de entre 2 y 8  dígitos (por ejemplo, numero) y un número entero positivo de un dígito a añadir (i). Como resultado se generará un nuevo entero que cumple que si el número de dígitos del  número original es par  el dígito i se coloca en la posición central del nuevo entero.  Si el número de dígitos del número entero original es impar se añade i a la izquierda de  central si es mayor que 5 sino se coloca a la derecha del dígito central.


 
**Datos de prueba**

| numero | i | nuevo numero |
|--------|---|--------------|
| 123    | 0 | 1203         |
| 123    | 9 | 1923         |
| 11111  | 2 | 111211       |
| 11111  | 9 | 119111       |
| 1111   | 2 | 11211        |
| 1111   | 9 | 11911        |



[( - ```  ```   ](../PR3_resuelta/InsertarCentroPR.c)[[link privado]](https://github.com/24-25-Programacion-44101107/_PracticasLaboratorioPrivado/blob/main/PR3_resuelta/InsertarCentroPR.c) 





### **Ejercicio 5.**  Media y desviación típica (MediaDesPR.c)

Diseñar un programa que lea por teclado un conjunto de datos de temperatura en el intervalo [-50,+50], y que calcule su media aritmética y su desviación estándar. El tamaño del conjunto de datos no se especifica a priori, finalizándose la entrada de datos con el valor –99.

$T_{media}=  (\sum T_i)/n$ 


asdfasdf


$desvia = \sqrt{(\sum |T_i-T_{media})^2|)/n)}$ = $\sqrt{(\sum(T_i^2)-n*T_{media}^2/n)})$

**Datos de prueba**

Datos de E:	4, 5, 5, 6, 5, 5, 5, 5,-99

- Nº de datos válidos: 8

- $T_{media}$= 5.00

- desvia = 0.50

Datos de E:	-5,0,5,10,-99

- Nº de datos válidos: 4

- $T_{media}$= 2.50

- desvia = 5.59

Datos de E:	-60,51,-99

- Nº de datos válidos: 0

PRINT_TEST("%10.2f %10.2f %10d", media, de, n);
PRINT_TEST("NO DATOS");


[( - ```  ```   ](../PR3_resuelta/MediaDesPR.c)[[link privado]](https://github.com/24-25-Programacion-44101107/_PracticasLaboratorioPrivado/blob/main/PR3_resuelta/MediaDesPR.c) 
