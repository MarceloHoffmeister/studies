#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c, d, e, f, resp;

	printf("Informe o valor da variável A: ");
	scanf("%f", &a);

	printf("Informe o valor da variável B: ");
	scanf("%f", &b);

	printf("Informe o valor da variável C: ");
	scanf("%f", &c);

	printf("Informe o valor da variável D: ");
	scanf("%f", &d);

	printf("Informe o valor da variável E: ");
	scanf("%f", &e);

	printf("Informe o valor da variável F: ");
	scanf("%f", &f);

	resp = (a + b / c) / (d - e / f);

	printf("A reposta é: %f\n", resp);

	return 0;
}