#include <iostream>
using namespace std;

int main()
{
	char word[100];
	int cnt = 0;

	cout << "���ڵ��� �Է�(100�� �̸�)\n";

	cin.getline(word, 100);

	for (int i = 0; i < strlen(word); i++)
	{
		if (word[i] == 'x')
		{
			cnt++;
		}
	}

	cout << "x�� ������ " << cnt << endl;
}