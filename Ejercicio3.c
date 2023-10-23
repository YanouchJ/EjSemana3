#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*Declaración e inicialización de variables*/
    int num, x=1;
    printf("3. Leer un número entero y mostrar todos los divisores exactos del número comprendidos entre 1 y el número leído. \n");
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    /*Ciclo de validación de numero entero positivo*/
    while (num<=0)
      {
        printf("El numero ingresado debe ser positivo.\n ");
        printf("Ingrese un numero entero: ");
        scanf("%d", &num);
      }

    printf("Divisores exactos de %d: \n", num);

       /*Ciclo de validación de divisores exactos*/ 
        while (x<=num)
        {
            if (num % x == 0)
            {
            printf(" %d\n ", x);
            }
            x++;
        }
    return 0;
}
