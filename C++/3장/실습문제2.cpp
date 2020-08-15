#include <iostream>
#include <string>
using namespace std;

class Date
{
	int year, month, day;
	string birth;
public:
	Date(int y, int m, int d) 
	{
		year = y;
		month = m;
		day = d;
	}

	Date(string s)
	{
		birth = s;
	}

	int getYear();
	int getMonth();
	int getDay();
	void show();
};

int Date::getYear()
{
	return year;
}

int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}

void Date::show()
{
	string a, b;

	a = birth.replace(birth.find('/'), 1, "³â");
	b = a.replace(a.find('/'), 1, "¿ù");

	cout << b << "ÀÏ" << endl;
}

int main()
{
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");

	independenceDay.show();
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
}