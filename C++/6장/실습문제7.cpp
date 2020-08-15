#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random
{
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};

int Random::nextInt(int min, int max)
{
	int n = min + (rand() % (max - min + 1));
	return n;
}

char Random::nextAlphabet()
{
	int n = rand() % 2;

	if (n == 0)
	{
		n = 65 + (rand() % (90 - 65 + 1));
		return (char)n;
	}
	else
	{
		n = 97 + (rand() % (122 - 97 + 1));
		return (char)n;
	}
}

double Random::nextDouble()
{
	double n = rand() / (double)(RAND_MAX + 1);
	return n;
}

int main()
{
	Random::seed();

	cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++)
		cout << Random::nextInt(1, 100) << ' ';

	cout << endl << "���ĺ��� �����ϰ� 10���� ����մϴ�." << endl;
	for (int i = 0; i < 10; i++)
		cout << Random::nextAlphabet() << ' ';

	cout << endl << "������ �Ǽ� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++)
		cout << Random::nextDouble() << ' ';

	cout << endl;
}