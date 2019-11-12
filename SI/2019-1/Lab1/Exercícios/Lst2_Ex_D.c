#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c, d, resp;

	printf("Informe o valor da variável A: ");
	scanf("%f", &a);

	printf("Informe o valor da variável B: ");
	scanf("%f", &b);

	printf("Informe o valor da variável C: ");
	scanf("%f", &c);

	printf("Informe o valor da variável D: ");
	scanf("%f", &d);

	resp = a + b / (c - d);

	printf("A reposta é: %f\n", resp);

	return 0;
}