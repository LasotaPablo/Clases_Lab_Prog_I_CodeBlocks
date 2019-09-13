#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

float pedirNumero(float numero);
float areaCirculo(float radio);

int main()
{
    float area;
    float auxiliar;
    area = areaCirculo(pedirNumero(auxiliar));
    printf("El area de el circulo es de %.2f",area);
}

float pedirNumero(float numero)
{
    printf("Por favor ingrese un numero:");
    scanf("%f",&numero);
    return numero;
}

float areaCirculo(float radio)
{
    float area;
    area = PI * radio * radio;
    return area;

}
