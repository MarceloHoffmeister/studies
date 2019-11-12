#include <stdio.h>
#include <stdlib.h>

int main()
{
	float gas, pag;

	printf("Informe o preço da gasolina: ");
	scanf("%f", &gas);

	printf("Informe a quantidade paga: ");
	scanf("%f", &pag);

	printf("O total de gasolina a ser abastecida será de %f litros\n", pag / gas);

	return 0;
}