#include <stdio.h>
#include <stdlib.h>

int main()
{
	int quant;

	printf("Informe a quantidade de cavalos adquiridos: ");
	scanf("%d", &quant);

	printf("Você precisa adquirir %d ferraduras\n", quant * 4);

	return 0;
}