#include <iostream>
using namespace std;

class Birthday {
	public:
		Birthday(int m, int d, int y);
		void printDate();
	private:
		int month;
		int day;
		int year;
};