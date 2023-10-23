#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("12. Leer un número entero de tres dígitos y determinar si tiene el dígito 1. \n\n ");
    printf("Ingrese un número entero de tres dígitos: ");
    scanf("%d", &num);

    while (num<=0)
    {
       printf("El número ingresado debe ser un entero positivo. \n");
      printf("Ingrese un número entero de tres dígitos: ");
      scanf("%d", &num);
    }

    while (num<=100 || num>=999)
  {
     printf("El número ingresado debe ser de 3 dígitos. \n");
    printf("Ingrese un número entero de tres dígitos: ");
    scanf("%d", &num);
  }

    int D1 = num / 100;
    int D2 = (num / 10) % 10;
    int D3 = num % 10;

        if (D1 == 1 || D2 == 1 || D3 == 1)
        {
            printf("El número %d tiene el dígito 1 en él.\n", num);
        }
        else
        {
            printf("El número %d no tiene el dígito 1 en él.\n", num);
        }
        
    return 0;
}
