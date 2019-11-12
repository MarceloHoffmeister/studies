#include <stdio.h>
#include <stdlib.h>

int main()
{
  int A[5][10], i, j;

  for (i = 0; i < 5; i++) {
    
    for (j = 0; j < 10; j++) {

      printf("Digite um valor para a posição [%d][%d] da matriz A: ", i, j);
      scanf("%d", &A[i][j]);

    }

  }

  for (i = 0; i < 5; i++) {
    
    for (j = 0; j < 10; j++) {

      printf("%d ", A[i][j]);

    }

    printf("\n");

  }

  return 0;
}