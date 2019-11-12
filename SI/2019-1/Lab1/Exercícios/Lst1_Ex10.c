#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;

	a = 10;

	b = 20;

	printf("Valor da variável A: %d\n", a);

	printf("Valor da variável B: %d\n", b);

	a = b + a;

	b = a - b;

	a = a - b;

	printf("Valor da variável A: %d\n", a);

	printf("Valor da variável B: %d\n", b);

	return 0;
}