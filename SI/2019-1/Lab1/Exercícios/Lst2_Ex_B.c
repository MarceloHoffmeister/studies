#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, resp;

	printf("Informe o valor da variável A: ");
	scanf("%f", &a);

	printf("Informe o valor da variável B: ");
	scanf("%f", &b);

	resp = (a + b) / (a - b);

	printf("A reposta é: %f\n", resp);

	return 0;
}