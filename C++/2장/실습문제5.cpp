#include <iostream>
using namespace std;

int main()
{
	char word[100];
	int cnt = 0;

	cout << "문자들을 입력(100개 미만)\n";

	cin.getline(word, 100);

	for (int i = 0; i < strlen(word); i++)
	{
		if (word[i] == 'x')
		{
			cnt++;
		}
	}

	cout << "x의 개수는 " << cnt << endl;
}