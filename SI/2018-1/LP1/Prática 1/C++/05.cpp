#include <iostream>

using namespace std;

int verificaCPF() {
	int t = 14, i, a = 0;
	char cpf[t], numCPF[11];
	cout << "Digite o número do CPF: ";
	cin >> cpf;
	for (i = 0; i < 14; i++) {
		if (i != 3) {
			if (i != 7) {
				if (i != 11) {
					numCPF[i] = cpf[i];		
				}
			}
		}
	}
	cout << numCPF << endl;
}

int main() {
	verificaCPF();
	return 0;
}