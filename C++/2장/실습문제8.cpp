#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char name[100];
	char maxn[100] = "";

	cout << "5���� �̸��� \';\'�� �����Ͽ� �Է� \n";

	for (int i = 0; i < 5; i++)
	{
		cin.getline(name, 100, ';');

		cout << i + 1 << " : " << name << endl;

		if (strlen(name) > strlen(maxn))
		{
			strcpy_s(maxn, name);
		}
	}

	cout << "���� �� �̸� : " << maxn << endl;
}