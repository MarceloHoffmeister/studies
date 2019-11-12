#include "Enemy.h"
#include "Ninja.h"
#include "Monster.h"
#include <iostream>

using namespace std;

void Enemy::setAttackPower(int a) {
	attackPower = a;
}

void Enemy::attack() {
	cout << "Enemy! " << endl;
}

int main() {
	Ninja n;
	Monster m;
	Enemy e;
	Enemy *e1 = &n;
	Enemy *e2 = &m;
	Enemy *e3 = &e;

	// e1->setAttackPower(20);
	// e2->setAttackPower(80);
	// e3->setAttackPower(30);

	e1->attack();
	e2->attack();
	e3->attack();

	// n.attack();
	// m.attack();
}
