#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1, s2, s3, s4, s5;
	int female, m;
	float media, a1, a2, a3, a4, a5, f, maior;

	f = 0;
	female = 0;
	m = 0;

	printf("Digite a altura da primeira pessoa: ");
	scanf("%f", &a1);

	printf("Digite o sexo da primeira pessoa: ");
	scanf(" %c", &s1);

	if (s1 == 'f') {

		f += a1;
		female += 1;

	} else {

		m += 1;

	}

	printf("Digite a altura da segunda pessoa: ");
	scanf("%f", &a2);

	printf("Digite o sexo da segunda pessoa: ");
	scanf(" %c", &s2);

	if (s2 == 'f') {

		f += a2;
		female += 1;

	} else {

		m += 1;

	}

	printf("Digite a altura da terceira pessoa: ");
	scanf("%f", &a3);

	printf("Digite o sexo da terceira pessoa: ");
	scanf(" %c", &s3);

	if (s3 == 'f') {

		f += a3;
		female += 1;

	} else {

		m += 1;

	}

	printf("Digite a altura da quarta pessoa: ");
	scanf("%f", &a4);

	printf("Digite o sexo da quarta pessoa: ");
	scanf(" %c", &s4);

	if (s4 == 'f') {

		f += a4;
		female += 1;

	} else {

		m += 1;

	}

	printf("Digite a altura da quinta pessoa: ");
	scanf("%f", &a5);

	printf("Digite o sexo da quinta pessoa: ");
	scanf(" %c", &s5);

	if (s5 == 'f') {

		f += a5;
		female += 1;

	} else {

		m += 1;

	}

	if (a1 > a2 && a1 > a3 && a1 > a4 && a1 > a5) {

		maior = a1;

	}

	if (a2 > a1 && a2 > a3 && a2 > a4 && a2 > a5) {

		maior = a2;

	}

	if (a3 > a1 && a3 > a2 && a3 > a4 && a3 > a5) {

		maior = a3;

	}
	
	if (a4 > a1 && a4 > a2 && a4 > a3 && a4 > a5) {

		maior = a4;

	}

	if (a5 > a1 && a5 > a2 && a5 > a3 && a5 > a4) {

		maior = a5;

	}

	media = f / female;

	printf("A maior altura é %.1f\n", maior);
	printf("A média da altura das mulheres é %.1f\n", media);
	printf("A quantidade de homens é %d\n", m);

	return 0;
}