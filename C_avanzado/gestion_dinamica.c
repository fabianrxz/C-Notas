#include <stdlib.h>
#include <stdio.h>

int main(){

    int tamanio_base_array = 500;
    /*ejemplo de creacion de array dinamico*/
    int *empleados =(int *) malloc(500 * sizeof(int));

    char *puntero_a_array_dinamico = (char *) malloc (tamanio_base_array * sizeof(char));

    int numProductos;

    printf("¿Cuantos productos vendiste ayer?: \n");
    scanf("%d", &numProductos);

    float *numProducVendidos = (float *) malloc(numProductos * sizeof(float));

    for (int i = 0; i < numProductos; i++) {

        printf("introduce el precio del producto %d: \n", i+1);
        scanf("%f", &numProducVendidos[i]);
    }

    /*Para liberar el espacio en memoria utilizado por un array dinamico
    hay que hacer uso de la funcion "free". la funcion free libera espacio en memoria
    cuando se usa, se marca el espacio dinamico referido como parametro
    como espacio sin utilizar y esta libre de ser usado por el sistema operativo*/

    /*Este es un ejemplo de librecion de memoria*/

    free(puntero_a_array_dinamico);


    return 0;
};