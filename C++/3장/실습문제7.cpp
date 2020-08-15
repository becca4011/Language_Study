#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom
{
public:
	SelectableRandom() {}
	int next(int select);
	int nextInRange(int i, int j, int select);
};

int SelectableRandom::next(int select)
{
	int ran;

	if (select == 1)
	{
		do
		{
			ran = rand() % RAND_MAX;
		} while (ran % 2 != 0);
	}
	else if (select == 2)
	{
		do
		{
			ran = rand() % RAND_MAX;
		} while (ran % 2 != 1);
	}

	return ran;
}

int SelectableRandom::nextInRange(int i, int j, int select)
{
	int ran;

	if (select == 1)
	{
		do
		{
			ran = rand() % (j - i + 1) + i;
		} while (ran % 2 != 0);
	}
	else if (select == 2)
	{
		do
		{
			ran = rand() % (j - i + 1) + i;
		} while (ran % 2 != 1);
	}

	return ran;
}

int main()
{
	int sel1, sel2;

	cout << "0 ~ 32767까지의 난수 결과 (짝수 - 1, 홀수 - 2) >> ";
	cin >> sel1;

	cout << "2 ~ 9까지의 난수 결과 (짝수 - 1, 홀수 - 2) >> ";
	cin >> sel2;

	cout << endl << endl;

	SelectableRandom r;

	if (sel1 == 1)
	{
		cout << "-- 0 ~ " << RAND_MAX << "까지의 짝수 난수 10개 --" << endl;

		for (int i = 0; i < 10; i++)
		{
			int n = r.next(sel1);
			cout << n << ' ';
		}
	}
	else if (sel1 == 2)
	{
		cout << "-- 0 ~ " << RAND_MAX << "까지의 홀수 난수 10개 --" << endl;

		for (int i = 0; i < 10; i++)
		{
			int n = r.next(sel1);
			cout << n << ' ';
		}
	}

	if (sel2 == 1)
	{
		cout << endl << endl << "-- 2 ~ 9까지의 짝수 난수 10개 --" << endl;

		for (int i = 0; i < 10; i++)
		{
			int n = r.nextInRange(2, 9, sel2);
			cout << n << ' ';
		}
	}
	else if (sel2 == 2)
	{
		cout << endl << endl << "-- 2 ~ 9까지의 홀수 난수 10개 --" << endl;

		for (int i = 0; i < 10; i++)
		{
			int n = r.nextInRange(2, 9, sel2);
			cout << n << ' ';
		}
	}

	cout << endl;
}