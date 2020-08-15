#include <iostream>
using namespace std;

class Matrix
{
	int m[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) { m[0] = a; m[1] = b; m[2] = c; m[3] = d; }
	void show() { cout << "Matrix = { " << m[0] << ' ' << m[1] << ' ' << m[2] << ' ' << m[3] << " }" << endl; }

	/*
	friend Matrix operator+ (Matrix a, Matrix b);
	friend Matrix operator+= (Matrix &a, Matrix b);
	friend bool operator== (Matrix a, Matrix b);
	*/

	Matrix operator+ (Matrix a);
	Matrix operator+= (Matrix &a);
	bool operator== (Matrix a);
};

/*
Matrix operator+ (Matrix a, Matrix b)
{
	Matrix c;

	for (int i = 0; i < 4; i++)
		c.m[i] = a.m[i] + b.m[i];
	
	return c;
}

Matrix operator+= (Matrix &a, Matrix b)
{
	Matrix c = a;
	for (int i = 0; i < 4; i++)
		a.m[i] += b.m[i];
	
	return c;
}

bool operator== (Matrix a, Matrix b)
{
	for (int i = 0; i < 4; i++)
	{
		if (a.m[i] != b.m[i])
			return false;
	}
	return true;
}
*/

Matrix Matrix::operator+ (Matrix a)
{
	Matrix c;
	
	for (int i = 0; i < 4; i++)
		c.m[i] = m[i] + a.m[i];

	return c;
}

Matrix Matrix::operator+= (Matrix &a)
{
	Matrix c = a;

	for (int i = 0; i < 4; i++)
		m[i] += a.m[i];

	return c;
}

bool Matrix::operator== (Matrix a)
{
	for (int i = 0; i < 4; i++)
	{
		if (m[i] != a.m[i])
			return false;
	}
	return true;
}

int main()
{
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();

	if (a == c)
		cout << "a and c are the same" << endl;
}