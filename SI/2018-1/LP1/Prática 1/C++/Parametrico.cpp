#include <iostream>

using namespace std;

template <typename T>

class Pilha {
	private:
		T dados[100];
		int pos;
	public:
		Pilha() {
			this->pos = 0;
		}

		void empilhar(T valor) {
			dados[pos++] = valor;
		}

		T desempilhar() {
			return dados[--pos];
		}

		void imprimir() {
			for (int i = 0; i < this->pos; i++) {
				cout << this->dados[i] << endl;
			}
		}
};

int main() {
	Pilha<int> *pilhai = new Pilha<int>();
	Pilha<double> *pilhad = new Pilha<double>();
	pilhai->empilhar(4);
	pilhai->empilhar(6);
	pilhai->imprimir();
	int valor = pilhai->desempilhar();
	pilhai->imprimir();
	cout << "Valor 1: " << valor << endl;
	pilhad->empilhar(7);
	pilhad->empilhar(9);
	pilhad->imprimir();
	double valor2 = pilhad->desempilhar();
	pilhad->imprimir();
	cout << "Valor 2: " << valor2 << endl;
	return 0;
}