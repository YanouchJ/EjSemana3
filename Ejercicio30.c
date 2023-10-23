#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("30. Leer un número entero y mostrar todos sus componentes numéricos, o sea, aquellos para quienes él sea un múltiplo. \n\n");
    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    while (num<=0)
    {
        printf("El número ingresado debe ser mayor a cero. \n ");
        printf("Ingrese un número entero: ");
        scanf("%d", &num);
    }
     
        printf("Los componentes numéricos múltiplos de %d son: ", num);
        
     for (int i = 1; i <= num; i++)
     {
        if (num % i == 0)
        {
            printf("%d", i);
        }
     }
     
    return 0;
}
