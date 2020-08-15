#include <iostream>
using namespace std;

class AbstractStack
{
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int &n) = 0;
	virtual int size() = 0; // ���� ���ÿ� ����� ���� ���� ����
};

class IntStack : public AbstractStack
{
	int *stack;
	int max, top;
public:
	IntStack(int n) { stack = new int[n]; max = n; top = 0; }
	bool push(int n);
	bool pop(int &n);
	int size() { return top; }
};

bool IntStack::push(int n)
{
	if (top == max)
		return false;
	else
	{
		stack[top] = n;
		top++;

		return true;
	}
}

bool IntStack::pop(int &n)
{
	if (top < 0)
		return false;
	else
	{
		n = stack[top - 1];
		top--;
		return true;
	}
}

int main()
{
	IntStack intstack(10);
	int re;

	intstack.push(10);
	intstack.push(20);
	intstack.push(30);
	intstack.push(40);

	cout << "���� ���� ���� : " << intstack.size() << "��" << endl;
	intstack.pop(re);

	cout << "pop : " << re << endl;
	intstack.pop(re);

	cout << "pop : " << re << endl;
	intstack.pop(re);

	cout << "pop : " << re << endl;

	cout << "���� ���� ���� : " << intstack.size() << "��" << endl;
}