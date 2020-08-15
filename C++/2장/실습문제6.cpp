#include <iostream>
#include <string>
using namespace std;

int main()
{
	string password;
	string password2;

	cout << "새 암호 입력 >> ";
	cin >> password;

	cout << "새 암호 다시 입력 >> ";
	cin >> password2;

	if (password == password2)
	{
		cout << "같습니다. \n";
	}
	else
	{
		cout << "같지 않습니다. \n";
	}
}