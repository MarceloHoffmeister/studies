#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a, resp;

	printf("Informe o valor da variável A: ");
	scanf("%f", &a);

	resp = (sin(a) + cos(a)) / tan(a);

	printf("A reposta é: %f\n", resp);

	return 0;
}