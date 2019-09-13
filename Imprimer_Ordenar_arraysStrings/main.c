#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT_NOMBRES 5
#include "utn.h"

int main(void)
{
 	char nombre[CANT_NOMBRES][25];
	char auxiliar[25];
	int i,j;

	for(i=0; i < CANT_NOMBRES; i++)
	{
		getString(auxiliar,"Nombre?\n","ERROR",2,10,5);
		strcpy(nombre[i],auxiliar);
	}
	imprimirArrayString(nombre,CANT_NOMBRES);
}
