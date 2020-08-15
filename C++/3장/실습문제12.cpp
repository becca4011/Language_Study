#include <iostream>
#include "실습문제12.h"
using namespace std;

int main()
{
	Ram ram;

	ram.write(100, 20);
	ram.write(101, 30);

	char res = ram.read(100) + ram.read(101);

	ram.write(102, res);

	cout << "100번지 값 : " << (int)ram.read(100) << endl;
	cout << "101번지 값 : " << (int)ram.read(101) << endl;
	cout << "102번지 값 : " << (int)ram.read(102) << endl;
}