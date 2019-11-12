#include <iostream>
#include <string>
using namespace std;

class BankAccount {
	public:
		void sayHi() {
			cout << "Hi\n" << endl;
		}
};

class myClass {
	public:
		string name;
};

class mySecondClass {
	public:
		mySecondClass() {
			cout << "Teste de construtor\n";
		}
		void setName(string x) {
			name = x;
		}
		string getName() {
			return name;
		}
	private:
		string name;
};

int main() {
	BankAccount teste;
	teste.sayHi();
	// 
	myClass myObj;
	myObj.name = "Marcelo Hoffmeister\n";
	cout << myObj.name;
	// 
	mySecondClass mySecObj;
	mySecObj.setName("Marcelo Hoffmeister too\n");
	// 
	cout << mySecObj.getName();
	// 
	return 0;
}