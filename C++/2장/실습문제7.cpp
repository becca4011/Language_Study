#include <iostream>
using namespace std;

int main()
{
	char ans[100];

	do
	{
		cout << "�����Ϸ��� yes �Է� >> ";
		cin.getline(ans, 100);
	} while (strcmp(ans, "yes") != 0);

	cout << "����" << endl;
}