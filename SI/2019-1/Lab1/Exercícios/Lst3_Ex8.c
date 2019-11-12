#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	printf("Digite um número inteiro: ");
	scanf("%d", &n);

	if (n == 0) {

		printf("%d é nulo!\n", n);

	} else {

		if (n > 0) {

			printf("%d é positivo!\n", n);
		
		} else {

			printf("%d é negativo!\n", n);

		}
	}

	return 0;
}