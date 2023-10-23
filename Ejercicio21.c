#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("21. Leer un número entero y determinar a cuánto es igual la suma de sus dígitos. \n\n");
  
    int num;
    int suma=0;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    while (num<=0)
    {
        printf("El número ingresado debe ser un entero positivo. \n");
        printf("Ingrese un número entero: ");
        scanf("%d", &num);
    }


    return 0;
}
