#include <iostream>
#include <string>
using namespace std;

class Circle
{
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle
{
	string name;
public:
	NamedCircle(int radius = 0, string n = "") : Circle(radius) { name = n; }
	void setRN(int rad, string n) { setRadius(rad); name = n; }
	string getN() { return name; }
};

int main()
{
	NamedCircle pizza[5];
	int rad;
	string name;

	cout << "5개의 정수 반지름과 원의 이름 입력" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << ">> ";
		cin >> rad >> name;

		pizza[i].setRN(rad, name);
	}

	double max = pizza[0].getArea();
	int cnt = 0;
	for (int i = 1; i < 5; i++)
	{
		if (max < pizza[i].getArea())
		{
			max = pizza[i].getArea();
			cnt = i;
		}
	}

	cout << "가장 면적이 큰 피자는 " << pizza[cnt].getN() << endl;
}