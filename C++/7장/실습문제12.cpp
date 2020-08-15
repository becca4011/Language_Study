#include <iostream>
using namespace std;

class SortedArray
{
	int size;
	int *p;
	void sort();
public:
	SortedArray() { p = NULL; size = 0; }
	SortedArray(SortedArray &src); // 복사생성자
	SortedArray(int p[], int size);
	~SortedArray() { delete[] p; }

	SortedArray operator+ (SortedArray &op2);
	SortedArray &operator= (const SortedArray &op2);
	void show();
};

SortedArray::SortedArray(SortedArray &src)
{
	this->size = src.size;
	this->p = new int[this->size];

	for (int i = 0; i < this->size; i++)
		this->p[i] = src.p[i];
}

SortedArray::SortedArray(int p[], int size)
{
	this->p = new int[size];
	this->size = size;

	for (int i = 0; i < size; i++)
		this->p[i] = p[i];
}

SortedArray &SortedArray::operator= (const SortedArray &op2)
{
	delete[] p;

	this->size = op2.size;
	this->p = new int[size];

	for (int i = 0; i < size; i++)
		p[i] = op2.p[i];

	return *this;
}

SortedArray SortedArray::operator+ (SortedArray &op2)
{
	SortedArray sa;
	sa.size = size + op2.size;
	sa.p = new int[sa.size];

	for (int i = 0; i < size; i++)
		sa.p[i] = p[i];
	for (int i = 0; i < op2.size; i++)
		sa.p[i + size] = op2.p[i];

	return sa;
}

void SortedArray::sort()
{
	int tmp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (p[i] < p[j])
			{
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
}

void SortedArray::show()
{
	sort();
	cout << "배열 출력 : ";

	for (int i = 0; i < size; i++)
		cout << p[i] << ' ';
	cout << endl;
}

int main()
{
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7, 8, 30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;

	a.show();
	b.show();
	c.show();
}