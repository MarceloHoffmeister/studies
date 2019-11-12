#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0, soma = 0;
	float media = 0.0, i = 0.0;

	do {

		printf("Escolha um número: ");
		scanf("%d", &n);

		if (n > 0) {

			i++;
			soma += n;
			media = soma / i;

		}

	} while (n > 0);

	printf("A média dos números digitados é %.1f\n", media);

	return 0;
}