#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char c;

	while (true)
	{
		cout << "? ";
		cin >> a >> c >> b;

		if (c == '+')
		{
			cout << a << " + " << b << " = " << a + b << endl;
		}
		else if (c == '-')
		{
			cout << a << " - " << b << " = " << a - b << endl;
		}
		else if (c == '*')
		{
			cout << a << " * " << b << " = " << a * b << endl;
		}
		else if (c == '/')
		{
			cout << a << " / " << b << " = " << a / b << endl;
		}
		else if (c == '%')
		{
			cout << a << " % " << b << " = " << a % b << endl;
		}
		else
		{
			cout << "잘못된 형식" << endl;
			break;
		}
	}
}