#ifndef PESSOA_H
#define PESSOA_H

using namespace std;

class Pessoa {
	private:
		string nome, endereco, rg, cpf;
	protected:
		string senha;
	public:
		void imprime();
		void setNome(string nome);
		void setEndereco(string endereco);
		void setRG(string rg);
		void setCPF(string cpf);
		void setSenha(string senha);
		string getNome();
		string getEndereco();
		string getRG();
		string getCPF();
		string getSenha();
		Pessoa(string nome, string endereco, string rg, string cpf, string senha);
};

#endif // PESSOA_H