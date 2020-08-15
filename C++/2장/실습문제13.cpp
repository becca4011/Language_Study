#include <iostream>
using namespace std;

int main()
{
	int menu = 0;
	int n = 0;

	cout << "***** 중국집 ***** \n";
	
	while (true)
	{
		cout << "짬뽕 : 1 / 짜장 : 2 / 군만두 : 3 / 종료 : 4 >> ";
		cin >> menu;

		if (menu > 4)
		{
			cout << "다시 주문 \n";
		}
		else if (menu != 4)
		{
			cout << "몇 인분? ";
			cin >> n;

			if (menu == 1)
				cout << "짬뽕 " << n << "인분 나왔습니다 \n";
			else if (menu == 2)
				cout << "짜장 " << n << "인분 나왔습니다 \n";
			else if (menu == 3)
				cout << "군만두 " << n << "인분 나왔습니다 \n";
		}
		else if (menu == 4)
		{
			cout << "오늘 영업 끝 \n";
			break;
		}
	}
}