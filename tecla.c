#include <stdio.h>

int main () {
    int numeroDeMiembrosPorEquipo;
    printf("Cuantos miembros hay por equipo: \n");
    scanf("%d", &numeroDeMiembrosPorEquipo);
    printf("Se ha seleccionado %d miembros por equipo \n", numeroDeMiembrosPorEquipo);

    float sueldo;
    printf("Ingrese su sueldo: \n");
    scanf("%f",&sueldo);
    printf("El sueldo ingresado es: \n %.2f \n", sueldo);

return 0;
}