#include <stdio.h>

int main () {

    int cantidad_sanciones, libros, do_while, variable_relativa_contador;
    int numeros_vueltas_bucle = 4;
    printf("Este es un programa de bienvenida a la biblioteca \n");
    printf("Ingrese la cantidad de sanciones: \n");
    scanf("%d", &cantidad_sanciones);

    if (cantidad_sanciones < 3){
        printf("Ahora ingrese la cantidad de libros que desea alquilar \n");
        scanf("%d",&libros);
    } else {
        printf("El usuario no puede alquilar ningun libro \n");
    };

    while (numeros_vueltas_bucle > 0){
        printf("Este codigo está dentro del bucle while, es la vuelta numero %d \n", numeros_vueltas_bucle);
        numeros_vueltas_bucle--;
    };

    printf("Ingrese un numero para el bucle do while: \n");
    scanf("%d", &do_while);

    do {
        printf("Este codigo está dentro del bucle  dowhile, es la vuelta numero %d \n", do_while);
        do_while--;
    } while (do_while > 0);

    printf("ahora vamos a ver un bucle for \n");

    printf("Ingrese nun numero para repetir el bucle for \n");
    scanf("%d",&variable_relativa_contador);

    for (int contador = 0; contador<=variable_relativa_contador;contador++){
        printf("aprendiendo a usar bucles for: \n");
    };

    int matriz[4][3] = {
        {1385, 6543, 3654},
        {5343, 9874, 6498},
        {6452, 8646, 5687},
        {6543, 1432, 5353}
    };





    printf("ahora vamos a ver un bucle for, que recorre un array: \n");

    for (int i = 0; i <= 3; i++){
        for (int j=0; j <= 2; j++){
            printf("Fila %d, columna %d, valor matriz = %d \n ", i, j, matriz[i][j]);
        };
    };

    return 0;
}