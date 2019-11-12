#include <iostream>
using namespace std;

class MyClass2 {
	public:
		int var;
		MyClass2() {}
		MyClass2(int a):var(a) {}

		MyClass2 operator+(MyClass2 &obj) {
			MyClass2 res;
			res.var = this->var + obj.var;
			return res;
		}
};

int main() {
	MyClass2 obj1(12), obj2(55);
	MyClass2 res = obj1 + obj2;

	cout << res.var << endl;
}