#include <iostream>
#include <string>
using namespace std;

int main()
{
	char menu[100];
	int n = 0;

	char es[] = "����������";
	char am[] = "�Ƹ޸�ī��";
	char ca[] = "īǪġ��";

	int money = 0;
	int sum = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500�� \n";
	
	while (sum < 20000)
	{
		cout << "�ֹ� >> ";
		cin >> menu >> n;

		if (strcmp(menu, es) == 0)
		{
			money = 2000 * n;
			cout << money << "�� �Դϴ�" << endl;

			sum += money;
		}
		else if (strcmp(menu, am) == 0)
		{
			money = 2300 * n;
			cout << money << "�� �Դϴ�" << endl;

			sum += money;
		}
		else if (strcmp(menu, ca) == 0)
		{
			money = 2500 * n;
			cout << money << "�� �Դϴ�" << endl;

			sum += money;
		}
	}

	cout << "���� " << sum << "�� �Ǹ�. Close \n";
}