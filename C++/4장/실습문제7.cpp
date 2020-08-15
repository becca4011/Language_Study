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
	Circle circle[3];
	int r, cnt = 0;

	for (int i = 0; i < 3; i++)
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
}