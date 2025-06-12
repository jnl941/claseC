
#include <stdio.h>

// Se hace la evaluación de izquierda a derecha:
    // 1. Primero se evalua ++i && ++j -> (++i y ++j)
        // 1. ++i: Se evaluará primero, i= -3 (true), luego se incrementa a -2
        // 2. ++j: Se evaluará primero, i= 2 (true), luego se incrementa a 3
        // 3. -3 && 2: true (1)
    // 2. Luego se evalua true (1) || ++k -> (1 o ++k)
        // 1. true (1) || ++k: Se evalúa el lado derecho, pero como el izquierdo ya es true, no se evalúa ++k
        // 2. ++k: No se ejecuta, k permanece en 0
    // 3. m = 1 (true)

int main() {
    int i=-3, j=2, k=0, m; 
    m = ++i && ++j || ++k;
    printf("%d, %d, %d, %d\n", i, j, k, m); 
    return 0;
}