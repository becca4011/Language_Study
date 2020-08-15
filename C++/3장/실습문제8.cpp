#include <iostream>
#include <string>
using namespace std;

class Integer
{
	int num;
public:
	Integer(int n){ num = n; }
	Integer(string s){ num = stoi(s); }

	int get();
	void set(int n);
	int isEven();
};

int Integer::get()
{
	return num;
}

void Integer::set(int n)
{
	num = n;
}

int Integer::isEven()
{
	if (num % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	Integer n(30);
	cout << n.get() << ' ';

	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}