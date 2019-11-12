/*
 * ponteiro.c
 *
 *  Created on: 16 de set de 2019
 *      Author: hoffmeister
 */

#include <stdio.h>
#include <stdlib.h>
#include "ponteiro.h" /* declaração dos protótipos */

int *ponteiroInt(int n)
{
    int *p;
    // aloca um ponteiro com a quantidade recebida em n
    p = calloc(n, sizeof(int));
    if(p != NULL) {
        return p;
    }
    return 0;
}
