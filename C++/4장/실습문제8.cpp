#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	void setRadius(int r);
	double getArea();
};

void Circle::setRadius(int r)
{
	radius = r;
}

double Circle::getArea()
{
	return 3.14 * (radius * radius);
}

int main()
{
	Circle *circle;

	int num;
	int r, cnt = 0;

	cout << "���� ���� : ";
	cin >> num;
	
	circle = new Circle[num];

	for (int i = 0; i < num; i++)
	{
		cout << "�� " << i + 1 << " ������ : ";
		cin >> r;

		circle[i].setRadius(r);

		if (circle[i].getArea() > 100)
		{
			cnt++;
		}
	}

	cout << "������ 100���� ū �� : " << cnt << "��" << endl;

	delete[] circle;
}