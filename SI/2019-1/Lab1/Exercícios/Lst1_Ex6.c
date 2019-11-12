#include <stdio.h>
#include <stdlib.h>

int main()
{
	int qBroa, qPao;
	float vendas;

	printf("Informe a quantidade de paes vendidos: ");
	scanf("%d", &qPao);

	printf("Informe a quantidade de broas vendidas: ");
	scanf("%d", &qBroa);

	vendas = (qBroa * 1.50) + (qPao * 0.55);

	printf("Total arrecadado em vendas de paes e broas: R$ %f\n", vendas);

	printf("Valor a ser depositado na poupança: R$ %f\n", vendas * 0.10);

	return 0;
}