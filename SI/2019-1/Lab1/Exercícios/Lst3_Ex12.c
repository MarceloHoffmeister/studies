#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, x, y, z, maior, menor;

	printf("Digite a primeira média: ");
	scanf("%d", &a);

	printf("Digite a segunda média: ");
	scanf("%d", &b);

	printf("Digite a terceira média: ");
	scanf("%d", &x);

	printf("Digite a quarta média: ");
	scanf("%d", &y);

	printf("Digite a quinta média: ");
	scanf("%d", &z);

	if (a > b && a > x && a > y && a > z) {

		maior = a;

	}

	if (b > a && b > x && b > y && b > z) {

		maior = b;

	}

	if (x > a && x > b && x > y && x > z) {

		maior = x;

	}

	if (y > a && y > b && y > x && y > z) {

		maior = y;

	}

	if (z > a && z > b && z > x && z > y) {

		maior = z;

	}

	if (a < b && a < x && a < y && a < z) {

		menor = a;

	}

	if (b < a && b < x && b < y && b < z) {

		menor = b;

	}

	if (x < a && x < b && x < y && x < z) {

		menor = x;

	}

	if (y < a && y < b && y < x && y < z) {

		menor = y;

	}

	if (z < a && z < b && z < x && z < y) {

		menor = z;

	}

	printf("Menor: %d\n", menor);
	printf("Maior: %d\n", maior);

	return 0;
}