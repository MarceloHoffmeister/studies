#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, resp;

	resp = 0;

	printf("Escolha um número: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {

		if (i % 2 == 0) {
			resp -= i;
		} else {
			resp += i;
		}
	}

	printf("%d\n", resp);

	return 0;
}