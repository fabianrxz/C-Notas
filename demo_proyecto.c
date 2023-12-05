#include <stdio.h>

int main () {
    int edad;
    int anioNacimiento;
    int anioActual = 2023;
    int horasExtrastrabajadas;
    int HorasExtrasRealizadas;
    float precioHoraextra = 60;
    float sueldoAnual;
    float totalHorasextrasapagar;
    char dpto;

    printf("\n \nA continuacion vamos a pedirle algunos datos personales: \n\n");

    printf("¿Que edad tiene?:");
    scanf("%d", &edad);

    printf("¿Cual es su sueldo anual?: ");
    scanf("%f", &sueldoAnual);

    printf("¿A que departamento pertenece?: ");
    scanf(" %c", &dpto);

    printf("¿Cuantas horas extras has trabajado este año?: ");
    scanf("%d", &horasExtrastrabajadas);

    anioNacimiento = anioActual - edad;
    totalHorasextrasapagar = horasExtrastrabajadas * precioHoraextra;
    HorasExtrasRealizadas = totalHorasextrasapagar;26
 
    return 0;
}