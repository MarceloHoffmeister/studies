/*
 ============================================================================
 Name        : pointerToSctruct.c
 Author      : Marcelo Hoffmeister
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Data.h"

int main(void) {

	Data j, *p, *q;

	p = cria_data();

	q = &j;

	atribui_data(p, "Marcelo", 26, 85.0);

	atribui_data(q, "Hoffmeister", 26, 85.0);

	printf("Nome: %s\n | Idade: %d\n | Peso: %.2f", p->nome, p->idade, p->peso);

	libera_data(p);

}
