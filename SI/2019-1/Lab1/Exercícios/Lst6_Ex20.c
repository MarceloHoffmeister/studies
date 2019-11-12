#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, t = 1;

	printf("Escolha um número: ");
	scanf("%d", &n);

	printf("%d ", n);

	for(i = n; i >= 1; i--) {

		printf("%d - %d ", n, t);
		t++;

	}

	printf("\n");

	return 0;
}