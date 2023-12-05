#include <stdio.h>

int main () {

    int edad = 27;
    int numeroDeAcciones = 150;

    float Ahorros = 10000.46;

    char PrimeraNombre = 'E';
    char PrimeraApellido = 'L';
    char PrimeraApelli2 = 'R';

    printf("El inversor %c %c %c tiene %d años, ha adquirido %d acciones durante los ultimos meses y posee una cantidad de dinero ahorrada equivalente a %.2f€", PrimeraNombre, PrimeraApellido, PrimeraApelli2, edad, numeroDeAcciones, Ahorros);

return 0;
}