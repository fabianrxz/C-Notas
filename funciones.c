#include <stdio.h>

int tablas (int numero , int multiplicador);
int estado_programa (char verificador);

int main () {

    char caracter_verificador = 'A';
    int numero_tabla,contador2;
    
    contador2 = 0;

    printf("ingrese un numero del 1 al 10, para dar su tabla hasta el 10: \n");
    scanf("%d", &numero_tabla);

    int contador = 0;
    int resultados_tablas[11];


    while (contador2 <= 10)
    {
        int resultado2 = tablas(numero_tabla,contador2);
        resultados_tablas[contador2]= resultado2;
        
        contador2++;  /* code */
    };
    
    while (contador <= 10) {
        printf("Esta es la tabla de %d, y el resultado por %d es: %d \n", numero_tabla, contador, resultados_tablas[contador] );
        contador++;
    };   

    int salida_estado;

    salida_estado = estado_programa(caracter_verificador);

    if (salida_estado == 0) {
        printf("El programa termino con exito \n");
    } else {
        printf("El programa tuvo un error \n");
    };

    return 0;
}

int estado_programa (char verificador) {
    int resultado;

    if (verificador == 'A') {
        resultado = 0;
    } else {
        resultado = 1;
    };

    return resultado;
}

int tablas (int numero , int multiplicador){
    int resultado = numero * multiplicador;
    return resultado;
}