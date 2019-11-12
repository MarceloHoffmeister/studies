#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1, n2, op;

	printf("Calculadora em C\n");
	printf("Digite os números inteiros para cálculos\n");
	printf("Número 1: ");
	scanf("%d", &n1);
	printf("Número 2: ");
	scanf("%d", &n2);

	printf("Escolha a operação:\n");
	printf("[1] Adição\n");
	printf("[2] Subtração\n");
	printf("[3] Multiplicação\n");
	printf("[4] Divisão\n");
	scanf("%d", &op);

	switch(op)
	{
		case (1):

			printf("Adição: %d\n", n1 + n2);

		break;

		case (2):

			printf("Subtração: %d\n", n1 - n2);

		break;

		case (3):

			printf("Multiplicação: %d\n", n1 * n2);

		break;

		case (4):

			printf("Divisão: %d\n", n1 / n2);

		break;

		default:

			printf("Escolha inválida\n");

		break;
	}

	return 0;
}