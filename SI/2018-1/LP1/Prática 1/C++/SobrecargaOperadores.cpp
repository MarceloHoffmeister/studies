#include <iostream>

using namespace std;

class Ponto {
	private:
		int x, y;
	public:
		Ponto(int x, int y) {
			this->x = x;
			this->y = y;
		}
		int getX() {
			return x;
		}
		int getY() {
			return y;
		}
		void print() {
			cout << "x: " << this->x << " y: " << this->y << endl;
		}
		Ponto operator+(int valor) {
			return Ponto(this->x + valor, this->y + valor);
		}
		Ponto operator*(int valor) {
			return Ponto(this->x * valor, this->y * valor);
		}
		void operator*(Ponto ponto) {
			this->x *= ponto.getX();
			this->y *= ponto.getY();
		}
};

int main() {
	Ponto p1(20, 30);
	Ponto p2 = p1 + 20;
	p1.print();
	p2.print();
	Ponto p3 = p1 * 2;
	p3.print();
	p1*p3;
	p1.print();
	return 0;
}