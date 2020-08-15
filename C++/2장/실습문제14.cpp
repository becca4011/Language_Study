#include <iostream>
#include <string>
using namespace std;

int main()
{
	char menu[100];
	int n = 0;

	char es[] = "에스프레소";
	char am[] = "아메리카노";
	char ca[] = "카푸치노";

	int money = 0;
	int sum = 0;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원 \n";
	
	while (sum < 20000)
	{
		cout << "주문 >> ";
		cin >> menu >> n;

		if (strcmp(menu, es) == 0)
		{
			money = 2000 * n;
			cout << money << "원 입니다" << endl;

			sum += money;
		}
		else if (strcmp(menu, am) == 0)
		{
			money = 2300 * n;
			cout << money << "원 입니다" << endl;

			sum += money;
		}
		else if (strcmp(menu, ca) == 0)
		{
			money = 2500 * n;
			cout << money << "원 입니다" << endl;

			sum += money;
		}
	}

	cout << "오늘 " << sum << "원 판매. Close \n";
}