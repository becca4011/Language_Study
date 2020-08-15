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

string Account::getOwner() // °èÁÂ ÁÖÀÎ
{
	return name;
}

int Account::deposit(int m) // ÀÔ±İ
{
	money += m;
	return money;
}

int Account::withdraw(int m) // Ãâ±İ
{
	money -= m;
	return money;
}

int Account::inquiry() // ÀÜ¾×
{
	return money;
}

int main()
{
	Account a("kitae", 1, 5000);

	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾× : " << a.inquiry() << endl;

	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾× : " << a.inquiry() << endl;
}