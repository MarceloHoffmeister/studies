#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0, i = 0;

	do {

		printf("Escolha um número: ");
		scanf("%d", &n);

		if (n >= 100 && n <= 200) {

			i++;

		}

	} while (n != 0);

	printf("Foram digitados %d números entre 100 e 200\n", i);

	return 0;
}