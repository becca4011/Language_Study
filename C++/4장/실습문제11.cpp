#include <iostream>
using namespace std;

class Container // �� �ϳ�
{
	int size; // ��ü ���差
public:
	Container() { size = 10; }
	void fill(); // �ִ뷮(10)���� ä���
	void consume(); // 1��ŭ �Ҹ�
	int getSize(); // ���� ũ�� ����
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
	Container tong[3]; // tong[0] : Ŀ��, tong[1] : ��, tong[2] : ����

	void fill();

	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();

	void show();
public:
	void run(); // ���Ǳ� �۵�
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
	cout << "Ŀ�� : " << tong[0].getSize() << ", �� : " << tong[1].getSize() << ", ���� : " << tong[2].getSize() << endl;
}

void coffeeVendingMachine::run()
{
	int n;

	cout << "***** Ŀ�����Ǳ� �۵� *****" << endl;

	while (true)
	{
		cout << "�޴� - ����������(1), �Ƹ޸�ī��(2), ����Ŀ��(3), �ܷ�����(4), ä���(5) >> ";
		cin >> n;

		if (n == 1 && tong[0].getSize() > 0 && tong[1].getSize() > 0)
		{
			selectEspresso();
			cout << "���������� ���Խ��ϴ�" << endl;
		}
		else if (n == 2 && tong[0].getSize() > 0 && tong[1].getSize() > 1)
		{
			selectAmericano();
			cout << "�Ƹ޸�ī�� ���Խ��ϴ�" << endl;
		}
		else if (n == 3 && tong[0].getSize() > 0 && tong[1].getSize() > 1 && tong[2].getSize() > 0)
		{
			selectSugarCoffee();
			cout << "����Ŀ�� ���Խ��ϴ�" << endl;
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
			cout << "���� ��ȣ" << endl;
			break;
		}
		else
		{
			cout << "�ܷ� ����" << endl;
			break;
		}
	}
}

int main()
{
	coffeeVendingMachine cvm;
	cvm.run();
}