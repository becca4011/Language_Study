#include <iostream>
using namespace std;

class Stack
{
	int st[10];
	int cnt;
public:
	Stack() { cnt = 0; }
	Stack &operator<< (int x); // push
	bool operator! ();
	void operator>> (int &x); // pop
};

Stack &Stack::operator<< (int x)
{
	st[cnt] = x;
	cnt++;

	return *this;
}

bool Stack::operator! ()
{
	if (cnt == 0)
		return true;
	else
		return false;
}

void Stack::operator>> (int &x)
{
	x = st[cnt - 1];
	cnt--;
}

int main()
{
	Stack stack;
	stack << 3 << 5 << 10;

	while (true)
	{
		if (!stack)
			break;

		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}