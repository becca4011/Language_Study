#include <iostream>
#include "실습문제10.h"
using namespace std;

int main()
{
	int n1 = 0, n2 = 0;
	char c;

	Add a;
	Sub s;
	Mul m;
	Div d;

	while (true)
	{
		cout << "두 정수, 연산자 입력 >> ";
		cin >> n1 >> n2 >> c;

		if (c == '+')
		{
			a.setValue(n1, n2);
			cout << a.calculate() << endl;
		}
		else if (c == '-')
		{
			s.setValue(n1, n2);
			cout << s.calculate() << endl;
		}
		else if (c == '*')
		{
			m.setValue(n1, n2);
			cout << m.calculate() << endl;
		}
		else if (c == '/')
		{
			d.setValue(n1, n2);
			cout << d.calculate() << endl;
		}
	}
}