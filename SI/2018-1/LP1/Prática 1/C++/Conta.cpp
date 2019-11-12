#include <iostream>

using namespace std;

class Operacao {
	public:
		virtual double calcular(double v1, double v2) = 0;
};

class Soma : public Operacao {
	public:
		double calcular(double v1, double v2) {
			return v1 + v2;
		}
};

class Subtracao : public Operacao {
	public:
		double calcular(double v1, double v2) {
			return v1 - v2;
		}
};

class Multiplicacao : public Operacao {
	public:
		double calcular(double v1, double v2) {
			return v1 * v2;
		}
};

class Conta {
	public:
		void calculo(Operacao *op, double v1, double v2) {
			cout << "Resultado: "  << op->calcular(v1, v2) << endl;
		}
};

int main() {
	Conta cont;
	cont.calculo(new Soma(), 8.0, 4.0);
	cont.calculo(new Subtracao(), 8.0, 4.0);
	cont.calculo(new Multiplicacao(), 8.0, 4.0);
	return 0;
}