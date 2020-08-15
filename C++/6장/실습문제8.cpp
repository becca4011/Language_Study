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
		cout << "----- ��� ";
	else
		cout << s1 << "�±��� ";

	cout << "Trace ������ ����մϴ�. -----" << endl;

	for (int i = 0; i < num; i++)
	{
		if (s1 == "")
			cout << tag[i] << ":" << info[i] << endl;
		else if (tag[i] == s1)
			cout << tag[i] << ":" << info[i] << endl;
	}
}

// static ���� �ʱ�ȭ (Ŭ���� �ۿ��� ::�� ����Ͽ� �ʱ�ȭ)
int Trace::num = 0;
string *Trace::tag = new string[100];
string *Trace::info = new string[100];

void f()
{
	int a, b, c;
	cout << "�� ���� ���� �Է�>> ";
	cin >> a >> b;

	Trace::put("f()", "������ �Է¹޾���");
	c = a + b;

	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}

int main()
{
	Trace::put("main()", "���α׷� �����մϴ�");
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();
}