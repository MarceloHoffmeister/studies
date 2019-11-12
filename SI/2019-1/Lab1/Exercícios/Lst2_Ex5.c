#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, c, d, u, mod;

	printf("Digite um número maior que 99 e menor que 1000: ");
	scanf("%d", &n);

	c = n / 100;

	mod = n % 100;

	d = mod / 10;

	u = mod % 10;

	printf("CENTENA: X %d\n", c);

	printf("DEZENAo: Y %d\n", d);

	printf("UNIDADE: Z %d\n", u);

	return 0;
}