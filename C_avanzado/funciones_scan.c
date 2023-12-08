#include <stdio.h>
int main () {

    /*
    Se puede obtener un dato ingresado por el usuario con la funcion scanf
    Los datos pueden ser de cualquier tipo
    */

    int edad_declarada;

    printf("Ingrese su edad: \n");

    scanf("%d", &edad_declarada);

    printf("La edad ingresada es: %d \n",edad_declarada);

    return 0; 
}