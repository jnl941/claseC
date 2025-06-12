/*
2.- (1,5) En el siguiente ejemplo la suma de dos números complejos se ha realizado 
utilizando dos funciones: una que devuelve un complejo que llama a otra que rellena 
el complejo con contenido. Completar la implementación de ambas y sus llamadas considerando 
que desde el programa principal solo puede llamar a la función suma.
*/
#include <stdio.h>

typedef struct {
    float real;
    float imag;
} tipo_complejo;

void suma_porpartes(float a, float b, float c, float d, tipo_complejo *r) {
    printf("Suma por partes: %.2f + %.2fi y %.2f + %.2fi\n", a, c, b, d);
    r->real = a + b;
    r->imag = c + d;

}

tipo_complejo suma(tipo_complejo a, tipo_complejo b) {
    tipo_complejo resultado;
    printf("Suma de partes: %.2f + %.2fi y %.2f + %.2fi\n", a.real, a.imag, b.real, b.imag);
    suma_porpartes(a.real, b.real, a.imag, b.imag, &resultado);
    return resultado;
}
// Num Complejo= Parte Real y Parte Imaginaria
// Complejo = a + bi
// a = float = real
// b = float = imag

int main() {
    tipo_complejo num1, num2, resultado_suma;
    scanf("%f %f", &num1.real, &num1.imag);
    scanf("%f %f", &num2.real, &num2.imag);
    printf("Números complejos ingresados: %.2f + %.2fi y %.2f + %.2fi\n", num1.real, num1.imag, num2.real, num2.imag);
    resultado_suma = suma(num1, num2);
    
    printf("La suma de los números complejos es: %.2f + %.2fi\n", resultado_suma.real, resultado_suma.imag);
    return 0;
}
