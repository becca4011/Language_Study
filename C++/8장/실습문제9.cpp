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

	cout << "***** �Ѽ��װ��� ���Ű��� ȯ���մϴ�. *****" << endl;

	while (true)
	{
		cout << "���� : 1 / ��� : 2 / ���� : 3 / ������ : 4 >> ";
		cin >> menu;

		if (menu == 4)
		{
			cout << "���� �ý����� �����մϴ�." << endl;
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
			cout << "�߸��� �޴�" << endl;
		}
	}
}