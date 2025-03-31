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
        // 10 si al dividir por dos da un numero entero
        // 10 / 2 = 5 -> Par


        // 11 % 2 = 1
        // 10 % 2 = 0
        // 9 % 2 = 1
        // 8 % 2 = 0
        // numero
        if(numero % 2 == 0){
            pares++;
            //pares = pares + 1;
        } else {
            nones++;
        }
        


            // Si es divisible por 2, es par -> aumentar el contador de pares
        

        // Comprobar si el número no es par
            // Si no es divisible por 2, es impar

    }

    printf("Hay %d pares y %d nones\n", pares, nones);
    
    return 0;
}