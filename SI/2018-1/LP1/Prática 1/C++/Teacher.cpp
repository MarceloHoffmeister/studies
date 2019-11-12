#include <iostream>

using namespace std;

class Teacher {
	public:
		double calcSalario(double valorBase) {
			return valorBase * 1;
		}
};

class UniversityTeacher:public Teacher {
	public:
		double calcSalario(double valorBase) {
			return valorBase * 1.5;
		}
};

class FirstTeacher:public Teacher {
	public:
		double calcSalario(double valorBase) {
			return valorBase * 1.3;
		}
};

int main() {
	Teacher *prof = new Teacher();
	UniversityTeacher *profU = new UniversityTeacher();
	FirstTeacher *profP = new FirstTeacher();
	Teacher *profPoli = new UniversityTeacher();
	Teacher *profPoli2 = new FirstTeacher();

	cout << prof->calcSalario(1000.0) << endl;
	cout << profU->calcSalario(1000.0) << endl;
	cout << profP->calcSalario(1000.0) << endl;
	cout << profPoli->calcSalario(1000.0) << endl;

	cout << "Novos" << endl;
	Teacher vet[4];
	Teacher *obj = new Teacher();
	vet[0] = *obj;
	obj = new UniversityTeacher();
	vet[1] = *obj;
	obj = new FirstTeacher();
	vet[2] = *obj;
	obj =  new Teacher();
	vet[3] =  *obj;

	for (int i = 0; i < 4; i++) {
		cout << vet[i].calcSalario(1000.0) << endl;
	}

	return 0;
}