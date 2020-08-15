#include <iostream>
using namespace std;

class Console
{

};

class Seat
{

};

class Schedule
{

};

class AirlineBook
{

};

int main()
{
	int menu;

	cout << "***** 한성항공에 오신것을 환영합니다. *****" << endl;

	while (true)
	{
		cout << "예약 : 1 / 취소 : 2 / 보기 : 3 / 끝내기 : 4 >> ";
		cin >> menu;

		if (menu == 4)
		{
			cout << "예약 시스템을 종료합니다." << endl;
			break;
		}
		else if (menu == 1)
		{

		}
		else if (menu == 2)
		{

		}
		else if (menu == 3)
		{

		}
		else
		{
			cout << "잘못된 메뉴" << endl;
		}
	}
}