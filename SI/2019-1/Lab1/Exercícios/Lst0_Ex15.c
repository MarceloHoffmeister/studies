#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1, n2;

	printf("Informe o primeiro número: ");
	scanf("%d", &n1);

	printf("Informe o segundo número: ");
	scanf("%d", &n2);

	printf("Adição: %d\n", n1 + n2);

	printf("Subtração: %d\n", n1 - n2);

	printf("Multiplicação: %d\n", n1 * n2);

	printf("Divisão: %d\n", n1 / n2);

	return 0;
}