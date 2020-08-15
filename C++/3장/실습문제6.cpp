#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom
{
public:
	EvenRandom() {}
	int next();
	int nextInRange(int i, int j);
};

int EvenRandom::next()
{
	int ran;

	do
	{
		ran = rand() % RAND_MAX;
	} while (ran % 2 != 0);

	return ran;
}

int EvenRandom::nextInRange(int i, int j)
{
	int ran;

	do
	{
		ran = rand() % (j - i + 1) + i;
	} while (ran % 2 != 0);

	return ran;
}

int main()
{
	EvenRandom r;

	cout << "-- 0 ~ " << RAND_MAX << "까지의 난수 10개 --" << endl;

	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2 ~ 10까지의 난수 10개 --" << endl;

	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}

	cout << endl;
}