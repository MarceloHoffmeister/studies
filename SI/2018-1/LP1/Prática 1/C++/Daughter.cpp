#include "Daughter.h"
#include <iostream>

using namespace std;

Daughter::Daughter() {
	cout << "Daughter ctor" << endl;
}

Daughter::~Daughter() {
	cout << "Daughter dtor" << endl;
}

int main() {
	Daughter d;
	Mother m;
	d.sayHi();
}