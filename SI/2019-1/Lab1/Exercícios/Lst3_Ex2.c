#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1, n2;

	printf("Digite o primeiro número: ");
	scanf("%d", &n1);

	printf("Digite o segund número: ");
	scanf("%d", &n2);

	if (n1 == n2) {

		printf("Os números são iguais\n");

	} else {

		printf("Os números são diferentes\n");

	}

	return 0;
}