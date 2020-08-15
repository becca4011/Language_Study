#include <iostream>
using namespace std;

class Matrix
{
	int m[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) { m[0] = a; m[1] = b; m[2] = c; m[3] = d; }
	void show() { cout << "Matrix = { " << m[0] << ' ' << m[1] << ' ' << m[2] << ' ' << m[3] << " }" << endl; }

	// void operator>> (int x[]);
	// void operator<< (int y[]);

	friend void operator>> (Matrix &a, int x[]);
	friend void operator<< (Matrix &a, int y[]);
};

/*
void Matrix::operator>> (int x[])
{
	for (int i = 0; i < 4; i++)
		x[i] = m[i];
}

void Matrix::operator<< (int y[])
{
	for (int i = 0; i < 4; i++)
		m[i] = y[i];
}
*/

void operator>> (Matrix &a, int x[])
{
	for (int i = 0; i < 4; i++)
		x[i] = a.m[i];
}

void operator<< (Matrix &a, int y[])
{
	for (int i = 0; i < 4; i++)
		a.m[i] = y[i];
}

int main()
{
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1, 2, 3, 4 };

	a >> x;
	b << y;

	for (int i = 0; i < 4; i++)
		cout << x[i] << ' ';
	cout << endl;

	b.show();
}