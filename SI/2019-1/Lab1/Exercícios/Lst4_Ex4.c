#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;

	printf("Escreva algum caractere qualquer: ");
	scanf(" %c", &c);

	switch(c)
	{
		case '0': printf("É um número\n"); break;
		case '1': printf("É um número\n"); break;
		case '2': printf("É um número\n"); break;
		case '3': printf("É um número\n"); break;
		case '4': printf("É um número\n"); break;
		case '5': printf("É um número\n"); break;
		case '6': printf("É um número\n"); break;
		case '7': printf("É um número\n"); break;
		case '8': printf("É um número\n"); break;
		case '9': printf("É um número\n"); break;

		case 'b': printf("É uma consoante\n"); break;
		case 'c': printf("É uma consoante\n"); break;
		case 'd': printf("É uma consoante\n"); break;
		case 'f': printf("É uma consoante\n"); break;
		case 'g': printf("É uma consoante\n"); break;
		case 'h': printf("É uma consoante\n"); break;
		case 'j': printf("É uma consoante\n"); break;
		case 'k': printf("É uma consoante\n"); break;
		case 'l': printf("É uma consoante\n"); break;
		case 'm': printf("É uma consoante\n"); break;
		case 'n': printf("É uma consoante\n"); break;
		case 'p': printf("É uma consoante\n"); break;
		case 'q': printf("É uma consoante\n"); break;
		case 'r': printf("É uma consoante\n"); break;
		case 's': printf("É uma consoante\n"); break;
		case 't': printf("É uma consoante\n"); break;
		case 'v': printf("É uma consoante\n"); break;
		case 'w': printf("É uma consoante\n"); break;
		case 'x': printf("É uma consoante\n"); break;
		case 'y': printf("É uma consoante\n"); break;
		case 'z': printf("É uma consoante\n"); break;

		case 'a': printf("É uma vogal\n"); break;
		case 'e': printf("É uma vogal\n"); break;
		case 'i': printf("É uma vogal\n"); break;
		case 'o': printf("É uma vogal\n"); break;
		case 'u': printf("É uma vogal\n"); break;

		default: printf("Caractere especial\n");
	}

	return 0;
}