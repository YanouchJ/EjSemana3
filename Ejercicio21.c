#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*Descripción del ejercicio*/
    printf("21. Leer un número entero y determinar a cuánto es igual la suma de sus dígitos. \n\n");
  
    /*Declaración de variables*/
    int num, suma, total;
    
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    /*Validación de número positivo*/
    while (num<=0)
    {
        printf("El número ingresado debe ser un entero positivo. \n\n");
        printf("Ingrese un número entero: ");
        scanf("%d", &num);
    }

       for (int i = 1; i < num; i++)
       {
        suma=suma+i;
        total=suma+num;
       }
       
       /*Impresión del resultado*/
    printf("Para %d, la suma de los dígitos es igual a: %d", num, total);

    return 0;
}
