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
		cout << "원 " << i + 1 << " 반지름 : ";
		cin >> r;

		circle[i].setRadius(r);

		if (circle[i].getArea() > 100)
		{
			cnt++;
		}
	}

	cout << "면적이 100보다 큰 원 : " << cnt << "개" << endl;
}