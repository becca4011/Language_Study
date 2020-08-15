#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " �� ��" << endl; }

	friend Circle operator+ (int n, Circle c);
};

Circle operator+ (int n, Circle c)
{
	c.radius += n;
	return c;

	/*
	Circle tmp;
	tmp.radius = n + c.radius;
	return tmp;
	*/
}

int main()
{
	Circle a(5), b(4);
	b = 1 + a;

	a.show();
	b.show();
}