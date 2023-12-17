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

    /*Formas de usar scanf*/
    int edad;

    printf("\n Ingrese nuevamente su edad: \n");

    scanf("%d", &edad);

    printf("Ingrese su sueldo anual: \n");

    float sueldo_anual;
    scanf("%f", &sueldo_anual);

    printf("\nIngrese una letra: \n");
    char letra;
    scanf(" %c", &letra);

    printf("\nIngrese un texto de 20 caracteres: \n");
    char texto[20];
    scanf("%s", texto);

    printf("\nIngrese su fecha de nacimiento: \n");
    int dia, mes, anio;
    scanf("%d%d%d", &dia, &mes, &anio);

    return 0; 
}