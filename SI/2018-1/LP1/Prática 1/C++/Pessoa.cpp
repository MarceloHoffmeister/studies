#include <iostream>
#include <string>
#include "Pessoa.h"

void Pessoa::imprime() {
	cout << "Nome: " << nome << endl;
	cout << "Endereço: " << endereco << endl;
	cout << "RG: " << rg << endl;
	cout << "CPF: " << cpf << endl;
}
void Pessoa::setNome(string nome) {
	nome = nome;
}
void Pessoa::setEndereco(string endereco) {
	endereco = endereco;
}
void Pessoa::setRG(string rg) {
	rg = rg;
}
void Pessoa::setCPF(string cpf) {
	cpf = cpf;
}
void Pessoa::setSenha(string senha) {
	senha = senha;
}
string Pessoa::getNome() {
	return nome;
}
string Pessoa::getEndereco() {
	return endereco;
}
string Pessoa::getRG() {
	return rg;
}
string Pessoa::getCPF() {
	return cpf;
}
string Pessoa::getSenha() {
	return senha;
}
Pessoa::Pessoa(string nome, string endereco, string rg, string cpf, string senha)
: nome(nome), endereco(endereco), rg(rg), cpf(cpf), senha(senha) {}

// int main() {
// 	Pessoa a("Marcelo", "Rua Ignácia", "RG do Marcelo", "CPF do Marcelo", "Senha do Marcelo");
// 	a.imprime();
// }
