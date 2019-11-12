#ifndef DAUGHTER_H
#define DAUGHTER_H
#include <iostream>
#include "Mother.h"

using namespace std;

class Daughter:public Mother {
	public:
		Daughter();
		~Daughter();
};

#endif // DAUGHTER_H