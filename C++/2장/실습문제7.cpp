#include <iostream>
using namespace std;

int main()
{
	char ans[100];

	do
	{
		cout << "종료하려면 yes 입력 >> ";
		cin.getline(ans, 100);
	} while (strcmp(ans, "yes") != 0);

	cout << "종료" << endl;
}