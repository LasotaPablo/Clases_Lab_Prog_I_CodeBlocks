#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maximo;
    int minimo;
    int acumulador;
    int auxiliar;
    int i;

    printf("Ingrese un numero:");
    scanf("%d",&auxiliar);
    maximo = auxiliar;
    minimo = auxiliar;
    acumulador = auxiliar;
    for(i=0; i < 4; i++)
    {
        printf("Ingrese un numero:");
        scanf("%d",&auxiliar);
        acumulador = acumulador + auxiliar;
        if(auxiliar < minimo)
        {
            minimo = auxiliar;
        }
        if(auxiliar > maximo)
        {
            maximo = auxiliar;
        }
    }
    printf("El numero maximo es: %d\n",maximo);
    printf("El numero minimo es: %d\n",minimo);
    printf("El promedio es: %d\n",acumulador / 5);
}
