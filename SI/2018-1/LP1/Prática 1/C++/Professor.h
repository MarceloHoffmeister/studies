#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Pessoa.cpp"

using namespace std;

class Professor:public Pessoa {
	private:
		string areaAtuacao;
		string isConcursado;
		int quantDisciplinas;
	public:
		void imprime();
		void setAreaAtuacao(string areaAtuacao);
		void setIsConcursado(string isConcursado);
		void setQuantDisciplinas(int quantDisciplinas);
		string getAreaAtuacao();
		string getIsConcursado();
		int getQuantDisciplinas();
		Professor(string nome, string endereco, string rg, string cpf, string senha, string areaAtuacao, string isConcursado, int quantDisciplinas);
};

#endif // PROFESSOR_H