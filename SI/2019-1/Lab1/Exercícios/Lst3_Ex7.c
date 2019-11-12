#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n;

	printf("Digite um número inteiro maior que 20: ");
	scanf("%f", &n);

	if (n > 20) {

		printf("A metade de n é: %.1f\n", n / 2.0);

	} else {

		printf("%.1f não é maior que 20!\n", n);

	}

	return 0;
}