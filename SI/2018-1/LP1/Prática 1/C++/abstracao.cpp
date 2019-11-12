#include <iostream>

using namespace std;

class X {
	protected:
		double valor;
	public:
		X(double valor) {
			this->valor = valor;
		}
		virtual void soma(double valor) = 0;
		void imprimir() {
			cout << this->valor << endl;
	}
};

class Y: public X {
	public:
		Y(double valor):X(valor) {}
		void soma(double valor) {
			this->valor += valor;
		}	
};

int main() {
	Y *ty = new Y(4.0);
	ty->soma(3.0);
	ty->imprimir();

	X *tx = new Y(5.0);
	tx->soma(1.0);
	tx->imprimir();
	return 0;
}