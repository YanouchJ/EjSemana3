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
    return 0;
}
