#include <iostream>
using namespace std;

int main()
{
	char text[10000];
	int n[27] = {0};
	int num = 0;

	cout << "영문 텍스트 입력 (히스토그램 그림) \n텍스트의 끝은 ; 10000개까지 가능" << endl;

	cin.getline(text, 10000, ';');
	for (int i = 0; i < strlen(text); i++)
	{
		if (isalpha(text[i]))
			num++;
	}

	cout << "\n총 알파벳 수 : " << num << "\n\n";

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