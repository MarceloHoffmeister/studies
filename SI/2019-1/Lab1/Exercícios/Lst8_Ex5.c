#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;

	do {

		printf("Digite um valor maior do que um: ");
		scanf("%d", &i);

		if (i < 0) {

			printf("Digite um número maior que zero!");

		} else {

			printf("O quadrado de %d é: %d\n", i, i * i);

		}

	} while (i % 6 != 0);	

	return 0;
}