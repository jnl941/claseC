# Práctica 4: Instrucción de control iteración II 


____________________________________________
## Ejercicios a completar de forma PRESENCIAL
___________________________________________


### **1.**  Triángulos de asteriscos - (PatronAstPR.c) EJERCICIO MÍNIMO REQUERIDO

Escriba un programa que imprima los siguientes patrones por separado, primero A y luego B, uno debajo del otro. Utilice bucles for para generar los patrones. Todos los asteriscos (*) deben imprimirse mediante una única instrucción ``printf`` de la forma ```printf("%s","*");``` Como entrada se dará el número máximo de asteriscos. Para la prueba recordad que cada `|` en la salida de los casos de prueba es un salto de línea "\n".

```
(A)         (B)                           
*            ********** 
**           *********  
***          ********   
****         *******    
*****        ******     
******       *****      
*******      ****              
********     ***               
*********    **                
**********   *                 
```

        PRINT_TEST("*");
  o bien
        PRINT_TEST("\n");           


[( - ```  ```   ](../PR4_resuelta/PatronAstPR.c)[[link privado]](https://github.com/24-25-Programacion-44101107/_PracticasLaboratorioPrivado/blob/main/PR4_resuelta/PatronAstPR.c) 


 


### **2.**  Rectángulo de asteriscos con grosor (RecGrosorPR.c)

Dibujar un rectángulo de asteriscos indicando el alto, el ancho y el grosor del borde. Se debe comprobar que se puede hacer un rectángulo con ese grosor del borde. El mínimo en alto y ancho es 4 y el máximo 14.
```
                printf("*");
                PRINT_TEST("*");
     // para prueba los espacios en blanco se sustituyen por un .
                printf(" ");
                PRINT_TEST(".");
```

[( - ```  ```   ](../PR4_resuelta/RecGrosorPR.c)[[link privado]](https://github.com/24-25-Programacion-44101107/_PracticasLaboratorioPrivado/blob/main/PR4_resuelta/RecGrosorPR.c) 






### **3.**  Centroide de un Polígono (CentroidePoligonoPR.c)
Diseñar un programa que calcule e imprima en pantalla el centroide de un objeto con forma poligonal (centroide: posición del centro de masas para un objeto con densidad uniforme). El número de lados del polígono (n) será leído previamente por teclado, comprobándose que es mayor o igual a 3, introduciéndose a continuación en orden la abscisa (x) y la ordenada (y) de cada uno de los n vértices del polígono.


![](fp4_centroide.png)




$A=\frac{1}{2} \cdot \sum_{k=1}^{n} {\left(x_k \cdot y_{k+1} - x_{k+1} \cdot y_k\right)}$

$X_{cent}=\frac{1}{6 \cdot A} \cdot \sum_{k=1}^{n} \left( x_{k+1}+x_k\right) \left( x_k \cdot y_{k+1}-x_{k+1} \cdot y_k \right)$

$Y_{cent}=\frac{1}{6 \cdot A} \cdot \sum_{k=1}^{n} \left( y_{k+1} + y_k \right) \left( x_k · y_{k+1}-x_{k+1}·y_k \right)$

con $\quad (x_{n+1},y_{n+1})=(x_1,y_1)$



**Datos de prueba**

| Nº de lados | Vértices                                               | Centroide     |
|-------------|--------------------------------------------------------|---------------|
| 3           | (0,0), (10,0), (10,10)                                 | (6.667,3.333) |
| 4           | (0,0), (10,0), (10,10), (0,10)                         | (5.000,5.000) |
| 8           | (0,0), (3,0), (3,1), (1,1), (1,2), (3,2), (3,4), (0,4) | (1.400,2.100) |





[( - ```  ```   ](../PR4_resuelta/CentroidePoligonoPR.c)[[link privado]](https://github.com/24-25-Programacion-44101107/_PracticasLaboratorioPrivado/blob/main/PR4_resuelta/CentroidePoligonoPR.c) 



____________________________________________________
## Ejercicios a completar  de forma NO PRESENCIAL
____________________________________________


### **Ejercicio 4.**  Área bajo la curva (IntegralDefinidaPR.c)

Diseñar un programa que integre la función **$f(x)=x^3-3x^2+5$** en un intervalo, esto es que calcule el área bajo la curva, mediante un proceso de muestreo en pasos discretos.



![](fp4_integral.png)



$\int_{a}^{b}  f(x)  dx = base \frac{f(a)f(a+base)}{2} + base \frac{f(a+base)f(a+2base)}{2}+ base \frac{f(a+2base)f(a+3base)}{2}+ \cdots+base \frac{f(a+(n-1)base)f(a+nbase)}{2}+ (b-(a+nbase)* \frac{f(a+nbase)f(b)}{2}$

$x_{izq}=a+(i-1)*base \qquad  \qquad        i=1,2,..,n,n+1$

$x_{der}=a+i*base     \qquad  \qquad \quad         i=1,2,..,n$

$x_{der}=b \qquad  \qquad  \qquad \qquad                           i=n+1$

$y_{izq}=x_{izq}x_{izq}x_{izq}-3x_{izq}x_{izq}+5$

$y_{der}=x_{der}x_{der}x_{der}-3x_{der}x_{der}+5$


$area trapezoide=base*(h_{izq}+h_{der})/2$




El programa permitirá seleccionar el intervalo de integración y el valor del incremento (base).

**Datos de prueba**

| a   | b | base | Area      |
|-----|---|------|-----------|
| 0   | 2 | 0.4  | 6.000000  |
|     |   | 0.3  | 5.995500  |
|     |   | 0.2  | 6.000000  |
|     |   | 0.1  | 6.000000  |
|     |   | 1e-2 | 6.000000  |
|     |   | 1e-5 | 6.000000  |
| 1.5 | 4 | 0.4  | 14.937250 |
|     |   | 0.3  | 14.794450 |
|     |   | 0.2  | 14.692450 |
|     |   | 0.1  | 14.631250 |
|     |   | 1e-2 | 14.609594 |
|     |   | 1e-5 | 14.609375 |



[( - ```  ```   ](../PR4_resuelta/IntegralDefinidaPR.c)[[link privado]](https://github.com/24-25-Programacion-44101107/_PracticasLaboratorioPrivado/blob/main/PR4_resuelta/IntegralDefinidaPR.c) 
