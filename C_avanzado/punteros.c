#include <stdio.h>

int main () {

    int identificador = 1997;

    int *puntero_a_identificador = &identificador;

    char dni;

    int array_identificatorio [10];

    array_identificatorio [5] = 6;
    array_identificatorio [6] = 7;


    int *p_inicio = &array_identificatorio[0];
    int *p_fin = &array_identificatorio[10];

    int numero_sueldos = p_fin - p_inicio;

    printf("numero de elementos en el array segun la resta de punteros: %d \n", numero_sueldos);

    dni = 'C';

    char *letra_dni = &dni;

    printf("Prueba de salida de apuntador puntero: %c \n", *letra_dni);

    printf("Esta es una prueba de valor de una variable: %d \n", identificador);
    printf("Esta es una prueba de valor de un puntero: %d \n", *puntero_a_identificador);

    int identificador_empleado = 1997;

    int *p_identificador_empleado = &identificador_empleado;

    int *identificador_incrementado = p_identificador_empleado + 1;

    printf("Prueba de salida de apuntador base: %p \n", p_identificador_empleado);
    printf("Prueba de salida de apuntador incrementado: %p \n", identificador_incrementado);

    /*Maneras de acceder al valor de la localización en memoria*/
    int *valor_memoria = p_fin - 5;

    printf("valor de memoria obtenido: %p \n", valor_memoria);

    /*Maneras de obtener un valor almacenado en memoria*/
    int valor_obtenido = *(array_identificatorio + 6);

    printf("Valor almacenado en la pocicion de memoria: %d", valor_obtenido);


    /*Maneras de escribir un array vidimensional*/

    float sueldosMensualesEmpleados[10][12];
    int (*sueldoEmpleados)[12];

    /*Maneras de acceder a un valor en un array*/
    sueldoEmpleados[4][5];
    *(*(sueldoEmpleados + 4) + 5);


    return 0;
}