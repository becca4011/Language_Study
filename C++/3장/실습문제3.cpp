#include <iostream>
#include <string>
using namespace std;

class Account
{
	string name;
	int id, money;
public:
	Account(string s, int i, int m)
	{
		name = s;
		id = i;
		money = m;
	}

	string getOwner();
	int deposit(int m);
	int withdraw(int m);
	int inquiry();
};

string Account::getOwner() // ���� ����
{
	return name;
}

int Account::deposit(int m) // �Ա�
{
	money += m;
	return money;
}

int Account::withdraw(int m) // ���
{
	money -= m;
	return money;
}

int Account::inquiry() // �ܾ�
{
	return money;
}

int main()
{
	Account a("kitae", 1, 5000);

	a.deposit(50000);
	cout << a.getOwner() << "�� �ܾ� : " << a.inquiry() << endl;

	int money = a.withdraw(20000);
	cout << a.getOwner() << "�� �ܾ� : " << a.inquiry() << endl;
}