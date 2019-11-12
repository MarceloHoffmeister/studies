#include <stdio.h>
#include <stdlib.h>

void tabuada(int);

int main()
{

	int n = 0;

	printf("Digite um número para cálculo da tabuada: ");
	scanf("%d", &n);

	tabuada(n);

	return 0;

}

void tabuada(int n)
{

	int i;

	printf("Tabuada do %d:\n", n);

	for(i = 1; i <= 10; i++) {

		printf("%d x %d = %d\n", i, n, i*n);

	}

}