#include <iostream>
#include <string>
using namespace std;

class Circle
{
	int radius;
	string name;
public:
	void setCircle(string name, int radius) { this->name = name; this->radius = radius; }
	double getArea() { return 3.14 * (radius * radius); }
	string getName() { return name; }
};

class CircleManager
{
	Circle *p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};

CircleManager::CircleManager(int size)
{
	this->size = size;
	p = new Circle[size];
	int r;
	string name;

	for (int i = 0; i < size; i++)
	{
		cout << "원 " << i + 1 << "의 이름, 반지름 >> ";
		cin >> name >> r;

		p[i].setCircle(name, r);
	}
}

CircleManager::~CircleManager()
{
	delete[] p;
}

void CircleManager::searchByName()
{
	string name;

	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;

	for (int i = 0; i < size; i++)
	{
		if (p[i].getName() == name)
		{
			cout << name << "의 면적 : " << p[i].getArea() << endl;
		}
	}
}

void CircleManager::searchByArea()
{
	int min;

	cout << "최소 면적을 정수로 입력 >> ";
	cin >> min;

	cout << min << "보다 큰 원 검색" << endl;

	for (int i = 0; i < size; i++)
	{
		if (p[i].getArea() > min)
		{
			cout << p[i].getName() << "의 면적 : ";
			cout << p[i].getArea() << " / ";
		}
	}
	cout << endl;
}

int main()
{
	int n;

	cout << "원의 개수 >> ";
	cin >> n;

	CircleManager cir(n);
	cir.searchByName();
	cir.searchByArea();
}