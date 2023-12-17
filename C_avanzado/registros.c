#include <stdio.h>

int main () {

    typedef struct {
        int identificador;
        char *nombre;
        char *apellidos;
        float sueldo_anual;
    } empleado;
    
    empleado profesor;

    profesor.identificador = 1997;
    profesor.nombre = "Fabian";
    profesor.apellidos = "Ramirez";
    profesor.sueldo_anual = 10000.60;

    printf("%s", profesor.nombre);

    profesor.sueldo_anual += 10000;

    return 0;
}