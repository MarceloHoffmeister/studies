#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n = 0, cont = 0;

	for (i = 1; i <= 5; i++) {

		printf("Escolha o %dº número: ", i);
		scanf("%d", &n);

		if (n < 0) cont++;

	}

	printf("%d\n", cont);

	return 0;
}