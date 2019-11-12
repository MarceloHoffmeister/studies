#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, centena;

	printf("Digite um número inteiro com três algarismos: ");
	scanf("%d", &n);

	if (n < 99) {

		printf("%d não tem três algarismos\n", n);

	} else {

		centena = n / 100;

		if (centena % 2 == 0) {

			printf("A casa da centena de %d é %d e é par\n", n, centena);

		} else {

			printf("A casa da centena de %d é %d e é ímpar\n", n, centena);

		}

	}

	return 0;
}