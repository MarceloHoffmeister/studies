#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, soma = 0;

	for (i = 1; i <= 20; i++) {

		printf("Escolha o %dº número: ", i);
		scanf("%d", &n);

		if ((n * n) < 225) {
			soma += n;
		}

		printf("Soma: %d\n", soma);
		
	}

	return 0;
}