#include <stdio.h>
#include <stdlib.h>

int main()
{
	int q;

	printf("Informe a quantidade de frangos na granja: ");
	scanf("%d", &q);

	printf("O gasto total para marcar todos os frangos é R$%.2f\n", q * (4.0 + 2 * 3.50));

	return 0;
}