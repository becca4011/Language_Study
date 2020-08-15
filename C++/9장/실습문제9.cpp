#include <iostream>
#include <string>
using namespace std;

class Printer
{
protected:
	string model, manufacturer;
	int printedCount, availableCount;
public:
	Printer(string md, string mf, int ac);
	string getModel() { return model; }
	string getManufacturer() { return manufacturer; }
	int getAvailableCount() { return availableCount; }
	virtual void print(int pages) = 0;
	virtual void show() = 0;
};

Printer::Printer(string md, string mf, int ac)
{
	model = md;
	manufacturer = mf;
	availableCount = ac;
}

class InkJet : public Printer
{
	int availableInk;
public:
	InkJet(string md, string mf, int ac, int ai);
	virtual void print(int pages);
	virtual void show();
};

InkJet::InkJet(string md, string mf, int ac, int ai) : Printer(md, mf, ac) 
{
	availableInk = ai;
}

void InkJet::print(int pages)
{
	if (getAvailableCount() < pages)
	{
		cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
	}
	else if (availableInk < pages)
	{
		cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
	}
	else
	{
		cout << "프린트하였습니다." << endl;
		availableInk -= pages;
		availableCount -= pages;
	}
}

void InkJet::show()
{
	cout << getModel() << ", " << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 잉크 " << availableInk << endl;
}

class Laser : public Printer
{
	int availableToner;
public:
	Laser(string md, string mf, int ac, int at);
	virtual void print(int pages);
	virtual void show();
};

Laser::Laser(string md, string mf, int ac, int at) : Printer(md, mf, ac) 
{
	availableToner = at;
}

void Laser::print(int pages)
{
	if (getAvailableCount() < pages)
	{
		cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
	}
	else if (availableToner < pages)
	{
		cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
	}
	else
	{
		cout << "프린트하였습니다." << endl;
		availableToner -= pages;
		availableCount -= pages;
	}
}

void Laser::show()
{
	cout << getModel() << ", " << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 토너 " << availableToner << endl;
}

int main()
{
	InkJet ij("Officejet V40", "HP", 5, 10);
	Laser ls("SCX-6x45", "삼성전자", 3, 20);
	int pr, pages;
	char yn;

	cout << "현재 작동중인 2대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : "; ij.show();
	cout << "레이저 : "; ls.show();

	while (true)
	{
		cout << "\n프린터 (1 : 잉크젯, 2 : 레이저)와 매수 입력 >> ";
		cin >> pr >> pages;

		if (pr == 1)
			ij.print(pages);
		else if (pr == 2)
			ls.print(pages);
		else
		{
			cout << "없는 메뉴" << endl;
		}

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