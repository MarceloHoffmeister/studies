/*
 * Data.h
 *
 *  Created on: 11 de set de 2019
 *      Author: hoffmeister
 */

#ifndef DATA_H_
#define DATA_H_

typedef struct data {
    char nome[30];
    int idade;
    float peso;
}Data;

Data* cria_data();

void libera_data(Data* p);

int atribui_data(Data* p, char nome[30], int idade, float peso);

#endif /* DATA_H_ */
