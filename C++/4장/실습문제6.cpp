#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	cout << "�Ʒ��� �� �� �Է� (exit �Է� �� ����)" << endl;

	while (1)
	{
		cout << ">> ";
		getline(cin, str);

		if (str == "exit")
		{
			break;
		}
		else
		{
			for (int i = str.length() - 1; i >= 0; i--)
			{
				cout << str[i];
			}

			cout << endl;
		}
	}
}