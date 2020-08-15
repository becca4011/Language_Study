#include <iostream>
using namespace std;

class Statics
{
	int *st;
	int cnt;
public:
	Statics() { st = new int[8]; cnt = 0; }
	bool operator! ();
	Statics &operator<< (int x);
	void operator>> (int &avg);
	void operator~ ();
};

bool Statics::operator!()
{
	if (st && cnt == 0)
		return true;
	else
		return false;
}

Statics &Statics::operator<< (int x)
{
	st[cnt] = x;
	cnt++;

	return *this;
}

void Statics::operator>> (int &avg)
{
	avg = 0;
	for (int i = 0; i < cnt; i++)
		avg += st[i];

	avg /= cnt;
}

void Statics::operator~ ()
{
	for (int i = 0; i < cnt; i++)
		cout << st[i] << ' ';
	cout << endl;
}

int main()
{
	Statics stat; // Statics ��ü

	if (!stat)
		cout << "���� ��� �����Ͱ� �����ϴ�." << endl;

	int x[5];
	cout << "5���� ���� �Է�>> ";
	for (int i = 0; i < 5; i++)
		cin >> x[i];

	for (int i = 0; i < 5; i++)
		stat << x[i]; // stat�� x[i]�� ����
	stat << 100 << 200; // stat�� 100, 200 ����
	~stat;

	int avg;
	stat >> avg; // stat�κ��� ��� ����
	cout << "avg = " << avg << endl;
}