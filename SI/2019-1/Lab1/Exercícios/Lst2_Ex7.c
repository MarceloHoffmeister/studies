#include <stdio.h>
#include <stdlib.h>

int main()
{
	float e, b, n, v;

	printf("Digite o total de eleitores: ");
	scanf("%f", &e);
	printf("Digite o total de votos brancos: ");
	scanf("%f", &b);
	printf("Digite o total de votos nulos: ");
	scanf("%f", &n);
	printf("Digite o total de votos válidos: ");
	scanf("%f", &v);

	printf("O total de votos brancos representa %.2f%% do total de votos\n", e * (b / 100));
	printf("O total de votos nulos representa %.2f%% do total de votos\n", e * (n / 100));
	printf("O total de votos válidos representa %.2f%% do total de votos\n", e * (v / 100));

	return 0;
}