#include <iostream>
#include <string>
using namespace std;

class Printer
{
	string model, manufacturer; // 모델명, 제조사
	int printedCount, availableCount; // 인쇄 매수, 인쇄 종이 잔량
public:
	Printer(string md = "", string mf = "", int ac = 0)
	{
		model = md;
		manufacturer = mf;
		availableCount = ac;
	}
	string getModel() { return model; }
	string getManufacturer() { return manufacturer; }
	int getAvailableCount() { return availableCount; }
	bool print(int pages); // print()가 호출될 때마다 pages만큼 복사
};

bool Printer::print(int pages)
{
	printedCount = pages;

	if (pages > availableCount)
	{
		cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
		return false;
	}
	else
	{
		if (availableCount > printedCount)
			availableCount -= printedCount;
		return true;
	}
}

class InkJet : public Printer
{
	int availableInk; // 잉크 잔량
public:
	InkJet(string md, string mf, int ac, int ai) : Printer(md, mf, ac) { availableInk = ai; }
	int getAvailableInk() { return availableInk; }
	void printInkJet(int pages);
	void show();
};

void InkJet::printInkJet(int pages)
{
	if (print(pages))
	{
		if (availableInk >= pages)
		{
			availableInk -= pages;
			cout << "프린트하였습니다." << endl;
		}
	}
}

void InkJet::show()
{
	cout << getModel() << ", " << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 잉크 " << getAvailableInk() << endl;
}

class Laser : public Printer
{
	int availableToner; // 토너 잔량
public:
	Laser(string md, string mf, int ac, int at) : Printer(md, mf, ac) { availableToner = at; }
	int getAvailableToner() { return availableToner; }
	void printLaser(int pages);
	void show();
};

void Laser::printLaser(int pages)
{
	if (print(pages))
	{
		if (availableToner > pages)
		{
			availableToner -= pages;
			cout << "프린트하였습니다." << endl;
		}
	}
}

void Laser::show()
{
	cout << getModel() << ", " << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 토너 " << getAvailableToner() << endl;
}

int main()
{
	InkJet ij("Officejet V40", "HP", 5, 10);
	Laser ls("5CX-6x45", "삼성전자", 3, 20);
	int pr, pages;
	char yn;

	cout << "현재 작동중인 2대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : "; ij.show();
	cout << "레이저 : "; ls.show();

	while (true)
	{
		cout << endl << "프린터 (1 : 잉크젯, 2 : 레이저)와 매수 입력 >> ";
		cin >> pr >> pages;

		if (pr == 1)
			ij.printInkJet(pages);
		else if (pr == 2)
			ls.printLaser(pages);

		ij.show();
		ls.show();

		cout << "계속 프린트 하시겠습니까? (y/n) >> ";
		cin >> yn;

		if (yn == 'y')
			continue;
		else if (yn == 'n')
			break;
	}
}