#include <stdio.h>

int main() {
    int n;
    double x[100], y[100]; // Asumo un máximo de 100 vértices
    double area = 0.0, x_cent = 0.0, y_cent = 0.0;
    double termino;
    
    // Leer el número de lados del polígono
    
    
    // Validar que n >= 3 -> Angel
    while(n < 3){
        
        printf("Introduce el número de lados del polígono: ");
        scanf("%d", &n);
        if (n < 3){
            printf("Número de lados no válido, introduce otro número: \n");
        } 
    }
    
    
    // WHILE DESDE AQUI CHEMA
    while(area <= 0){
        for(int i = 0 ; i < n; i++){
            printf("Introduce la coordenada X del vertice [%d]\n", i);  
            scanf("%lf", &x[i]);
            printf("X[%d] = %lf\n", i, x[i]);
        }
        // Leer las coordenadas de los vértices -> Chema
        for(int i = 0 ; i < n; i++){
            printf("Introduce la coordenada Y del vertice [%d]\n", i);
            scanf("%lf", &y[i]);
            printf("Y[%d] = %lf\n", i, y[i]);
        }

        //Conectar ultimos puntos con los primeros
        x[n] = x[0];
        y[n] = y[0];

        // Calcular el área usando la fórmula: A = (1/2) · ∑(xₖ · yₖ₊₁ - xₖ₊₁ · yₖ)
        for(int i = 0; i <= n; i++){
            //x[i] = x[k]; 
            printf("X[%d] = %lf\n", i, x[i]);
            printf("Y[%d] = %lf\n", i, y[i]);
            area += (x[i] * y[i+1] - x[i+1] * y[i]) * 0.5;
            printf("Area: %lf\n", area);
        }
        if(area <= 0){
            printf("El área es %lf no puede ser negativa, introduce otro polígono\n", area);
        }

        // Calcular las coordenadas del centroide -> Angel y Chema
    /*
        El programa debe calcular el centroide usando las fórmulas:
        
        x_cent = (1/6A) · ∑((xₖ₊₁+xₖ)(xₖ · yₖ₊₁-xₖ₊₁ · yₖ))
        y_cent = (1/6A) · ∑((yₖ₊₁+yₖ)(xₖ · yₖ₊₁-xₖ₊₁ · yₖ))

    */
         

    // 10*5 + 10*7 + 10*8
        //Calcular x_cent -> Chema
    //    for(int i = 0; i <= n; i++){

    //     x_cent += 1/6*area * ((x[i+1]+x[i]) * (x[i] * y[i+1] - x[i+1] * y[i]));
    //     y_cent += 1/6*area * ((y[i+1]+y[i]) * (x[i] * y[i+1] - x[i+1] * y[i]));
    //    }

       // Calcular las coordenadas del centroide
        for (int i = 0; i < n; i++) {
            termino = x[i] * y[i+1] - x[i+1] * y[i];
            x_cent += (x[i+1] + x[i]) * termino;
            y_cent += (y[i+1] + y[i]) * termino;
        }

        // 10*5 + 10*7 + 10*8 = 10(5+7+8)
        
        
        x_cent = x_cent / (6 * area);
        y_cent = y_cent / (6 * area);
        //Calcular y_cent -> Angel
        
    }
    
    // Cerrar el polígono (el último punto se conecta con el primero) -> Chema
    //Array: x = {1,2,3,4,5}
    //Array: y = {1,2,3,4,5}
    //x[0] = 1;
    //x[3] = 4;

    
    // Calcular el área del polígono
    
        // Calcular el área usando la fórmula: A = (1/2) · ∑(xₖ · yₖ₊₁ - xₖ₊₁ · yₖ)
        //Calcular A -> Angel
        // Sumatoria
            // Bucle hasta tamaño
            // area += (x[k] * y[k+1] - x[k+1] * y[k]);
 


    // Asegurar que el área sea positiva -> Chema
    // area
    
    
    // Calcular las coordenadas del centroide -> Angel y Chema
    /*
        El programa debe calcular el centroide usando las fórmulas:
        
        x_centₜ = (1/6A) · ∑((xₖ₊₁+xₖ)(xₖ · yₖ₊₁-xₖ₊₁ · yₖ))
        y_cent = (1/6A) · ∑((yₖ₊₁+yₖ)(xₖ · yₖ₊₁-xₖ₊₁ · yₖ))
    */
         
        //Calcular X_cent -> Chema

        //Calcular Y_cent -> Angel
   
    // Mostrar resultados
    printf("Centroide: (%.3f, %.3f)\n", x_cent, y_cent);
    
    return 0;
}