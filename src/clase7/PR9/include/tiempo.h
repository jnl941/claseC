#ifndef TIEMPO_H
#define TIEMPO_H

typedef struct {
    int h;  // hours
    int mn; // minutes
    int sg; // seconds
    int ct; // centiseconds
} RegistroTiempo;

// Function prototypes
void leerRegistroTiempo(RegistroTiempo *registro);
void validarRegistroTiempo(RegistroTiempo *registro);
RegistroTiempo calcularTiempoTranscurrido(RegistroTiempo inicio, RegistroTiempo fin);
void imprimirRegistroTiempo(RegistroTiempo registro);

#endif // TIEMPO_H