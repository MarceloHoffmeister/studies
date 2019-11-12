/*
 * Data.c
 *
 *  Created on: 11 de set de 2019
 *      Author: hoffmeister
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Data.h" // inclusão dos protótipos

Data* cria_data() {
    Data* p = (Data*) malloc(sizeof(Data));

    return p;
}

void libera_data(Data* p) {
    free(p);
}

int atribui_data(Data* p, char nome[30], int idade, float peso) {
    if(p == NULL) return 0;

    strcpy(p->nome, nome);
    p->idade = idade;
    p->peso = peso;
    return 1;
}

