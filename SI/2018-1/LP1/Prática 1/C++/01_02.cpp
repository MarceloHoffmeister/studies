#include <iostream>
using namespace std;

int factorial(int n) {
	int result = 0;
	(n==1) ? result = 1 : result = n * factorial(n-1);
	return result;
}

int main() {
	int fact = 0, i = 0;
	cout << "Digite um número: ";
	cin >> i;
	fact = factorial(4);
	cout << "O fatorial de " << i << " é " << fact << endl;
	return 0;
}