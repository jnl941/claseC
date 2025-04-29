#include <stdio.h>
#include "utils.h"

/* Prototipos de funciones */
void leer_opcion_menu(char *c);
void ejecutar_opcion(char c);
void hola_mundo(void);
void pausa(void);

int main()
{
    char c;

    do
    {
        leer_opcion_menu(&c);
        ejecutar_opcion(c);
    } while (c != '4');
    
    return 0;
}

void leer_opcion_menu(char *c)
{
    printf("      MENU DE OPCIONES\n");
    printf("      ================\n\n");
    printf("\t1.- Mostrar mensaje hola mundo\n");
    printf("\t2.- Opción 2 (placeholder)\n");
    printf("\t3.- Opción 3 (placeholder)\n");
    printf("\t4.- Finalizar ejecución\n\n");
    printf("\t\tIntroduzca opción: ");
    scanf(" %c", c);
}

void ejecutar_opcion(char c)
{
    switch (c)
    {
    case '1':
        hola_mundo();
        pausa();
        break;
    case '2':
        printf("Opción 2 seleccionada.\n");
        pausa();
        break;
    case '3':
        printf("Opción 3 seleccionada.\n");
        pausa();
        break;
    case '4':
        printf("\n\nFIN DE EJECUCIÓN\n");
        break;
    default:
        printf("\aOpción no válida. Intente de nuevo.\n");
        pausa();
        break;
    }
}

void hola_mundo(void)
{
    printf("Hola Mundo\n");
}

void pausa(void)
{
    printf("\nPresiona Enter para continuar...");
    while (getchar() != '\n'); // Espera la entrada de la tecla Enter
}