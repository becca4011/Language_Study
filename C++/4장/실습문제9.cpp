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

	cout << "이름, 전화번호 입력" << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "사람 " << i + 1 << " >> ";
		cin >> n >> t;

		nt[i].set(n, t);
	}

	cout << "모든 사람의 이름 : ";
	for (int i = 0; i < 3; i++)
	{
		cout << nt[i].getName() << ' ';
	}
	cout << "\n\n";

	cout << "전화번호 검색 / 이름 입력 : ";
	cin >> n;

	for (int i = 0; i < 3; i++)
	{
		if (nt[i].getName() == n)
		{
			cout << "전화번호 : " << nt[i].getTel() << endl;
		}
		else
		{
			cout << "없는 이름" << endl;
		}
	}
}