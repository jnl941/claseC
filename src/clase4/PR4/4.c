#include <stdio.h>
#include <math.h>

// Función para calcular f(x) = x^3 - 3x^2 + 5
double f(double x) {
    return x*x*x - 3*x*x + 5;
}

int main() {
    double a, b, base;
    double area = 0.0;
    
    // Leer los límites de integración y el tamaño del incremento
    printf("Introduce el límite inferior (a): ");
    //a = 0;
    scanf("%lf", &a);
    
    //b = 10;
    printf("Introduce el límite superior (b): ");
    scanf("%lf", &b);
    

    printf("Introduce el tamaño del incremento (base): ");
    scanf("%lf", &base);
    
    // Validar parámetros
    // que a < b y base > 0 -> Chema
    while (b <= a || base <= 0)
        // COND1   o  COND2
        // TRUE    || FALSE = TRUE
        // FALSE   || TRUE = TRUE
    {
        //VUELVO AQUI
        if(b <= a){
            printf("ERROR: el limite inferior no puede ser mayor que el superior\n");
            scanf("%lf", &a);
            scanf("%lf", &b);
        }
        if(base <= 0){
            printf("ERROR : el incremento debe ser positivo\n"); 
            scanf("%lf", &base);
        }  
    }
    
   
    // Calcular el número de intervalos completos -> Angel
    // (cuantos saltos vamos a dar desde a hasta b)
    int intervalos = (b-a) / base;
    // Calcular el área usando el método de los trapecios
        // Calcular area de los trapecios
        // area = base * (f(a) + f(a + base)) / 2; -> Angel
    for(int n = 0; n < intervalos; n++){
        // Intervalo 0 = desde [a + (base*0)] hasta   [a + (base*1)]
        // Intervalo 0 = desde [a * (base * 0)] hasta [(a + base)*1]
        
        // Intervalo 1 = desde [a + (base*1)] hasta [a + (base*2)]
        // Intervalo 2 = desde [a + (base*2)] hasta [a + (base*3)]
        area += base * (f(a + (base * n)) + f(a + (base*(n+1)))) / 2;
        
        // Intervalo 1 = desde [a * 1] hasta [(a + base)*2]
        // Intervalo 2 = desde [a * 2] hasta [(a + base)*3]
    }
       
    
    // Añadir el área del último trapecio si queda un residuo -> Chema
    
    // area += residuo * (f(x_izq) + f(b)) / 2;
    // residuo = ?? 


    //SOLO SI HAY RESIDUO
    //intervalos-1 = limite inferior del ultimo intervalo
    //intervalos = limite superior del ultimo intervalo
    float x_izq = a + (base * (intervalos));
    float residuo = b - (a + (intervalos) * base);
    printf("residuo: %.2f\n", residuo);
    printf("x_izq: %.2f\n", x_izq);
    printf("b: %.2f\n", b);
    if(0 < residuo){
        //sumarlo al area
        // x_izq += 10 residuo -> Incorrecto
        // area = base * (f(x_izq) + f(b)) / 2; -> Angel
        area += residuo * (f(x_izq) + f(b)) / 2;
    }
    
    // Mostrar resultado
    printf("El área bajo la curva f(x) = x^3 - 3x^2 + 5 en [%.2f, %.2f] es: %.6f\n", a, b, area);
    
    return 0;
}