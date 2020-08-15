#include <iostream>
#include <string>
using namespace std;

class LoopAdder
{
	string name;
	int x, y, sum;
	void read();
	void write();
protected:
	LoopAdder(string name = "") { this->name = name; }
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0; // 순수 가상 함수, 루프를 돌며 합을 구함
public:
	void run();
};

void LoopAdder::read()
{
	cout << name << ":" << endl;
	cout << "처음 수에서 두 번째 수까지 더합니다. 두 수를 입력하세요 >> ";
	cin >> x >> y;
}

void LoopAdder::write()
{
	cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다" << endl;
}

class WhileLoopAdder : public LoopAdder
{
public:
	WhileLoopAdder(string name) : LoopAdder(name) {}
	int calculate()
	{
		int sum = 0;
		int n = getX();
		while (true)
		{
			if (n <= getY())
			{
				sum += n;
				n++;
			}
			else
				break;
		}

		return sum;
	}
};

class DoWhileLoopAdder : public LoopAdder
{
public:
	DoWhileLoopAdder(string name) : LoopAdder(name) {}
	int calculate()
	{
		int sum = 0;
		int n = getX();
		do
		{
			sum += n;
			n++;
		} while (n <= getY());

		return sum;
	}
};

void LoopAdder::run()
{
	read();
	sum = calculate();
	write();
}

int main()
{
	WhileLoopAdder whileLoop("While Loop");
	whileLoop.run();

	DoWhileLoopAdder doWhileLoop("Do While Loop");
	doWhileLoop.run();
}