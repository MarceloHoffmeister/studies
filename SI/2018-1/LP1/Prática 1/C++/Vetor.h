#ifndef VETOR_H
#define VETOR_H

using namespace std;

class Vetor {
	private:
		int tamanho, *valor;
	public:
		Vetor(int);
		~Vetor();
		bool addValor(int, int);
		void addValor(int);
		void imprimir();
		static Vetor *fabrica(int q);
		int* getValor();
		void setValor(int *valor,int tamanho);
		int getTamanho();
		void setTamanho(int tamanho);
};

#endif // VETOR_H