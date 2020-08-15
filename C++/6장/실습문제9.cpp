#include <iostream>
#include <string>
using namespace std;

class Board
{
	static string *bd;
	static int n;
public:
	static void add(string s);
	static void print();
};

string *Board::bd = new string[100];
int Board::n = 0;

void Board::add(string s)
{
	bd[n] = s;
	n++;
}

void Board::print()
{
	cout << "********** �Խ����Դϴ�. **********" << endl;
	for (int i = 0; i < n; i++)
		cout << i << ": " << bd[i] << endl;
	
	cout << endl;
}

int main()
{
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}