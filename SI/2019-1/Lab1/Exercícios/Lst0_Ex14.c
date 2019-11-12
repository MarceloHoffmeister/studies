#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sal, reajuste;

	printf("Informe o salário: ");
	scanf("%f", &sal);

	printf("Informe o reajuste: ");
	scanf("%f", &reajuste);

	printf("O valor do novo salário é de R$%f\n", sal + (sal * (reajuste / 100)));

	return 0;
}