#include <iostream>
#include <string>
using namespace std;

int main()
{
	string password;
	string password2;

	cout << "�� ��ȣ �Է� >> ";
	cin >> password;

	cout << "�� ��ȣ �ٽ� �Է� >> ";
	cin >> password2;

	if (password == password2)
	{
		cout << "�����ϴ�. \n";
	}
	else
	{
		cout << "���� �ʽ��ϴ�. \n";
	}
}