#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, temp;

	a = 10;

	b = 20;

	printf("Valor da variável A: %d\n", a);

	printf("Valor da variável B: %d\n", b);

	temp = a;

	a = b;

	b = temp;

	printf("Valor da variável A: %d\n", a);

	printf("Valor da variável B: %d\n", b);

	return 0;
}