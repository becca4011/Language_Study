#include <iostream>
using namespace std;

int main()
{
	char st[100];

	cout << "���ڿ� �Է� >> ";
	cin >> st;

	for (int i = 0; i < strlen(st); i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << st[j];
		}
		cout << endl;
	}
}