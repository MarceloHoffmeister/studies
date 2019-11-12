/*
 * matriz.h
 *
 *  Created on: 16 de set de 2019
 *      Author: hoffmeister
 */

#ifndef MATRIZ_H_
#define MATRIZ_H_

void populaMatriz(int **p, int l, int c);
void exibeMatriz(int **p, int l, int c);
void somaMatriz(int **matriz, int **mat1, int **mat2, int l, int c);
void liberaMatriz(int **mat, int l);


#endif /* MATRIZ_H_ */
