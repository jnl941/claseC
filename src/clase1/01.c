#include <stdio.h>
#include <stdbool.h>

void imprimirSiEsMayorDeEdad(bool esMayorDeEdad){
    if (esMayorDeEdad == true){
        printf("Eres mayor de edad");
    }
    if (esMayorDeEdad == false){
        printf("Eres menor de edad");
    }
};

void Hola(char* nombrepersona, char* Martinez){
    printf("Hola %s %s", nombrepersona, Martinez);
};

char* devolverHola(){
    return "Hola";
};

//tipoAdevolver nombreFuncion(tipoDato parametro1, tipoDato parametro2, tipoDato parametro3, ...){
char* devolverSiEsMayorDeEdad(int edad){
    bool esMayorDeEdad;
    //int edad; //AQUI
    printf("COMPROBAR EDAD MAYOR\n");
    if (edad >= 18){
       esMayorDeEdad = true;
       return "Es mayor de Edad";
    } 
   

    printf("COMPROBAR EDAD MENOR\n");
    if (edad < 18){
        esMayorDeEdad = false;
        return "Es menor de Edad";
    }
}
char* devolverSiEsMayorDeEdad2(int edad){
    bool esMayorDeEdad;
    printf("USANDO FUNCION 2\n");
    char* mayordeedad = "NO SE SABE"; 

    //int edad; //AQUI
    printf("COMPROBAR EDAD MAYOR\n");
    if (edad >= 18){
       esMayorDeEdad = true;
       mayordeedad = "Es mayor de edad";
    } 
    printf("COMPROBAR EDAD MENOR\n");
    if (edad < 18){
        esMayorDeEdad = false;
        mayordeedad = "Es menor de edad";
    }

    return mayordeedad; //TIENE QUE HABER ALGO QUE DEVOLVER
}


//// devolverSiEsMayorDeEdad(edad);
// esMayorDeEdad = devolverSiEsMayorDeEdad(edad);
int main()
{
    int edad = 18; //1,2,3,4,5...
    char* nombre = "Jose María";
    char* apellido = "Forte";
     bool esMayorDeEdad = true; //true o false

    char* hola = devolverHola();
    //string = char[]

    //HOLA()
    //Hola(nombre, apellido);
    printf("%s %s %s", hola, nombre, apellido);
    printf("\n");
    printf( devolverSiEsMayorDeEdad2(edad) );
    return 0;
}
