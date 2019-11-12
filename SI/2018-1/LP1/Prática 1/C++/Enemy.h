#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>

using namespace std;

class Enemy {
	protected:
		int attackPower;
	public:
		void setAttackPower(int a);
		virtual void attack();
};

#endif // ENEMY_H