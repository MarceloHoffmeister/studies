#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n = 0;

	for(i = 1; i <= 5; i++) {

		printf("Escolha o %dº número: ", i);
		scanf("%d", &n);
		printf("Quadrado: %d\n", i * i);

	}

	return 0;
}