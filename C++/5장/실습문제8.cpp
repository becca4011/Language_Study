#include <iostream>
using namespace std;

class MyIntStack
{
	int *p;
	int size;
	int tos;
public:
	MyIntStack() {}
	MyIntStack(int size);
	MyIntStack(const MyIntStack &s); // ���� ������
	~MyIntStack();

	bool push(int n);
	bool pop(int &n);
};
/*
MyIntStack::MyIntStack()
{
	tos = 0;
	size = 1;  
	p = new int[size];
}
*/
MyIntStack::MyIntStack(int size)
{ 
	tos = 0;
	this->size = size;
	p = new int[size];
}

MyIntStack::MyIntStack(const MyIntStack &s)
{
	this->tos = s.tos;
	this->size = s.size; 
	this->p = new int[s.size];

	for (int i = 0; i < s.tos; i++)
	{
		this->p[i] = s.p[i];
	}
}

MyIntStack::~MyIntStack()
{
	delete[] p;
}

bool MyIntStack::push(int n)
{
	if (tos < size)
	{
		p[tos] = n;
		tos++;
		return true;
	}
	else
		return false;
}

bool MyIntStack::pop(int &n)
{
	if (tos >= 0)
	{
		n = p[tos - 1]; // push���� top++ ������ 1 Ŀ����?
		tos--;
		return true;
	}
	else
		return false;
}

int main()
{
	MyIntStack a(10);
	a.push(10);
	a.push(20);

	MyIntStack b = a; // ���� ����
	b.push(30);

	int n;
	a.pop(n);
	cout << "���� a���� ���� �� " << n << endl;
	b.pop(n);
	cout << "���� b���� ���� �� " << n << endl;
}