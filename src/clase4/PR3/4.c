#include <stdio.h>

int main() {
    int numero, digitoAinsertar; //NUMERO ORIGINAL, DIGITO A INSERTAR
    int nuevo_numero = 0; // NUMERO FINAL
    int temp, contador = 0; // OPCIONAL, NO HACE FALTA SI CONOCEIS ARRAYS BIEN
    int digitos[10];  // Array para almacenar los dígitos del número original
    
    // CUANDO DE ERROR:
        //1. Hacer un print del error
        //2. return -1;
        
    // Leer el número original -> Angel
    printf("Introduce el número inicial:\n");
    scanf("%d", &numero);
    printf("DEBUG: El numero insertado es: %d\n", numero);
    // Validar que el número sea positivo -> Chema
    
    if(numero<=0){
        printf("Error:el numero tiene que ser positivo\n");
        return -1;
    }
    // Leer el dígito a insertar -> Angel
    printf("Introduce el dígito aa insertar:\n");
    scanf("%d", &digitoAinsertar);
    // Validar que el dígito sea de un solo dígito -> Chema
    if(i<0 && i>9){
        printf("ERROR: El numero debe tener un solo digito entre 0 y 9 \n");
        return -1;
    }
    // Contar dígitos y almacenarlos en el array -> Angel
    // for -> 324
        // 3 -> digitos[0] = 3
        // 2 -> digitos[1] = 2
        // 4 -> digitos[2] = 4
        // contador++;
    for (int n = 0, n < 10 ,contador++)
    {
        //digitoPosicion(n) = ((numero - (numero % 10*n)) / 10*n) % 10,
        digitos[n] = ((numero - (numero % 10*n)) / 10 * n) % 10;
        printf("Numero en posicion %d es: %d\n", n, digitos[n]);
     }
    
    // Validar que el número tenga entre 2 y 8 dígitos -> Chema
    if(contador < 2 && contador > 8){ //INVALIDO
        printf("ERROR:El numero tiene que tener entre 2 y 8 digitos \n");
        return -1 ;
     }
        
    }

    // Determinar la posición de inserción -> Angel y Chema
    // contador = numDigitos
    // Si el numero de dígitos es par, insertar en el centro
    // Si no es par:
        // Si el dígito a insertar es mayor que 5, insertar a la izquierda del centro
        // Si no, insertar a la derecha del centro
    // 1       indiceDondeInsertar = contador / - 2      // 0 < 5 
            // 1203


        // 6 > 5
            // 1623

            
    // 1234 0 -> 12034
    int indiceDondeInsertar;
    
    if(contador % 2 == 0){
        indiceDondeInsertar = contador/2;
    } else {
        if(contador > 5){ //numDigitos -> contador
            indiceDondeInsertar = contador / 2 - 1;
        } else {
            indiceDondeInsertar = contador / 2 + 1;
        }
    }
    
    // Construir el nuevo número con el dígito insertado ->> Angel y Chema
    // 1. Inicializar nuevo_numero a 0
    // 2. Recorrer el array de dígitos y construir el nuevo número
        // Bucle
            //Según posición, multiplicamos 10^n
    
    //BUCLES FOR:
        //1. Variable for - SIMPLE (poco a poco)
            //Hay que buscar una variable que sea simple
        //2. Variable de cálculo - DENTRO DEL FOR
        
    nuevo_numero = 0;
    
    for(int n = 0; n < indiceDondeInsertar; n++){ //ANTES DEL NUMERO INSERTADO, DESDE INICIO HASTA MITAD
        //nuevo_numero = digitos[n] * 10^(contador-n)
        //CUIDADO!! USAR pow() para potencias
        nuevo_numero = digitos[10] * pow(3);
    }
    //INSERTAR DIGITO
    
    for(int n = indiceDondeInsertar; n < contador; n++){ // DESPUES DEL NUMERO INSERTADO, DESDE MITAD HASTA FINAL
        
        
        
    }
    printf("Nuevo número: %d\n", nuevo_numero);
    
    return 0;
}