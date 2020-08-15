#include <iostream>
using namespace std;

class Tower
{
	int height;
public:
	Tower() { height = 1; }
	Tower(int h) { height = 100; }
	int getHeight();
};

int Tower::getHeight()
{
	return height;
}

int main()
{
	Tower myTower;
	Tower seoulTower(100);

	cout << "높이 : " << myTower.getHeight() << "m" << endl;
	cout << "높이 : " << seoulTower.getHeight() << "m" << endl;
}