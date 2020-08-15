#include <iostream>
using namespace std;

class Sample
{
	int *p;
	int size;
	int max = -999999999;
public:
	Sample(int n)
	{
		size = n;
		p = new int[n];
	}

	void read();
	void write();
	int big();

	~Sample();
};

void Sample::read() // ����ڷκ��� ���� �Է� ����
{
	cout << "���� " << size << "�� �Է� >> ";

	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}
}

void Sample::write() // ���� �迭 ���
{
	cout << "���� �迭 : [";

	for (int i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			cout << p[i];
		}
		else
		{
			cout << p[i] << ", ";
		}
	}

	cout << "]" << endl;
}

int Sample::big()
{
	for (int i = 0; i < size; i++)
	{
		if (max < p[i])
		{
			max = p[i];
		}
	}

	return max;
}

Sample::~Sample()
{
	delete[] p;
}

int main()
{
	Sample s(10);

	s.read();
	s.write();

	cout << "���� ū �� : " << s.big() << endl;
}