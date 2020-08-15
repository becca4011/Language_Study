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
	Statics stat; // Statics 객체

	if (!stat)
		cout << "현재 통계 데이터가 없습니다." << endl;

	int x[5];
	cout << "5개의 정수 입력>> ";
	for (int i = 0; i < 5; i++)
		cin >> x[i];

	for (int i = 0; i < 5; i++)
		stat << x[i]; // stat에 x[i]값 삽입
	stat << 100 << 200; // stat에 100, 200 삽입
	~stat;

	int avg;
	stat >> avg; // stat로부터 평균 받음
	cout << "avg = " << avg << endl;
}