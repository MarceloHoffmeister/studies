#ifndef MYCLASS_H
#define MYCLASS_H
#include "MyClass.h"
#include <iostream>
using namespace std;

MyClass::MyClass(int a, int b)
: regVar(a), constVar(b)
{
	cout << "Construtor" << endl;
	cout << regVar << endl;
	cout << constVar << endl;

}

MyClass::~MyClass() {
	cout << "Destruidor" << endl;
}

void MyClass::myPrint() const {
	cout << "Hello" << endl;
}

void someFunc(MyClass &obj) {
	obj.regVar = 43;
	cout << obj.regVar << endl;
}

MyClass2::MyClass2(){}
MyClass2::MyClass2(int a):var(a) {}

void MyClass2::printInfo() {
	cout << var << endl;
	cout << this->var << endl;
	cout << (*this).var << endl;
}

MyClass2 MyClass2::operator+(MyClass2 &obj) {
	MyClass2 res;
	res.var = this->var + obj.var;
	return res;
}

int main() {
	// const MyClass obj;
	// obj.myPrint();
	MyClass obj(42, 33);
	someFunc(obj);
	MyClass2 obj2(45);
	obj2.printInfo();
	MyClass2 obj3(12), obj4(55);
	MyClass2 res = obj3 + obj4;
	cout << res.var << endl;
}

#endif // MYCLASS_H
