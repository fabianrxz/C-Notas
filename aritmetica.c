#include <stdio.h>
int main () {

    float suma = 3.5 + 4;

    int resta = 8 - 4;

    float multiplicacion = 8*2.5;

    float dividion = 10.0 / 2.0;

    int operando1, operando2;

    printf("Introduce dos numeros enteros: \n");
    printf("numero uno: \n");
    scanf("%d", &operando1);
    printf("numero dos: \n");
    scanf("%d", &operando2);

    printf("Resultados: \n");
    printf("suma: %d \n", operando1 + operando2);
    printf("resta: %d \n", operando1 - operando2);
    printf("multiplicación: %d \n", operando1 * operando2);
    printf("division: %d \n", operando1 / operando2);



    return 0;
} 