#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	char st[100];
	int n = 0;

	cout << "문자열 입력 >> ";
	cin.getline(st, 100);

	for (int i = 0; i < strlen(st); i++)
	{
		if (st[i] == 'a')
		{
			n += 1;
		}
	}
	*/

	string st;
	int n = 0;
	int m = 0;
	int f = 0;

	cout << "문자열 입력 >> ";
	getline(cin, st);

	// (1)
	for (int i = 0; i < st.length(); i++)
	{
		if (st.at(i) == 'a')
		{
			n++;
		}
	}

	// (2)
	while (true)
	{
		m = st.find('a');

		if (m != -1)
		{
			st = st.substr(m + 1);

			f++;
		}
		else
			break;
	}

	cout << "문자 a는 " << n << "개" << endl;
	cout << "문자 a는 " << f << "개" << endl;
}