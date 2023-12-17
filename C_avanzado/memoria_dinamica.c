#include <stdio.h>
#include <stdlib.h>

int main () {

    /*La funcion realloc permite el cambio dinamico del tamaño de un array dinamico, permite eliminar */

    puts("Unidad de urgencias");
    puts("-----------------------------");

    printf("Introduce la consulta que se ha quedado libre: \n");

    int consultaLibre, numAvisos = 0;
    int *OrdenConsultasLibres = (int *)malloc(numAvisos * sizeof(int));

    while(1){
        printf("Introduce la consulta que se ha quedado libre: \n");

        scanf("%d", &consultaLibre);
        numAvisos++;
        OrdenConsultasLibres = (int *)realloc(OrdenConsultasLibres, numAvisos*sizeof(int));
        OrdenConsultasLibres[numAvisos-1] = consultaLibre;
    }

    return 0;
}