#include <iostream>
using namespace std;

int main()
{
	int menu = 0;
	int n = 0;

	cout << "***** �߱��� ***** \n";
	
	while (true)
	{
		cout << "«�� : 1 / ¥�� : 2 / ������ : 3 / ���� : 4 >> ";
		cin >> menu;

		if (menu > 4)
		{
			cout << "�ٽ� �ֹ� \n";
		}
		else if (menu != 4)
		{
			cout << "�� �κ�? ";
			cin >> n;

			if (menu == 1)
				cout << "«�� " << n << "�κ� ���Խ��ϴ� \n";
			else if (menu == 2)
				cout << "¥�� " << n << "�κ� ���Խ��ϴ� \n";
			else if (menu == 3)
				cout << "������ " << n << "�κ� ���Խ��ϴ� \n";
		}
		else if (menu == 4)
		{
			cout << "���� ���� �� \n";
			break;
		}
	}
}