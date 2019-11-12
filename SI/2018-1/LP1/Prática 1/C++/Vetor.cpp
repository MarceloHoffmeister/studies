#include <iostream>
#include "Vetor.h"

// using namespace std;

// class Vetor
// {
// 	private:
// 		int tamanho;
// 		int *valor;
// 	public:
// 		Vetor(int);
// 		~Vetor();
// 		bool addValor(int,int);
// 		void addValor(int);
// 		void imprimir();
// 		static Vetor *fabrica(int q)
// 		{
// 			int i;
// 			Vetor *v = new Vetor(q);
// 			for (i=0;i<q;i++)
// 			{
// 				v->addValor(0,i);
// 			}
// 			return v;
// 		}

// 		int *getValor()
// 		{
// 			return this->valor;
// 		}

// 		void setValor(int *valor,int tamanho)
// 		{
// 			this->valor = valor;
// 			this->tamanho = tamanho;
// 		}

// 		int getTamanho()
// 		{
// 			return this->tamanho;
// 		}
// 		void setTamanho(int tamanho)
// 		{
// 			if (tamanho>=this->tamanho)
// 			{
// 				int *nvalor = new int[tamanho];
// 				for (int i=0;i<this->tamanho;i++)
// 				{
// 					nvalor[i] = this->valor[i];
// 				}
// 				this->tamanho = tamanho;
// 				int *old = this->valor;
// 				this->valor = nvalor;
// 				delete old;
// 			}
// 			else
// 			{
// 				cout<<"Tamanho menor que o atual::Tamanho não alterado\n";
// 			}
// 		}
// };

Vetor::Vetor(int q) {
	if (q <= 0) {
		cout << "Erro: tamanho menor igual a zero" << endl;
	} else {
		tamanho = q;
		valor = new int[q];
	}
}

Vetor::~Vetor() {
	delete valor;
}

static Vetor *fabrica(int q) {
	int i;
	Vetor *v = new Vetor(q);
	for (i = 0; i < q; i++)
	{
		v->addValor(0,i);
	}
	return v;
}

int* Vetor::getValor() {
	return valor;
}

void Vetor::setValor(int *valor, int tamanho) {
	valor = valor;
	tamanho = tamanho;
}

int Vetor::getTamanho() {
	return this->tamanho;
}

void Vetor::setTamanho(int tamanho) {
	if (tamanho>=this->tamanho)	{
		int *nvalor = new int[tamanho];
		for (int i = 0; i < this->tamanho; i++)
		{
			nvalor[i] = this->valor[i];
		}
		this->tamanho = tamanho;
		int *old = this->valor;
		this->valor = nvalor;
		delete old;
	} else {
		cout << "Tamanho menor que o atual::Tamanho não alterado\n";
	}
}


bool Vetor::addValor(int val,int pos) {
	if (pos >= 0 && pos < tamanho) {
		valor[pos] = val;
		return true;
	} else {
		cout << "Erro: Fora do intervalo\n";
		return false;
	}
}

void Vetor::addValor(int val) {
	setTamanho(tamanho + 1);
	valor[tamanho - 1] = val;	
}

void Vetor::imprimir() {
	int i;
	for (i = 0;i < this->tamanho; i++) {
		cout << valor[i] << " ";
	}
	cout << endl;
}


int main() {
	Vetor v1(100);
	Vetor *v2 = new Vetor(20);
	Vetor *v3 = fabrica(10);

	cout << v1.addValor(20, 5) << endl;
	v1.imprimir();

	cout << v2->addValor(20, 5) << endl;
	v2->imprimir();

	cout << v3->addValor(20, 5) << endl;
	v3->imprimir();
    int *vet = new int[90];
	cout << v3->getTamanho() << endl;
	v3->setTamanho(15);
	v3->setValor(vet, 90);
	v3->imprimir();

	v3->setTamanho(5);
	v3->imprimir();

	delete v2;
	delete v3;

	return 0;
}