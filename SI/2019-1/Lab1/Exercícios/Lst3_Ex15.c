#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	printf("Digite um número: ");
	scanf("%d", &n);

	if (n == 5) {

		printf("Igual a 5!\n");

	} else {

		if (n == 200) {

			printf("Igual a 200!\n");

		} else {

			if (n == 400) {

				printf("Igual a 400!\n");

			} else {

				printf("%d não é igual a 5, 200 ou 400\n", n);
			}
		}
	}

	if (n >= 500 && n <= 1000) {

		printf("Está entre 500 e 1000!\n");
	
	} else {

		printf("Não está entre 500 e 1000!\n");
	}

	return 0;
}