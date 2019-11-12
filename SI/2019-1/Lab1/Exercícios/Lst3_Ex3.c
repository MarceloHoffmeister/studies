#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1, n2;

	printf("Digite o primeiro número: ");
	scanf("%d", &n1);

	printf("Digite o segund número: ");
	scanf("%d", &n2);

	if (n1 > n2) {

		printf("%d, %d\n", n1, n2);

	} else {

		printf("%d, %d\n", n2, n1);

	}

	return 0;
}