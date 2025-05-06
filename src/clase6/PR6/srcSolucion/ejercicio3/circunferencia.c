#include <stdio.h>
#include <math.h>

void calcular_circunferencia(double x1, double y1, double x2, double y2, double x3, double y3, double *xc, double *yc, double *r) {
    double V1x = x1 - x2;
    double V1y = y1 - y2;
    double V2x = x3 - x2;
    double V2y = y3 - y2;

    double det = V1x * V2y - V1y * V2x;

    if (det == 0) {
        printf("Los puntos son colineales.\n");
        return;
    }

    *xc = ((y1 - y3) * (y1 - y2) * (y2 - y3) + (y1 - y3) * (x1 * x1 - x2 * x2) - (y1 - y2) * (x1 * x1 - x3 * x3)) / (2 * ((y1 - y3) * V1x - (y1 - y2) * V2x));
    *yc = ((x1 - x3) * (x1 - x2) * (x2 - x3) + (x1 - x3) * (y1 * y1 - y2 * y2) - (x1 - x2) * (y1 * y1 - y3 * y3)) / (2 * ((x1 - x3) * V1y - (x1 - x2) * V2y));
    *r = sqrt((*xc - x1) * (*xc - x1) + (*yc - y1) * (*yc - y1));
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    double xc, yc, r;

    printf("Ingrese las coordenadas del primer punto (x1 y y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Ingrese las coordenadas del segundo punto (x2 y y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Ingrese las coordenadas del tercer punto (x3 y y3): ");
    scanf("%lf %lf", &x3, &y3);

    calcular_circunferencia(x1, y1, x2, y2, x3, y3, &xc, &yc, &r);

    if (r > 0) {
        printf("Centro de la circunferencia: (%.2f, %.2f)\n", xc, yc);
        printf("Radio de la circunferencia: %.2f\n", r);
    }

    return 0;
}