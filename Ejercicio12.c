#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*Declaración de variables*/
    int num;

    printf("12. Leer un número entero de tres dígitos y determinar si tiene el dígito 1. \n\n ");
    printf("Ingrese un número entero de tres dígitos: ");
    scanf("%d", &num);

    /*Validación para que el número ingresado sea entero positivo*/
    while (num<=0)
    {
       printf("El número ingresado debe ser un entero positivo. \n");
      printf("Ingrese un número entero de tres dígitos: ");
      scanf("%d", &num);
    }

    /*Validación para que el número ingresado sea de tres dígitos*/
    while (num<=100 || num>=999)
  {
     printf("El número ingresado debe ser de 3 dígitos. \n");
     printf("Ingrese un número entero de tres dígitos: ");
     scanf("%d", &num);
  }
    
    /*Declaración e inicialización de variables para validación de los dígitos*/
    int D1 = num / 100;
    int D2 = (num / 10) % 10;
    int D3 = num % 10;

    /*Validación para identificar si el número ingresado contiene 1 */
        if (D1 == 1 || D2 == 1 || D3 == 1)
        {
            printf("El número: %d, contiene el dígito 1.\n", num);
        }
        else
        {
            printf("El número: %d, no contiene el dígito 1.\n", num);
        }

    return 0;
}
