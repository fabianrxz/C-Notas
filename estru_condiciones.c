#include <stdio.h>
int main () {
    
    int numero_sanciones;

    printf("ingrese la cantidad de sanciones: \n");
    scanf("%d", &numero_sanciones);

    if (numero_sanciones < 2) {
        printf("el usuario puede retirar los libros que desee \n");
    } else if (numero_sanciones < 3) {
        printf("El usuario puede retirar libros pero si tiene una sola sancion más, ya no podra retirar libros \n");
    } else {
        printf("el usuario no puede retirar libros \n");
    };
    

    /*Estructura switch*/
    int numero_libros;

    if (numero_sanciones < 3) {
        printf("Ingrese la cantidad de libros que desea retirar \n");
        scanf("%d",&numero_libros);

        switch (numero_libros) {
        case 0:
            printf("El usuario no ha seleccionado ningun libro \n");
            break;
        case 1:
            printf("El usuario desea llevarse %d libro \n", numero_libros);
            break;
        case 2:
            printf("El usuario desea llevarse %d libros \n", numero_libros);
            break;
        case 3:
            printf("El usuario desea llevarse %d libros \n", numero_libros);
            break;
        case 4:
            printf("El usuario desea llevarse %d libros \n", numero_libros);
            break;
        case 5:
            printf("El usuario desea llevarse %d libros \n", numero_libros);
            break;
        default:
            printf("El usuario desea llevarse %d libros, no se pueden sacar más de 5 libros a la vez \n", numero_libros);
            break;
        };
    };


    return 0;
}