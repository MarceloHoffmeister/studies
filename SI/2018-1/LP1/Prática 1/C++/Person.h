#include <iostream>
#include <string>
#include "Birthday.h"
using namespace std;

class Person {
	public:
		Person(string n, Birthday b);
		void printInfo();
	private:
		string name;
		Birthday bd;
};