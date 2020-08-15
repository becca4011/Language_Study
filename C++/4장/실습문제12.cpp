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
		cout << "�� " << i + 1 << "�� �̸�, ������ >> ";
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

	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;

	for (int i = 0; i < size; i++)
	{
		if (p[i].getName() == name)
		{
			cout << name << "�� ���� : " << p[i].getArea() << endl;
		}
	}
}

void CircleManager::searchByArea()
{
	int min;

	cout << "�ּ� ������ ������ �Է� >> ";
	cin >> min;

	cout << min << "���� ū �� �˻�" << endl;

	for (int i = 0; i < size; i++)
	{
		if (p[i].getArea() > min)
		{
			cout << p[i].getName() << "�� ���� : ";
			cout << p[i].getArea() << " / ";
		}
	}
	cout << endl;
}

int main()
{
	int n;

	cout << "���� ���� >> ";
	cin >> n;

	CircleManager cir(n);
	cir.searchByName();
	cir.searchByArea();
}