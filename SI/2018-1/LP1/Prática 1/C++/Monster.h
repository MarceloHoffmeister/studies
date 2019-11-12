#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>
#include "Enemy.h"

using namespace std;

class Monster:public Enemy {
	public:
		void attack();
};

#endif // MONSTER_H