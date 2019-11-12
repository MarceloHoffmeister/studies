/*
 * ponteiro.c
 *
 *  Created on: 16 de set de 2019
 *      Author: hoffmeister
 */

#include <stdio.h>
#include <stdlib.h>
#include "ponteiro.h" /* declaração dos protótipos */

int **ponteiroInt(int l, int c)
{
    int **p, i = 0;

    // aloca um ponteiro com a quantidade recebida em l e c
    p = calloc(l, sizeof(int*));

    for(i = 0; i < l; i++) {

    	p[i] = calloc(c, sizeof(int));

    }

    if(p != NULL) {
        return p;
    }

    return 0;
}
