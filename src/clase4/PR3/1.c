#include <stdio.h>

int main() {
    int pares = 0;       // Variable para contar los números pares 
    int nones = 0;       // Variable para contar los números impares
    int numero;          // Variable para almacenar cada número introducido por el usuario

    for (int contador = 0; contador < 10; contador++)
    {
        printf("Introduce un número entero: ");
        scanf("%d", &numero);
        
        // Comprobar si el número es par
            // Si es divisible por 2, es par

        // Comprobar si el número no es par
            // Si no es divisible por 2, es impar

    }

    printf("Hay %d pares y %d nones\n", pares, nones);
    
    return 0;
}