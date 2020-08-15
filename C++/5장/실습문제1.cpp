#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle(int r = 1) { radius = r; }
	void setR(int r) { radius = r; }
	int getR() { return radius; }
};

void swap(Circle &a, Circle &b) // 참조에 의한 호출
{
	int n;

	n = a.getR();
	a.setR(b.getR());
	b.setR(n);
}

int main()
{
	int r;
	Circle c1, c2;

	cout << "a원 반지름 : ";
	cin >> r;
	c1.setR(r);

	cout << "b원 반지름 : ";
	cin >> r;
	c2.setR(r);

	cout << "<swap>" << endl;
	swap(c1, c2);

	cout << "a원 반지름 : " << c1.getR() << endl;
	cout << "b원 반지름 : " << c2.getR() << endl;
}