#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	string str;
	int ran;

	cout << "�Ʒ��� �� �� �Է� (exit �Է� �� ����)" << endl;

	while (1)
	{
		cout << ">> ";
		getline(cin, str);
		ran = rand() % (str.length());

		if (str == "exit")
		{
			break;
		}
		else
		{
			str[ran] = char(rand() % (122 - 97 + 1) + 97);
			cout << str << endl;
		}
	}
}