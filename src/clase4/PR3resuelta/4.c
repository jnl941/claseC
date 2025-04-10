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
        posicion = contador / 2 - 1;
    } else {
        // Si es impar, insertar a la izquierda o derecha del centro según el valor de i
        if (i <= 5) {
            posicion = contador / 2 - 1;  // A la izquierda del centro
        } else {
            posicion = contador / 2;      // A la derecha del centro
        }
    }
    
    // Construir el nuevo número con el dígito insertado
    int potencia = 1;
    for (int j = contador + 1; j >= 0; j--) {
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