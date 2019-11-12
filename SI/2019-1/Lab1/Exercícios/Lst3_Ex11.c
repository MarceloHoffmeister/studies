#include <stdio.h>
#include <stdlib.h>

int main()
{
	int l1, a1, l2, a2, l3, a3, p1, p2, p3, quant;

	quant = 0;

	printf("Digite o lado da primeira parede: ");
	scanf("%d", &l1);

	printf("Digite a altura da primeira parede: ");
	scanf("%d", &a1);

	printf("Digite o lado da segunda parede: ");
	scanf("%d", &l2);

	printf("Digite a altura da segunda parede: ");
	scanf("%d", &a2);

	printf("Digite o lado da terceira parede: ");
	scanf("%d", &l3);

	printf("Digite a altura da terceira parede: ");
	scanf("%d", &a3);

	p1 = l1 * a1;

	p2 = l2 * a2;

	p3 = l3 * a3;

	if (p1 > 100) { quant += 1; }

	if (p2 > 100) { quant += 1; }	

	if (p3 > 100) { quant += 1; }

	printf("%d das paredes tem área(s) maior(es) que 100m2\n", quant);

	return 0;
}