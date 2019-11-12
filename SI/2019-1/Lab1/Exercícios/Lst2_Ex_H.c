#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a, b, c, resp;

	printf("Informe o valor da variável A: ");
	scanf("%f", &a);

	printf("Informe o valor da variável B: ");
	scanf("%f", &b);

	printf("Informe o valor da variável C: ");
	scanf("%f", &c);

	resp = ((-1 * b) + (pow(b, 2) - (4 * a * c)));

	printf("A reposta é: %f\n", resp);

	return 0;
}