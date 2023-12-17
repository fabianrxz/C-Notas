#include <stdlib.h>
#include <stdio.h>
int main () {

    puts("Este es un ejemplo de uso de un array dinamico:");
    
    float *temperatura = (float *)malloc(1*sizeof(float));

    int contador = 0;
    int recorrer = 1;

    while (contador<2) {
        puts("introdusca una temperatura: ");
        scanf("%f", &temperatura[recorrer-1]);
        recorrer++;
        printf("¿desea agregar otra temperatura? \n1 para \"Si\", 2 para \"No\" \n");
        scanf("%d",&contador);
        temperatura = realloc(temperatura, recorrer*sizeof(float));
    }

    return 0;
}