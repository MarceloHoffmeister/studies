#include <stdio.h>
#include <stdlib.h>

int main()
{
	float val;

	printf("Informe o valor do HD: ");
	scanf("%f", &val);

	printf("O valor total do HD é de R$%.2f\n", val + (val * (6.38 / 100)));

	return 0;
}