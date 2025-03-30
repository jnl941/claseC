# Práctica 3: Instrucción de control iteración I (Soluciones)

## Ejercicios a completar de forma PRESENCIAL

### **1.** Contar pares e impares -- EJERCICIO MÍNIMO REQUERIDO (ContarPR.c)

#### Solución:

```c
#include <stdio.h>

int main() {
    int pares = 0;       // Variable para contar los números pares 
    int nones = 0;       // Variable para contar los números impares
    int numero;          // Variable para almacenar cada número introducido por el usuario

    for (int contador = 0; contador < 10; contador++)
    {
        printf("Introduce un número entero: ");
        scanf("%d", &numero);
        
        // Comprobar si el número es par o impar
        if (numero % 2 == 0) {
            pares++;     // Si es divisible por 2, es par
        } else {
            nones++;     // Si no es divisible por 2, es impar
        }
    }

    printf("Hay %d pares y %d nones\n", pares, nones);
    
    return 0;
}
```

### **2.** Expansión de un gas ideal (ExpanGasPR.c)

#### Solución:

```c
#include <stdio.h>

int main() {
    float volumen_inicial, temp_inicial, temp_final;
    float aumento_volumen;
    
    // Leer volumen inicial
    printf("Introduce el volumen inicial (m^3): ");
    scanf("%f", &volumen_inicial);
    
    // Validar que el volumen sea positivo
    if (volumen_inicial <= 0) {
        printf("Error: El volumen debe ser positivo\n");
        return 1;
    }
    
    // Leer temperatura inicial
    printf("Introduce la temperatura inicial (K): ");
    scanf("%f", &temp_inicial);
    
    // Validar temperatura inicial (entre 0 y 6000K)
    if (temp_inicial < 0 || temp_inicial > 6000) {
        printf("Error: La temperatura inicial debe estar entre 0 y 6000K\n");
        return 1;
    }
    
    // Leer temperatura final
    printf("Introduce la temperatura final (K): ");
    scanf("%f", &temp_final);
    
    // Validar temperatura final (entre 0 y 6000K)
    if (temp_final < 0 || temp_final > 6000) {
        printf("Error: La temperatura final debe estar entre 0 y 6000K\n");
        return 1;
    }
    
    // Intercambiar temperaturas si la inicial es mayor que la final
    if (temp_inicial > temp_final) {
        float temp = temp_inicial;
        temp_inicial = temp_final;
        temp_final = temp;
    }
    
    // Mostrar encabezado de la tabla
    printf("\nTabla de expansión de volumen para un gas ideal:\n");
    printf("Temperatura (K) | Aumento de volumen (m^3)\n");
    printf("---------------|------------------------\n");
    
    // Generar la tabla
    for (float temp = temp_inicial; temp <= temp_final; temp += 5) {
        // Calcular el aumento de volumen usando la fórmula
        aumento_volumen = volumen_inicial * ((temp / temp_inicial) - 1);
        
        // Imprimir fila de la tabla
        printf("%.2f         | %.2f\n", temp, aumento_volumen);
        
    }
    
    return 0;
}
```

### **3.** Coeficiente Correlación (CorrelacionPR.c)

#### Solución:

```c
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, y;
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0, sumY2 = 0;
    double r;
    
    // Leer el número de puntos
    printf("Introduce el número de puntos: ");
    scanf("%d", &n);
    
    // Validar que el número de puntos sea positivo
    if (n <= 0) {
        printf("Error: El número de puntos debe ser positivo\n");
        return 1;
    }
    
    // Leer las coordenadas de cada punto y calcular las sumas necesarias
    for (int i = 0; i < n; i++) {
        printf("Introduce la coordenada x del punto %d: ", i+1);
        scanf("%lf", &x);
        
        printf("Introduce la coordenada y del punto %d: ", i+1);
        scanf("%lf", &y);
        
        sumX += x;
        sumY += y;
        sumXY += x * y;
        sumX2 += x * x;
        sumY2 += y * y;
    }
    
    // Calcular el coeficiente de correlación
    double numerador = n * sumXY - sumX * sumY;
    double denominador = sqrt((n * sumX2 - sumX * sumX) * (n * sumY2 - sumY * sumY));
    
    // Evitar división por cero
    if (denominador == 0) {
        r = 0;  // No hay correlación si el denominador es cero
    } else {
        r = numerador / denominador;
    }
    
    printf("El coeficiente de correlación es: %.5lf\n", r);
    
    return 0;
}
```

