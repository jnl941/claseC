// This header file declares the structures and functions related to geometric figures,
// including area calculation functions for circles, rectangles, and triangles.

#ifndef FIGURAS_H
#define FIGURAS_H

#define PI 3.14159265358979323846

typedef struct {
    double radio; // For circles
} Circulo;

typedef struct {
    double base;   // For rectangles
    double altura; // For rectangles
} Rectangulo;

typedef struct {
    double lado1; // For triangles
    double lado2; // For triangles
    double lado3; // For triangles
} Triangulo;

double calcularAreaCirculo(Circulo c);
double calcularAreaRectangulo(Rectangulo r);
double calcularAreaTriangulo(Triangulo t);

#endif // FIGURAS_H