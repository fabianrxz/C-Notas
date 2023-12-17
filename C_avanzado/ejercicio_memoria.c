#include <stdio.h>
#include <stdlib.h>

int main () {

    int numeroDeTemperaturas = 1, contador = 0;
    float temperatura, total = 0;
    
    float *temperaturas = (float*)malloc(numeroDeTemperaturas*sizeof(float));

    while(1){
        printf("\n Inserte la temperatura: ");
        scanf("%f", &temperatura);
        temperaturas[contador] = temperatura;
        contador++;

        total += temperatura;

        printf("La temperatura promedio actual es: %2.f", (total/contador));

        if (contador==numeroDeTemperaturas){
            numeroDeTemperaturas++;
            temperaturas = realloc(temperaturas, numeroDeTemperaturas*sizeof(float));
        }

        for(int i=0;i<contador;i++){
            printf("%2.f ", temperaturas[i]);
        }
    }

    return 0;
}