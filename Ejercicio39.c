#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=0, b=0, serie=0;

    printf("39. Serie de FIBONACCI hasta llegar o sobrepasar el número 10000. \n\n ");
    
    while (serie<=10000)
    {
        printf("%d", serie);
        a=b;
        b=serie;
        serie=a+b;
    }

    return 0;
}
