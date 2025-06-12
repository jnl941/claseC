#include <stdio.h>

#define DADO 6
typedef int tipo_dado[DADO];

void imprimir_espacio(tipo_dado prim, tipo_dado segu, int n) {
    int cont = 1;

    for (int ind_prim = 0; ind_prim < n; ind_prim++){
        for (int ind_segu = 0; ind_segu < n; ind_segu++) {
            printf(" Par número %d: dado 1 = %d, dado 2 = %d\n", cont, prim[ind_prim], segu[ind_segu]);
            cont++;
        }
    }
}

int main() {
    tipo_dado dado1 = {1, 2, 3, 4, 5, 6};
    tipo_dado dado2 = {1, 2, 3, 4, 5, 6};
    int n = DADO;

    imprimir_espacio(dado1, dado2, n);

    return 0;
}