/*
 * funcoes.c
 *
 *  Created on: 16 de set de 2019
 *      Author: hoffmeister
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
#include "ponteiro.h"
#include "matriz.h"

void somarMatrizes()
{
    int l = 0, c = 0, **mat1, **mat2, **matriz;

    printf("Tamanho desejado de linhas: ");
    scanf("%d", &l);
    printf("Tamanho desejado de colunas: ");
    scanf("%d", &c);
    mat1 = ponteiroInt(l, c);
    mat2 = ponteiroInt(l, c);
    matriz = ponteiroInt(l, c);
    populaMatriz(mat1, l, c);
    populaMatriz(mat2, l, c);
    printf("\nPrimeira matriz:\n");
    exibeMatriz(mat1, l, c);
    printf("\nSegunda matriz:\n");
    exibeMatriz(mat2, l, c);
    printf("\nSoma das matrizes: \n");
    somaMatriz(matriz, mat1, mat2, l, c);
    exibeMatriz(matriz, l, c);
    liberaMatriz(mat1, l);
    liberaMatriz(mat2, l);
    liberaMatriz(matriz, l);

}
