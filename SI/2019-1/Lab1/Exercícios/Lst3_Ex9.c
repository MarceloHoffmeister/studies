#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	printf("Digite um número inteiro: ");
	scanf("%d", &n);

	if (n % 3 == 0) {

		printf("%d é múltiplo de 3\n", n);

	} else {

		printf("%d não é múltiplo de 3\n", n);

	}

	return 0;
}