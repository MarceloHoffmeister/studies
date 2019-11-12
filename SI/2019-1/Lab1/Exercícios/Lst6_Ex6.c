#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, sinal = 1, n, resp = 0;

	resp = 0;

	printf("Escolha um número: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i += 2) {

		resp += sinal * i;
		sinal = sinal * (-1);
	}

	printf("%d\n", resp);

	return 0;
}