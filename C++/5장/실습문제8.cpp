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
	MyIntStack(const MyIntStack &s); // 복사 생성자
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
		n = p[tos - 1]; // push에서 top++ 때문에 1 커진듯?
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

	MyIntStack b = a; // 복사 생성
	b.push(30);

	int n;
	a.pop(n);
	cout << "스텍 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스텍 b에서 팝한 값 " << n << endl;
}