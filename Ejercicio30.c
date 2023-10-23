#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*Declaración de variables*/
    int num;
    /*Descripción del ejercicio*/
    printf("30. Leer un número entero y mostrar todos sus componentes numéricos, o sea, aquellos para quienes él sea un múltiplo. \n\n");
    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    /*Validación número mayor a cero */
    while (num<=0)
    {
        printf("El número ingresado debe ser mayor a cero. \n ");
        printf("Ingrese un número entero: ");
        scanf("%d", &num);
    }
        /*Impresión final*/
        printf("Los componentes numéricos múltiplos de %d son: ", num);

    /*Iteración hasta el número ingresado*/
     for (int i = 1; i <= num; i++)
     {
        if (num % i == 0)
        {
            printf("%d", i);
        }
     }
     
    return 0;
}
