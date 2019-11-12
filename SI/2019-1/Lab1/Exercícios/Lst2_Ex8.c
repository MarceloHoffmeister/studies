#include <stdio.h>
#include <stdlib.h>

int main()
{
	int l;

	printf("Informe a quantidade de hambúrgers: ");
	scanf("%d", &l);

	printf("O total de queijo(s) para compra é %.2f kilos\n", l * ((2 * 50) / 1000.0));
	printf("O total de presunto(s) para compra é %.2f kilos\n", l * (50 / 1000.0));
	printf("O total de hamburger(s) para compra é %.2f kilos\n", l * (1000 / 1000.0));

	return 0;
}