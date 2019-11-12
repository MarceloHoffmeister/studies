#ifndef TECNICO_H
#define TECNICO_H
#include "Pessoa.cpp"

using namespace std;

class Tecnico:public Pessoa {
	private:
		int id, horasTrabalhadas;
		string funcao;
	public:
		void imprime();
		void setId(int id);
		void setHorasTrabalhadas(int horasTrabalhadas);
		void setFuncao(string funcao);
		int getId();
		int getHorasTrabalhadas();
		string getFuncao();
		Tecnico(string nome, string endereco, string rg, string cpf, string senha, int id, int horasTrabalhadas, string funcao);
};

#endif // TECNICO_H