## Ejercicios a completar de forma NO PRESENCIAL

### **Ejercicio 4.** Insertar Número (InsertarCentroPR.c)

#### Solución:

```c
#include <stdio.h>

int main() {
    int numero, i;
    int nuevo_numero = 0;
    int temp, contador = 0;
    int digitos[10];  // Array para almacenar los dígitos del número original
    
    // Leer el número original
    printf("Introduce un número entero positivo (2-8 dígitos): ");
    scanf("%d", &numero);
    
    // Validar que el número sea positivo
    if (numero <= 0) {
        printf("Error: El número debe ser positivo\n");
        return 1;
    }
    
    // Leer el dígito a insertar
    printf("Introduce el dígito a añadir (0-9): ");
    scanf("%d", &i);
    
    // Validar que el dígito sea de un solo dígito
    if (i < 0 || i > 9) {
        printf("Error: Debe ser un solo dígito (0-9)\n");
        return 1;
    }
    
    // Contar dígitos y almacenarlos en el array
    temp = numero;
    while (temp > 0) {
        digitos[contador] = temp % 10;
        temp /= 10;
        contador++;
    }
    
    // Validar que el número tenga entre 2 y 8 dígitos
    if (contador < 2 || contador > 8) {
        printf("Error: El número debe tener entre 2 y 8 dígitos\n");
        return 1;
    }
    
    // Determinar la posición de inserción
    int posicion;
    if (contador % 2 == 0) {
        // Si el número de dígitos es par, insertar en el centro
        posicion = contador / 2;
    } else {
        // Si es impar, insertar a la izquierda o derecha del centro según el valor de i
        if (i > 5) {
            posicion = contador / 2 + 1;  // A la izquierda del centro
        } else {
            posicion = contador / 2;      // A la derecha del centro
        }
    }
    
    // Construir el nuevo número con el dígito insertado
    int potencia = 1;
    for (int j = 0; j < contador + 1; j++) {
        if (j == posicion) {
            nuevo_numero += i * potencia;
            potencia *= 10;
        }
        
        if (j < contador) {
            nuevo_numero += digitos[contador - 1 - j] * potencia;
            potencia *= 10;
        }
    }
    
    printf("Nuevo número: %d\n", nuevo_numero);
    
    return 0;
}
```

### **Ejercicio 5.** Media y desviación típica (MediaDesPR.c)

#### Solución:

```c
#include <stdio.h>
#include <math.h>

int main() {
    float temperatura;
    float suma = 0, suma_cuadrados = 0;
    int n = 0;  // Contador de datos válidos
    float media, desviacion;
    
    printf("Introduce temperaturas entre -50 y 50 grados (-99 para terminar):\n");
    
    while (1) {
        scanf("%f", &temperatura);
        
        // Comprobar si es el valor de terminación
        if (temperatura == -99) {
            break;
        }
        
        // Validar que la temperatura esté en el rango correcto
        if (temperatura < -50 || temperatura > 50) {
            printf("Temperatura fuera de rango. Debe estar entre -50 y 50 grados.\n");
            continue;  // Ignorar este valor y pedir el siguiente
        }
        
        // Acumular datos para cálculos
        suma += temperatura;
        suma_cuadrados += temperatura * temperatura;
        n++;
    }
    
    // Comprobar si se ingresaron datos válidos
    if (n == 0) {
        printf("NO DATOS\n");
        return 0;
    }
    
    // Calcular la media
    media = suma / n;
    
    // Calcular la desviación estándar
    desviacion = sqrt((suma_cuadrados - n * media * media) / n);
    
    // Mostrar resultados
    printf("Nº de datos válidos: %d\n", n);
    printf("Temperatura media: %.2f\n", media);
    printf("Desviación estándar: %.2f\n", desviacion);
    
    return 0;
}
```