# Ejemplos y Casos de Prueba para los Ejercicios

## Ejercicio 0: Menu Simple
### Ejemplo de Salida
```
      MENU DE OPCIONES
      ================

      1.- Mostrar mensaje hola mundo
      2.- Contar tiradas 
      3.- Mostrar Fibonacci
      4.- Finalizar ejecucion

      Introduzca opcion: 
```
### Casos de Prueba
- Opción 1: Debe mostrar "Hola Mundo".
- Opción 2: Ingresar un valor entre 3 y 18 para contar tiradas ganadoras.
- Opción 3: Debe mostrar la sucesión de Fibonacci.
- Opción 4: Debe finalizar la ejecución.

---

## Ejercicio 1: Menu de Dos Números
### Ejemplo de Salida
```
      MENU DE OPCIONES
      ================

      1.- Calcular MCD
      2.- Calcular Máximo
      3.- Cambiar Números
      4.- Finalizar ejecución

      Introduzca opción: 
```
### Casos de Prueba
- Ingresar números: 12 y 15.
  - Opción 1: Debe mostrar MCD(12, 15) = 3.
  - Opción 2: Debe mostrar el máximo = 15.
- Cambiar números a 8 y 20.
- Opción 4: Debe finalizar la ejecución.

---

## Ejercicio 2: Menu de Fechas
### Ejemplo de Salida
```
      MENU DE OPCIONES
      ================

      1.- Cambiar fecha
      2.- Sumar n días
      3.- Mostrar fecha
      4.- Finalizar ejecución

      Introduzca opción: 
```
### Casos de Prueba
- Fecha inicial: 01-01-2023.
- Opción 1: Cambiar a 15-03-2023.
- Opción 2: Sumar 10 días, debe mostrar 25-03-2023.
- Opción 3: Debe mostrar la fecha actual.
- Opción 4: Debe finalizar la ejecución.

---

## Ejercicio 3: Circunferencia de Tres Puntos
### Ejemplo de Salida
```
Ingrese las coordenadas de tres puntos no colineales:
Punto 1 (x1, y1): (0, 5)
Punto 2 (x2, y2): (5, 0)
Punto 3 (x3, y3): (0, -5)

Centro de la circunferencia: (0.00, 0.00)
Radio: 5.00
```
### Casos de Prueba
- Ingresar puntos: (0, 5), (5, 0), (0, -5).
  - Debe calcular y mostrar el centro (0.00, 0.00) y el radio 5.00.
- Probar con puntos colineales: (0, 0), (5, 5), (10, 10) debe indicar que están alineados.