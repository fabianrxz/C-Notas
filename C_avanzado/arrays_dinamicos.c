#include <stdio.h>
#include <stdlib.h>

int main () {

    char nombreTemporal[100];
    char apellidosTemporal[250];

    puts("Porfavor, introduce la siguiente información:");
    printf("- Nombre: ");
    gets(nombreTemporal);
    printf("- Apellidos: ");
    gets(nombreTemporal);

    typedef struct
    {
        /* data */
        char *nombre;
        char *apellido;

    } Empleado;
    
    Empleado vendedor;

    vendedor.nombre = (char *) malloc(strlen(nombreTemporal)*sizeof(char));
    vendedor.apellido = (char *) malloc(strlen(apellidosTemporal)*sizeof(char));

    vendedor.nombre = strcpy(vendedor.nombre, nombreTemporal);
    vendedor.apellido = strcpy(vendedor.apellido,apellidosTemporal);

    

    return 0;
}