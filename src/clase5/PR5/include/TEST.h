#ifndef TEST_H
#define TEST_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define INICIO_TEST() printf("Iniciando pruebas...\n");
#define FIN_TEST() printf("Pruebas finalizadas.\n");
#define PRINT_TEST(format, value) printf(format, value);

#endif // TEST_H