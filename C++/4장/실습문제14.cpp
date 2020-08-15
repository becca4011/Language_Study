#include <iostream>
#include <string>
using namespace std;

class Player
{

};

class GamblingGame
{
	Player *p;
public:
	GamblingGame(string n1, string n2);
};

GamblingGame::GamblingGame(string n1, string n2)
{
	int ran[3];

	while (1)
	{
		for (int i = 0; i < 3; i++)
		{
			ran[i] = rand() % 3;

			cout << ran[i] << "\t";
		}

		if (ran[0] == ran[1] && ran[0] == ran[2])
		{
			cout << n1 << " 승리" << endl;
			break;
		}
		else
		{
			cout << "다시" << endl;
		}
	}
}

int main()
{
	string name1, name2;

	cout << "***** 겜블링 게임 시작 *****" << endl;

	cout << "선수1 이름 : ";
	cin >> name1;

	cout << "선수2 이름 : ";
	cin >> name2;

	GamblingGame gb(name1, name2);
}