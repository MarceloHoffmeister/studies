#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i, n, exp, resp;

	resp = 0;

	printf("Escolha um número: ");
	scanf("%d", &n);

	printf("Escolha um expoente: ");
	scanf("%d", &exp);

	for(i = 1; i <= n; i++) {

		resp += pow(5,exp);

	}

	printf("%d\n", resp);

	return 0;
}