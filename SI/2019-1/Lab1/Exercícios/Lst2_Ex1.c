#include <stdio.h>
#include <stdlib.h>

int main()
{
	int p, m, g;
	float valor;

	printf("Informe a quantidade de camisetas vendidas tamanho P: ");
	scanf("%d", &p);

	printf("Informe a quantidade de camisetas vendidas tamanho M: ");
	scanf("%d", &m);

	printf("Informe a quantidade de camisetas vendidas tamanho G: ");
	scanf("%d", &g);

	valor = (p * 10) + (m * 12) + (g * 15);

	printf("O valor arrecado foi de R$ %f\n", valor);

	return 0;
}