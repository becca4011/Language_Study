#include <iostream>
using namespace std;

class Container // 통 하나
{
	int size; // 전체 저장량
public:
	Container() { size = 10; }
	void fill(); // 최대량(10)으로 채우기
	void consume(); // 1만큼 소모
	int getSize(); // 현재 크기 리턴
};

void Container::fill()
{
	size = 10;
}

void Container::consume()
{
	--size;
}

int Container::getSize()
{
	return size;
}

class coffeeVendingMachine
{
	Container tong[3]; // tong[0] : 커피, tong[1] : 물, tong[2] : 설탕

	void fill();

	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();

	void show();
public:
	void run(); // 자판기 작동
};

void coffeeVendingMachine::fill()
{
	tong[0].fill();
	tong[1].fill();
	tong[2].fill();
}

void coffeeVendingMachine::selectEspresso()
{
	tong[0].consume();
	tong[1].consume();
}

void coffeeVendingMachine::selectAmericano()
{
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
}

void coffeeVendingMachine::selectSugarCoffee()
{
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
	tong[2].consume();
}

void coffeeVendingMachine::show()
{
	cout << "커피 : " << tong[0].getSize() << ", 물 : " << tong[1].getSize() << ", 설탕 : " << tong[2].getSize() << endl;
}

void coffeeVendingMachine::run()
{
	int n;

	cout << "***** 커피자판기 작동 *****" << endl;

	while (true)
	{
		cout << "메뉴 - 에스프레소(1), 아메리카노(2), 설탕커피(3), 잔량보기(4), 채우기(5) >> ";
		cin >> n;

		if (n == 1 && tong[0].getSize() > 0 && tong[1].getSize() > 0)
		{
			selectEspresso();
			cout << "에스프레소 나왔습니다" << endl;
		}
		else if (n == 2 && tong[0].getSize() > 0 && tong[1].getSize() > 1)
		{
			selectAmericano();
			cout << "아메리카노 나왔습니다" << endl;
		}
		else if (n == 3 && tong[0].getSize() > 0 && tong[1].getSize() > 1 && tong[2].getSize() > 0)
		{
			selectSugarCoffee();
			cout << "설탕커피 나왔습니다" << endl;
		}
		else if (n == 4)
		{
			show();
		}
		else if (n == 5)
		{
			fill();
			show();
		}
		else if (n > 5)
		{
			cout << "없는 번호" << endl;
			break;
		}
		else
		{
			cout << "잔량 부족" << endl;
			break;
		}
	}
}

int main()
{
	coffeeVendingMachine cvm;
	cvm.run();
}