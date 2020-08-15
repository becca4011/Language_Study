#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random
{
public:
	Random() {}
	int next();
	int nextInRange(int i, int j);
};

int Random::next()
{
	return rand() % RAND_MAX;
}

int Random::nextInRange(int i, int j)
{
	return rand() % (j - i + 1) + i;
}

int main()
{
	Random r;

	cout << "-- 0 ~ " << RAND_MAX << "까지의 난수 10개 --" << endl;

	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2 ~ 4까지의 난수 10개 --" << endl;

	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}

	cout << endl;
}