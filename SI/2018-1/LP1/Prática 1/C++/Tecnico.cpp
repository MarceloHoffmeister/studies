#include <iostream>
#include <string>
#include "Tecnico.h"

void Tecnico::imprime() {
	cout << "Nome: " << getNome() << endl;
	cout << "Endereço: " << getEndereco() << endl;
	cout << "RG: " << getRG() << endl;
	cout << "CPF: " << getCPF() << endl;
	cout << "Número de identificação: " << id << endl;
	cout << "Função: " << funcao << endl;
	cout << "Horas trabalhadas: " << horasTrabalhadas << endl;
}
void Tecnico::setId(int id) {
	id = id;
}
void Tecnico::setHorasTrabalhadas(int horasTrabalhadas) {
	horasTrabalhadas = horasTrabalhadas;
}
void Tecnico::setFuncao(string funcao) {
	funcao = funcao;
}
int Tecnico::getId() {
	return id;
}
int Tecnico::getHorasTrabalhadas() {
	return horasTrabalhadas;
}
string Tecnico::getFuncao() {
	return funcao;
}
Tecnico::Tecnico(string nome, string endereco, string rg, string cpf, string senha, int id, int horasTrabalhadas, string funcao)
: Pessoa(nome, endereco, rg, cpf, senha), id(id), horasTrabalhadas(horasTrabalhadas), funcao(funcao) {}

int main() {
	Tecnico a("Marcelo", "Rua Ignácia", "RG do Marcelo", "CPF do Marcelo", "Senha do Marcelo", 37259, 360, "Programador senior");
	a.imprime();
}
