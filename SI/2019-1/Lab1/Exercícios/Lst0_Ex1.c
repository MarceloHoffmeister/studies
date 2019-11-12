#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1, n2;
	float resp;

	printf("Informe o primeiro número: ");
	scanf("%d", &n1);

	printf("Informe o segundo número: ");
	scanf("%d", &n2);

	resp = n1 / n2;

	printf("O resultado da divisão é %f\n", resp);

	return 0;
}