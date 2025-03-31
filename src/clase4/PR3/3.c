#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x, y;
    float sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0, sumY2 = 0;
    float coefCorrelacion;


    
    // Leer el número de puntos
    printf("Introduce el número de puntos: ");
    scanf("%d", &n);
    
    // Validar que el número de puntos sea positivo
    
    // Leer las coordenadas de cada punto y calcular las sumas necesarias

    // n = 2;
    // (5, 7), (3, 2)
    //   0       1

    for (int i = 0; i < n; i++) { // i = 0, i = 1
        printf("Introduce la coordenada x del punto %d: ", i+1);
        scanf("%f", &x); // 3
        
        printf("Introduce la coordenada y del punto %d: ", i+1);
        scanf("%f", &y); // 2

        // Acumulacion de las sumas X
        // i = 0 -> Punto 0 (5, 7) -> x = 5, y = 7, sumX = 0 + 5 = 5
        // i = 1 -> Punto 1 (3, 2) -> x = 3, y = 2, sumX = 5 + 3 = 8
        sumX = sumX + x;
        
        // Acumulacion de las sumas Y
        sumY = sumY + y;
        
        // Acumulacion de las sumas X*Y
        sumXY = sumXY + x * y;
        
        // Acumulacion de las sumas X*X
        sumX2 = sumX2 + x * x;

        // Acumulacion de las sumas Y*Y
        sumY2 = sumY2 + y * y;
    }
    
    // Calcular el coeficiente de correlación (división entre numerador y denominador):
        // numerador  = num puntos * (sumas XY) - ((sumas X) * (sumas Y)) -> Chema
        float numerador = n * sumXY - (sumX *sumY);
        // denominador = raizCuadrada( (num puntos * (sumas X*X) - (sumas X) * (sumas X)) 
        //                           -> * (num puntos * (sumas Y*Y) - (sumas Y) * (sumas Y)) ) -> Angel
        float denominador = sqrt((n * sumX2 - sumX * sumX)*(n * sumY2 - sumY * sumY));
        //GUIA = raizCuadrada = sqrt()
        
        // Evitar división por cero:
            // Si el denominador es 0, coefCorrelacion es 0 -> Chema
            //denominador = 0
            //    0

            //denominador (1) == 0
            // FALSE

            //denominador (0) == 0
            // TRUE
            
        if (denominador == 0)
        { coefCorrelacion = 0;
            /* code */
        } else {
            // Si no, coefCorrelación = División entre numerador y denominador -> Angel
            coefCorrelacion = numerador / denominador;
        }

    
    printf("El coeficiente de correlación es: %f\n", coefCorrelacion);
    
    return 0;
}