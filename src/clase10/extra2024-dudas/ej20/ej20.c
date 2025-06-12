#include <stdio.h>
#include <string.h>

#define MAX_ALUMNOS 100
#define MAX_STR 50

// Definición de la estructura
typedef struct {
    int id;
    int dni;
    char apellido1[MAX_STR];
    char apellido2[MAX_STR];
    char nombre[MAX_STR];
} Alumno;

int main() {
    FILE *punteroFile;
    Alumno Alumnos[MAX_ALUMNOS];
    int i = 0;

    // Variables temporales para leer los datos
    int id, dni;
    char apellido1[MAX_STR], apellido2[MAX_STR], nombre[MAX_STR];

    // Abrir el archivo en modo lectura
    punteroFile = fopen("alumnos.txt", "r");
    if (punteroFile == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Leer línea por línea del archivo
    while (fscanf(punteroFile, "%d %d %s %s %s", &id, &dni, apellido1, apellido2, nombre) != EOF) {
        Alumnos[i].id = id;
        Alumnos[i].dni = dni;
        strcpy(Alumnos[i].apellido1, apellido1);
        strcpy(Alumnos[i].apellido2, apellido2);
        strcpy(Alumnos[i].nombre, nombre);
        i++;
    }

    fclose(punteroFile);

    // Opcional: imprimir lo leído para verificar
    for (int j = 0; j < i; j++) {
        printf("Alumno %d: %d %d %s %s %s\n", j + 1, 
               Alumnos[j].id, Alumnos[j].dni, 
               Alumnos[j].apellido1, Alumnos[j].apellido2, Alumnos[j].nombre);
    }

    return 0;
}
