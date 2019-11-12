// Faça um programa que peça um número inteiro n do usuário e calcule a seguinte
// expressão: 1² - 3² + 5² - 7² + 9² - ... + n² .

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, resp, sinal = 1;

	resp = 0;

	printf("Escolha um número: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i += 2) {

		resp += sinal * (i * i);
		sinal = sinal * (-1);

	}

	printf("%d\n", resp);

	return 0;
}