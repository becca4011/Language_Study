#include <iostream>
using namespace std;

class Accumulator
{
	int value;
public:
	Accumulator(int value) { this->value = value; }
	Accumulator &add(int n);
	int get() { return value; }
};

Accumulator& Accumulator::add(int n)
{
	value += n;
	return *this; // 자기 자신의 참조 리턴
}

int main()
{
	Accumulator acc(10);
	acc.add(5).add(6).add(7);
	cout << acc.get() << endl;
}