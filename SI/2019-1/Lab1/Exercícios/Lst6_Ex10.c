#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, dif, resp;

	resp = 0;

	printf("Escolha um número: ");
	scanf("%d", &n);

	printf("Escolha um diferencial: ");
	scanf("%d", &dif);

	dif = 1 + (1 + dif);

	for(i = 2; i <= n; i++) {

		resp += (1 + i * dif);

	}

	printf("%d\n", resp);

	return 0;
}