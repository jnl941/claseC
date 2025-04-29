#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

/* Prototipos de funciones */
void leer_opcion_menu(char *c);
void ejecutar_opcion(char c);
void hola_mundo(void);
void tirada_dados(void);
void fibonacci(void);
void saludo(const char mensaje[]);
void pausa();

/* Definiciones de funciones */
int main()
{
  char c;

  do
  {
//    system("clear");
    leer_opcion_menu(&c);
    ejecutar_opcion(c);
  } while (c != '4');
  return 0;
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
    tirada_dados();
    pausa();
    break;
  case '3':
    fibonacci();
    pausa();
    break;
  case '4':
    printf("\n\nFIN DE EJECUCION");
    break;
  default:
    printf("\a");
    break;
  }
}

void leer_opcion_menu(char *c)
{
  printf("      MENU DE OPCIONES\n");
  printf("      ================\n\n");
  printf("\t1.- Mostrar mensaje hola mundo\n");
  printf("\t2.- Contar tiradas \n");
  printf("\t3.- Mostrar Fibonacci\n");
  printf("\t4.- Finalizar ejecucion\n\n");
  printf("\t\tIntroduzca opcion: \n");
  scanf(" %c", c);
}

// Definición de la función saludo
void saludo(const char mensaje[])
{
  printf("%s\n", mensaje);
}
void hola_mundo(void)
{
  saludo("Hola Mundo");
}

void tirada_dados(void)
{

  int tirada_actual;
  int contador_ganadoras = 0;
  do
  {
    printf("Ingrese el valor de la tirada de 3 dados (de 3 a 18): ");
    scanf("%d", &tirada_actual);
  } while (tirada_actual < 3 || tirada_actual > 18);

  for (int dado1 = 1; dado1 <= 6; dado1++)
  {
    for (int dado2 = 1; dado2 <= 6; dado2++)
    {
      for (int dado3 = 1; dado3 <= 6; dado3++)
      {
        int suma_tirada = dado1 + dado2 + dado3;
        if (suma_tirada > tirada_actual)
        {
          contador_ganadoras++;
        }
      }
    }
  }
  printf("Numero de tiradas ganadoras: %d\n", contador_ganadoras);
}

void fibonacci(void)
{
  system("cls||clear");
  printf("Sucesion Fibonacci\n");
  printf("===========================\n\n");
  int anterior = 0;
  int termino = 1;
  int aux;

  while (INT_MAX - termino >= anterior)
  {
    aux = termino + anterior;
    anterior = termino;
    termino = aux;
    printf("%10d\n", termino);
  }
}

void pausa()
{
  printf("\nPresiona S para Seguir...");
  while (getchar() != 'S');        // Consume cualquier entrada anterior pendiente
  getchar(); // Espera la entrada de la tecla Enter
}
