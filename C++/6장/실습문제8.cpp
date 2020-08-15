#include <iostream>
#include <string>
using namespace std;

class Trace
{
	static string *tag;
	static string *info;
	static int num;
public:
	static void put(string s1, string s2) 
	{ 
		tag[num] = s1;
		info[num] = s2;
		num++;
	}
	static void print(string s1 = "");
};

void Trace::print(string s1)
{
	if (s1 == "")
		cout << "----- 모든 ";
	else
		cout << s1 << "태그의 ";

	cout << "Trace 정보를 출력합니다. -----" << endl;

	for (int i = 0; i < num; i++)
	{
		if (s1 == "")
			cout << tag[i] << ":" << info[i] << endl;
		else if (tag[i] == s1)
			cout << tag[i] << ":" << info[i] << endl;
	}
}

// static 변수 초기화 (클래스 밖에서 ::를 사용하여 초기화)
int Trace::num = 0;
string *Trace::tag = new string[100];
string *Trace::info = new string[100];

void f()
{
	int a, b, c;
	cout << "두 개의 정수 입력>> ";
	cin >> a >> b;

	Trace::put("f()", "정수를 입력받았음");
	c = a + b;

	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

int main()
{
	Trace::put("main()", "프로그램 시작합니다");
	f();
	Trace::put("main()", "종료");

	Trace::print("f()");
	Trace::print();
}