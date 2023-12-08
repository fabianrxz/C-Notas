#include <stdio.h>
int main () {

    int entero = 18;
    char letra = 'A';
    float flotante = 23.500;
    int *puntero = &entero;

    printf("Este es un ejemplo de impresion de datos \n dato de tipo INT: %d \n dato de tipo Char: %c \n dato de tipo Float: %.2f \n dato de tipo Puntero: %p \n ",entero , letra, flotante, puntero);

    printf("Este texto es estatico: %s","Este texto es dinamico \n");

    /*Funcion putchar
    imprime un solo caracter*/

    putchar('C');

    
    /*LA funcion puts imprime solo una linea de texto 
    y un salto de linea al final*/

    puts(" Cadena de texto a imprimir");

    return 0;
}