#include <iostream>
using namespace std;

int main()
{
	char text[10000];
	int n[27] = {0};
	int num = 0;

	cout << "���� �ؽ�Ʈ �Է� (������׷� �׸�) \n�ؽ�Ʈ�� ���� ; 10000������ ����" << endl;

	cin.getline(text, 10000, ';');
	for (int i = 0; i < strlen(text); i++)
	{
		if (isalpha(text[i]))
			num++;
	}

	cout << "\n�� ���ĺ� �� : " << num << "\n\n";

	for (int i = 0; i < strlen(text); i++)
	{
		text[i] = tolower(text[i]);

		for (char c = 'a'; c <= 'z'; c++)
		{
			if (text[i] == c)
			{
				n[int(c) - 97]++;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << char(i + 97) << " (" << n[i] << ")\t: ";

		for (int j = 1; j <= n[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}