/*
 * matriz.c
 *
 *  Created on: 16 de set de 2019
 *      Author: hoffmeister
 */

#include <stdio.h>
#include <stdlib.h>
#include "matriz.h" /* declaração dos protótipos */

void populaMatriz(int **p, int l, int c)
{
    int i = 0, j = 0;

    // popula o ponteiro recebido com a variável vlr e itera a posição do ponteiro
    for(i = 0; i < l; i++) {

    	for(j = 0; j < c; j++) {

    		p[i][j] = (rand() % 100) + 1;

    	}

    }

}

void exibeMatriz(int **p, int l, int c)
{
	int i = 0, j = 0;

    for(i = 0; i < l; i++) {

    	for(j = 0; j < c; j++) {

    		printf("%d ", p[i][j]);

    	}

    	printf("\n");

    }

}

void somaMatriz(int **matriz, int **mat1, int **mat2, int l, int c)
{
    int i = 0, j = 0;

    for(i = 0; i < l; i++) {

    	for(j = 0; j < c; j++) {

    		matriz[i][j] = mat1[i][j] + mat2[i][j];

    	}

    }

}

void liberaMatriz(int **mat, int l)
{
	int i = 0;

	for(i = 0; i < l; i++) {

		free(mat[i]);

	}

	free(mat);

}
