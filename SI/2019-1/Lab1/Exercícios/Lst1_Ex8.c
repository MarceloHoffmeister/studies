#include <stdio.h>
#include <stdlib.h>

int main()
{
	float peso;

	printf("Informe o peso da refeição: ");
	scanf("%f", &peso);

	printf("O preço da refeição é de R$ %f\n", peso * 12.0);

	return 0;
}