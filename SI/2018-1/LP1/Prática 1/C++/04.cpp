#include <iostream>

using namespace std;

int ordenaVet() {
	int t = 0, aux = 0, i, j;
	cout << "Digite o tamanho do vetor: ";
	cin >> t;
	int vetor[t];
	for (i = 0; i < t; i++) {
		cout << "Preencha o valor do vetor na posição [" << i << "]: ";
		cin >> vetor[i];
	}
	cout << "Vetor puro: " << endl;
	for (i = 0; i < t; i++) {
		cout << vetor[i] << " ";
	}
	cout << endl;
	for (i = t-1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (vetor[j] > vetor [j+1]) {
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}
	cout << "Vetor ordenado: " << endl;
	for (i = 0; i < t; i++) {
		cout << vetor[i] << " ";
	}
	cout << endl;
}

int main() {
	ordenaVet();
	return 0;
}