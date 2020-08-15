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
	virtual int calculate() = 0; // ���� ���� �Լ�, ������ ���� ���� ����
public:
	void run();
};

void LoopAdder::read()
{
	cout << name << ":" << endl;
	cout << "ó�� ������ �� ��° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}

void LoopAdder::write()
{
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
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