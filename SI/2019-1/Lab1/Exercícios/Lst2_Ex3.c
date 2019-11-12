#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sal, new_sal;

	printf("Informe o salário: ");
	scanf("%f", &sal);

	new_sal = sal + (sal * 0.15);

	printf("Salário inicial: %.2f\n", sal);

	printf("Salário com aumento: %.2f\n", new_sal);

	printf("Salário com imposto: %.2f\n", new_sal - (new_sal * 0.08));

	return 0;
}