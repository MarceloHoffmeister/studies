#include "Mother.h"
#include <iostream>

using namespace std;

Mother::Mother() {
	cout << "Mother ctor" << endl;
}

Mother::~Mother() {
	cout << "Mother dtor" << endl;
}

void Mother::sayHi() {
	cout << "Hi " << endl;
}