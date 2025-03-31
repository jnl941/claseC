#include <stdio.h>

int main() {
    float volumen_inicial, temp_inicial, temp_final, temp_cambio;
    float aumento_volumen;
    
    // Leer volumen inicial
    printf("Introduce el volumen inicial (m^3): ");
    scanf("%f", &volumen_inicial);
    
    // Validar que el volumen sea positivo -> Angel
    //Volumen es negativo, se convierta en positivo
    if(volumen_inicial <= 0){
        volumen_inicial = volumen_inicial * -1;
    }
    
    // Leer temperatura inicial
    printf("Introduce la temperatura inicial (K): ");
    scanf("%f", &temp_inicial);
    
    // Validar temperatura inicial (entre 0 y 6000K) -> Chema
    // Si la temperatura es menor a 0, se convierta en 0
    // Si la temperatura es mayor a 6000, se convierta en 6000


    if(temp_inicial < 0.001){
        temp_inicial = 0.001;
    }
    if(temp_inicial>6000){
        temp_inicial = 6000;
    }
    // Leer temperatura final
    printf("Introduce la temperatura final (K): ");
    scanf("%f", &temp_final);
    
    // Validar temperatura final (entre 0 y 6000K) -> Chema
    
    // Intercambiar temperaturas si la inicial es mayor que la final -> Angel
    // Tienes 2 vasos, uno con agua, otro con fanta
    // tercer vaso vacio
    
    if(temp_inicial > temp_final){
        temp_cambio = temp_inicial;
        temp_inicial = temp_final; 
        temp_final = temp_cambio;       
    }
    // Mostrar encabezado de la tabla
    printf("\nTabla de expansión de volumen para un gas ideal:\n");
    printf("Temperatura (K) | Aumento de volumen (m^3)\n");
    printf("---------------|------------------------\n");
    
    // Generar la tabla
    // Cada 5 grados de temperatura, se tiene que imprimir el aumento de volumen
    // CADA 5 GRADOS -> BUCLE FOR
    // for(variable inicializada; CONDICION; INCREMENTO)

    // for(temperatura; hasta temperatura final; incremento 5)
    
    // PRINTF(aumento_volumen)

    // Aumento de volumen = volumen_inicial * ((temp / temp_inicial) - 1);

    
    for (float temp = temp_inicial; temp <= temp_final; temp+=5) {
        aumento_volumen = volumen_inicial * ((temp / temp_inicial) - 1);
        printf("El aumento de volumen es %f\n", aumento_volumen);
    }

    /*
    Temperatura (K) | Aumento de volumen (m^3)
    ---------------|------------------------
    300.00         | 0.00
    305.00         | 0.17
    310.00         | 0.33
    315.00         | 0.50
    320.00         | 0.67
    325.00         | 0.83
    330.00         | 1.00
    335.00         | 1.17
    340.00         | 1.33
    345.00         | 1.50
    350.00         | 1.67
    */
        
    return 0;
}