#include <iostream>
#include <string>
using namespace std;

class MyClass {
	public:
		MyClass(int a, int b);
		~MyClass();
		void myPrint() const;
	private:
		int regVar;
		const int constVar;

	friend void someFunc(MyClass &obj);
};

class MyClass2 {
	public:
		int var;
		MyClass2();
		MyClass2(int a);
		void printInfo();
		MyClass2 operator+(MyClass2 &obj);
	private:
		
};