#include <stdio.h>
#include <stdlib.h>

int main()
{
	float fab_cost, consu_cost;

	printf("Informe o custo de fábrica: ");
	scanf("%f", &fab_cost);

	consu_cost = (fab_cost * 0.12) + (fab_cost * 0.45);

	printf("O custo do consumidor é de R$%f\n", consu_cost);

	return 0;
}