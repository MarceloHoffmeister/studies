#ifndef NINJA_H
#define NINJA_H
#include <iostream>
#include "Enemy.h"

using namespace std;

class Ninja:public Enemy {
	public:
		void attack();
};

#endif // NINJA_H