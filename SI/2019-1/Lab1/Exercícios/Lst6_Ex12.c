#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i, n, resp;

	resp = 0;

	printf("Escolha um número: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {

		resp += pow(5,2);

	}

	printf("%d\n", resp);

	return 0;
}