#ifndef PERSON_H
#define PERSON_H
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person(string n, Birthday b) 
: name(n), bd(b)
{

}

void Person::printInfo() {
	cout << name << endl;
	bd.printDate();
}

int main() {
	Birthday bd(2, 21, 1985);
	Person p("David", bd);
	p.printInfo();
}

#endif // PERSON_H