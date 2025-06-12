#include <stdio.h>
typedef struct{
    double x, y;
} tipoPunto;

typedef tipoPunto tipoVector[10];
typedef struct{
    int n;
    tipoVector v;
} tipoLista;

int main(void) {
    tipoLista p1, *p2;
    p1 = *p2;
    p1.n = (*p2).n;
    p1.v[0].x = 1; p1.v[0].y = 1;
    p1[0].x = 10; p1[0].y = 10;
}