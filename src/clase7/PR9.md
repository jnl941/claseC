
# Práctica 9: Estructuras de datos. Registros 


_________________________
## Ejercicios a completar  de forma PRESENCIAL
____________________________________________


### **1.** Registro de tiempos - EJERCICIO MÍNIMO REQUERIDO (RegistroTiemposPR.c)

 Construir un programa lo más modular posible que lea por teclado dos registros de tiempo y calcule e imprima en pantalla el tiempo transcurrido desde el primer registro hasta el segundo. Cada registro de tiempo vendrá dado en hora, minutos, segundos y centésimas de segundo (llamando a los campos del registro ```h  mn  sg  ct```), los cuales serán leídos separadamente por teclado y adecuadamente validados (0<=hora<24, 0<=minutos<60, 0<=segundos<60, 0<=centésimas de segundo<100). El resultado se presentará en pantalla con el mismo formato. 
 
 Nota: si el segundo registro de tiempo es anterior al primero, considerar que se trata del día siguiente. 
 


**Datos de prueba**

| Registro inicial | Registro final | Tiempo transcurrido |
|------------------|----------------|---------------------|
| 00:00:00.00      | 18:15:34.23    | 18:15:34.23         |
| 20:05:34.26      | 22:10:40.12    | 02:05:05.86         |
| 23:50:00.00      | 02:01:28.99    | 02:11:28.99         |


[( - ```  ```   ](../PR9_resuelta/RegistroTiemposPR.c)[[link privado]](https://github.com/24-25-Programacion-44101107/_PracticasLaboratorioPrivado/blob/main/PR9_resuelta/RegistroTiemposPR.c) 





### **2.** Figuras geométricas (FigurasPR.c)


Construir un programa que utilice un registro para almacenar información sobre una de 3 posibles figuras geométricas (círculo, rectángulo y triángulo). Para el círculo, el registro debe almacenar el radio; para un rectángulo, debe almacenar las longitudes de dos lados adyacentes; y para el triángulo, debe almacenar las longitudes de sus tres lados (donde cada lado debe tener menor longitud que la suma de las otras dos longitudes). El programa debe leer por teclado el tipo de figura (mediante un carácter: ‘C’, ‘R’, ‘T’) y sus correspondientes valores numéricos, y a continuación, calcular e imprimir en pantalla el área de la figura.

Nota:	   
            
- área rectángulo  -> 	base * altura
- área círculo	 -> 	PI * radio<sup>2</sup>
- área triángulo	 ->	(s * (s-a) * (s-b) * (s-c))<sup>1/2</sup>, donde s=(a+b+c)/2


**Datos de prueba**

| Figura     | Parámetros (cm)                                            | Área ($cm^2$)        |
|------------|------------------------------------------------------------|----------------------|
| Círculo    | Radio:            3                                        | 28.27                |
| Círculo    | Radio:           -1                                        | Círculo no válido    |
| Rectángulo | Base: 20, Altura:   30                                     | 600.00               |
| Rectángulo | Base:   20, Altura:       0                                | Rectángulo no válido |
| Triángulo  | Lado 1:   4, Lado 2:          5, Lado 3:          3        | 6.00                 |
| Triángulo  | Lado 1:          4. Lado 2:          8, Lado 3:          3 | Triángulo no válido  |


[( - ```  ```   ](../PR9_resuelta/FigurasPR.c)[[link privado]](https://github.com/24-25-Programacion-44101107/_PracticasLaboratorioPrivado/blob/main/PR9_resuelta/FigurasPR.c) 



____________________________________________________
## Ejercicios a completar  de forma NO PRESENCIAL
____________________________________________


### **Ejercicio 3**. Lista de figuras (ListaFigurasPR.c)

Extender el ejercicio 2 para que el programa mantenga datos de hasta 10 figuras geométricas. Además, se debe implementar una función que analice la lista de forma que se obtenga como salida el número total de figuras de cada tipo (que se deben guardar en un registro tipo_analisis) y la suma de las áreas de las figuras de cada tipo.

```c
typedef struct{
	int circulos;
	int triangulos;
	int rectangulos;
} tipo_analisis;
```

[( - ```  ```   ](../PR9_resuelta/ListaFigurasPR.c)[[link privado]](https://github.com/24-25-Programacion-44101107/_PracticasLaboratorioPrivado/blob/main/PR9_resuelta/ListaFigurasPR.c)

