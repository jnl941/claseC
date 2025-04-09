#include "../include/TEST.h"
#include <stdio.h>

extern void PROBAR();

int Ackermann(int m, int n) {
    printf("Ackermann(%d, %d)\n", m, n);
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return Ackermann(m - 1, 1);
    } else {
        return Ackermann(m - 1, Ackermann(m, n - 1));
    }
}

int main(int argc, char *argv[]) {
    INICIO_TEST();
    
    if (argc > 1) {
        PROBAR();
        FIN_TEST();
        return 0;
    }

    int m, n;
    printf("Ingrese dos numeros naturales (m, n): ");
    scanf("%d %d", &m, &n);
    
    int result = Ackermann(m, n);
    printf("A(%d, %d) = %d\n", m, n, result);
    
    FIN_TEST();
    return 0;
}