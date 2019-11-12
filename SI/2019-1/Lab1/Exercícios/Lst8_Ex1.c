#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i = 0;

	do {

		printf("Escolha um número: ");
		scanf("%d", &n);

		if (n > 0) i++;

	} while (n > 0);

	printf("Foram digitados %d números positivos\n", i);

	return 0;
}