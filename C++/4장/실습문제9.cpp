#include <iostream>
#include <string>
using namespace std;

class Person
{
	string name;
	string tel;
public:
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string n, string t);
};

void Person::set(string n, string t)
{
	name = n;
	tel = t;
}

int main()
{
	Person nt[3];

	string n, t;

	cout << "�̸�, ��ȭ��ȣ �Է�" << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "��� " << i + 1 << " >> ";
		cin >> n >> t;

		nt[i].set(n, t);
	}

	cout << "��� ����� �̸� : ";
	for (int i = 0; i < 3; i++)
	{
		cout << nt[i].getName() << ' ';
	}
	cout << "\n\n";

	cout << "��ȭ��ȣ �˻� / �̸� �Է� : ";
	cin >> n;

	for (int i = 0; i < 3; i++)
	{
		if (nt[i].getName() == n)
		{
			cout << "��ȭ��ȣ : " << nt[i].getTel() << endl;
		}
		else
		{
			cout << "���� �̸�" << endl;
		}
	}
}