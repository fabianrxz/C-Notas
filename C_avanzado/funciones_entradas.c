#include <stdio.h>
#include <string.h>

int main () {

    /*La funcion getchar permite capturar un caracter por teclado y lo retorna como parte de su funcion*/
    char caracter = getchar();



    /*La funcion gets() captura y guarda una cadena de caracteres en un array, que lo toma como parametro*/
    char texto [100];

    fgets(texto, 100, stdin);



    /*Contar caracteres de un array de string*/
    int cantidad_de_caracteres = strlen(texto);


    /*Copiar el contenido de un array a otro*/
    char origen [15];
    char copia[15];

    strcpy(copia,origen);


    /*Concatenar cadena con strcat*/
    char Nombre_Completo [20] = "Juan Perez";
    char Mensaje_Bienvenida [150] = "Hola ";
    strcat(Mensaje_Bienvenida,Nombre_Completo);

    printf("\n viendo el contenido del array texto: \n %s \n", Mensaje_Bienvenida);


    /*Buscar un caracter en una cadena de caracteres (Arrays de strings)*/
    char Texto_Busqueda [150] = "Este es un @ texto de busqueda, texto de prueba";
    char *Puntero_a_caracter_encontrado = strchr(Texto_Busqueda, '@');
    /*Esto nos permite ubicar la primera ocurrencia de un caracter dentro de una cadena de texto*/

    char mail [30] = "email_prueba@gmail.com";
    char proveedor_a_buscar [20] = "outlook.com";

    char *puntero_a_proveedor = strstr(mail,proveedor_a_buscar);


    return 0;
}