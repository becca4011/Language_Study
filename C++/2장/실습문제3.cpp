#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "두 수 입력 >> ";

	cin >> a >> b;

	if (a > b)
	{
		cout << "큰 수 = " << a << endl;
	}
	else
	{
		cout << "큰 수 = " << b << endl;
	}
}