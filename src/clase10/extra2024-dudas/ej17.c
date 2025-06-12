#include <stdio.h>
typedef struct datos
{
    int i1, i2;
    double d;
    char c;
} tipo_registro;

int main()
{
    tipo_registro dato1 = {2, 10, 5.55, 'z'};
    tipo_registro *p = &dato1;
    p->c='a';

    //DEBUG JAVI
    printf("%d %c %c", p->i1, p->c, dato1.c);
    printf("\nDirección de dato1: %p\n", (void*)&dato1);
    printf("Dirección de p: %p\n", (void*)p);
    printf("Dirección de p->i1: %p\n", (void*)&p->i1);
    printf("Dirección de p->c: %p\n", (void*)&p->c);
    printf("Dirección de dato1.i1: %p\n", (void*)&dato1.i1);
    printf("Dirección de dato1.c: %p\n", (void*)&dato1.c);
}