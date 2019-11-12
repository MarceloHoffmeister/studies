#include <iostream>
using namespace std;

int criaMatriz() {
	int tamanho = 0, aux = 0, i, j;
	cout << "Digite o tamanho da matriz: ";
	cin >> tamanho;
	int matriz[tamanho][tamanho];
	for (i = 0; i < tamanho; i++) {
		for (j = 0; j < tamanho; j++) {
			cout << "Digite um valor para a posição [" << i << "][" << j << "] da matriz: ";
			cin >> matriz[i][j];
		}
	}
	cout << "Matriz criada: " << endl;
	for (i = 0; i < tamanho; i++) {
		for (j = 0; j < tamanho; j++) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Matriz editada: " << endl;
	for (i = 0; i < tamanho; i++) {
		aux = matriz[i][i];
		for (j = 0; j < tamanho; j++) {
			matriz[i][j] -= aux;
		}
	}
	for (i = 0; i < tamanho; i++) {
		for (j = 0; j < tamanho; j++) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	criaMatriz();
}