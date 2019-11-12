/*
 * vetor.c
 *
 *  Created on: 16 de set de 2019
 *      Author: hoffmeister
 */

#include <stdio.h>
#include <stdlib.h>
#include "vetor.h" /* declaração dos protótipos */

void populaVetor(int *p, int tam)
{
    int i = 0;

    // popula o ponteiro recebido com a variável vlr e itera a posição do ponteiro
    for (i = 0; i < tam; i++) {

        *p = (rand() % 100) + 1;
        p++;

    }

}

void exibeVetor(int *p, int tam)
{
    int i = 0;

    printf("[");
    for (i = 0; i < tam; i++) {
        printf("%d ", *p);
        p++;
    }
    printf("]");
}

void somaVetor(int *vet1, int *vet2, int tam)
{
    int i = 0, vetor[tam];

    for(i = 0; i < tam; i++) {

        vetor[i] = vet1[i] + vet2[i];

    }

    printf("\nSoma dos vetores: ");
    exibeVetor(vetor, tam);

}
