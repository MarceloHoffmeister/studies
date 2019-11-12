#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, t, resp;

	resp = 1;

	printf("Escolha um número: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i += 2) {

		t = i * i;

		resp *= t;

	}

	printf("%d\n", resp);

	return 0;
}