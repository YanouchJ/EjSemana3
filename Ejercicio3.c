#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, x=1;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    while (num<=0)
      {
        printf("El numero ingresado debe ser positivo.\n ");
        printf("Ingrese un numero entero: ");
        scanf("%d", &num);
      }

    printf("Divisores exactos de %d: \n", num);
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
