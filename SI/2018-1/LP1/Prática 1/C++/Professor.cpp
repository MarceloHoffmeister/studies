#include <iostream>
#include <string>
#include "Professor.h"

void Professor::imprime() {
	cout << "Nome: " << getNome() << endl;
	cout << "Endereço: " << getEndereco() << endl;
	cout << "RG: " << getRG() << endl;
	cout << "CPF: " << getCPF() << endl;
	cout << "Área de atuação: " << areaAtuacao << endl;
	cout << "Quantidade de disciplinas: " << quantDisciplinas << endl;
	cout << "Concurso: " << getIsConcursado() << endl;
}
void Professor::setAreaAtuacao(string areaAtuacao) {
	areaAtuacao = areaAtuacao;
}
void Professor::setQuantDisciplinas(int quantDisciplinas) {
	quantDisciplinas = quantDisciplinas;
}
void Professor::setIsConcursado(string isConcursado) {
	isConcursado = isConcursado;
}
string Professor::getAreaAtuacao() {
	return areaAtuacao;
}
int Professor::getQuantDisciplinas() {
	return quantDisciplinas;
}
string Professor::getIsConcursado() {
	if (isConcursado == "sim" || isConcursado == "Sim") {
		return "Sim";
	} else {
		return "Não concursado";
	}
}
Professor::Professor(string nome, string endereco, string rg, string cpf, string senha, string areaAtuacao, string isConcursado, int quantDisciplinas)
: Pessoa(nome, endereco, rg, cpf, senha), areaAtuacao(areaAtuacao), isConcursado(isConcursado), quantDisciplinas(quantDisciplinas) {}

int main() {
	Professor a("Marcelo Hoffmesiter", "Rua A", "RG do Marcelo", "CPF do Marcelo", "Senha do Marcelo", "Matemática", "Sim", 12);
	a.imprime();
}