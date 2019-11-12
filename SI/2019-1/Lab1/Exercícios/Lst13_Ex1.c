#include <stdio.h>
#include <stdlib.h>

int ano(int);

int main()
{

  int idade = 0;

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Seu ano de nascimento é %d\n", ano(idade));

  return 0;

}

int ano(int idade)
{

  return 2019 - idade;

}