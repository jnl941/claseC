#include <stdio.h>
#include <math.h>

int main() {
    float temperatura;
    float suma_valores = 0, suma_cuadrados = 0;
    int n = 0;  // Contador de datos válidos
    float media, desviacion;
    
    printf("Introduce temperaturas entre -50 y 50 grados (-99 para terminar):\n");
    
    // media = suma_valores / n
    // desviacion = sqrt((suma_valores^2 - n * media^2) / n)
    // pow(numero, potencia) -> potencia de un numero


    //Bucle para ir leyendo uno a uno los valores de la temperatura, los scanf
    while (1) {
        scanf("%f", &temperatura);
        
        if(temperatura == -99){
            break;
        }
        // Comprobar si es el valor de terminación -99 -> Angel
            // break; -> Salir de un bucle
        
        // Validar que la temperatura esté en el rango correcto (-50 y 50) -> Chema
            // continue; -> Ignorar esta iteracion y empezar de nuevo el bucle
        if(temperatura < -50 || temperatura > 50) { // -51
             //TRUE          y       FALSE
            continue;
        }
        // Acumular datos para cálculos -> Angel y Chema
            // sumar los datos
        suma_valores = temperatura + suma_valores;
            // sumar los cuadrados de los datos
        suma_cuadrados += temperatura * temperatura;
        printf("La temperatura es: %f\n", temperatura);
        printf("La suma de las temperaturas es: %f\n", suma_valores);

        // Contar datos validos
        n++;
    }
    // -> BREAK SALTA AQUI
    

    // media = suma_valores / n
    // desviacion = sqrt((suma_valores^2 - n * media^2) / n)
    // pow(numero, potencia) -> potencia de un numero
    
    // Calcular la media -> Angel
    media = suma_valores / n;
    // Calcular la desviación estándar -> Chema
    desviacion = sqrt((suma_cuadrados - n*pow(media,2)) / n);
    // Mostrar resultados
    //  √(∑(Ti² - n*Tmedia²)/n)
    printf("Nº de datos válidos: %d\n", n);
    printf("Temperatura media: %.2f\n", media);
    printf("Desviación estándar: %.2f\n", desviacion);
    // -lm
    return 0;
}