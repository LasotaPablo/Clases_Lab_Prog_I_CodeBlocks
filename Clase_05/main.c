#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int numero[5];
    int i;
    for(i = 0; i < 5; i++)
    {
        numero[i] = getInt("Ingrese un numero: ");
    }
}
