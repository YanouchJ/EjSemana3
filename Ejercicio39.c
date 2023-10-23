#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*Declaración e inicialización de variables*/
    int a=0, b=0, serie=0;
    /*Descripción del ejercicio*/
    printf("39. Serie de FIBONACCI hasta llegar o sobrepasar el número 10000. \n\n ");
    
    /*Validación de la impresión hasta el límite requerido*/
    while (serie<=11000)
    {
        /*Impresión de la serie*/
        printf("%d", serie);
        a=b;
        b=serie;
        serie=a+b;
    }

    return 0;
}
