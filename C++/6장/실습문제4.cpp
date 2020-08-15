#include <iostream>
using namespace std;

class MyVector
{
	int *mem;
	int size;
public:
	MyVector(int n, int val);
	~MyVector() { delete[] mem; }
	void show();
};

MyVector::MyVector(int n = 100, int val = 0)
{
	mem = new int[n];
	size = n;

	for (int i = 0; i < size; i++)
		mem[i] = val;
}

void MyVector::show()
{
	for (int i = 0; i < size; i++)
	{
		if (i % 10 == 0 && i != 0)
			cout << endl;
		cout << mem[i] << ' ';
	}

	cout << endl << endl;
}

int main()
{
	MyVector a, b(50, 5);

	a.show();
	b.show();
}