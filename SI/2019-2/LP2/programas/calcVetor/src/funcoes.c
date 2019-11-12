/*
 * funcoes.c
 *
 *  Created on: 16 de set de 2019
 *      Author: hoffmeister
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h" /* declaração dos protótipos */
#include "ponteiro.h"
#include "vetor.h"

void menu()
{

    int op = 0;

    printf("Menu de opções\n");
    printf("[1] Soma vetor\n");
    printf("[2] Produto escalar\n");
    printf("[3] Produto interno\n");
    printf("[4] Produto vetorial\n");
    printf("\nEscolha uma opção: ");
    scanf("%d", &op);

    switch(op)
    {
        case 1:
            somarVetores();
        break;

        case 2:
            printf("\nFunção 2\n");
        break;

        case 3:
            printf("\nFunção 3\n");
        break;

        case 4:
            printf("\nFunção 4\n");
        break;

        default:
            printf("\nValor inválido!");

    }

    printf("\n");

}

void somarVetores()
{
    int n = 0, *vet1, *vet2;

    printf("Tamanho desejado do vetor: ");
    scanf("%d", &n);
    vet1 = ponteiroInt(n);
    vet2 = ponteiroInt(n);
    populaVetor(vet1, n);
    populaVetor(vet2, n);
    printf("\nPrimeiro vetor: ");
    exibeVetor(vet1, n);
    printf("\nSegundo vetor: ");
    exibeVetor(vet2, n);
    somaVetor(vet1, vet2, n);
    free(vet1);
    free(vet2);

}

