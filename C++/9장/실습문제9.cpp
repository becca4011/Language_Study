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
		cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	}
	else if (availableInk < pages)
	{
		cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	}
	else
	{
		cout << "����Ʈ�Ͽ����ϴ�." << endl;
		availableInk -= pages;
		availableCount -= pages;
	}
}

void InkJet::show()
{
	cout << getModel() << ", " << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��ũ " << availableInk << endl;
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
		cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	}
	else if (availableToner < pages)
	{
		cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	}
	else
	{
		cout << "����Ʈ�Ͽ����ϴ�." << endl;
		availableToner -= pages;
		availableCount -= pages;
	}
}

void Laser::show()
{
	cout << getModel() << ", " << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��� " << availableToner << endl;
}

int main()
{
	InkJet ij("Officejet V40", "HP", 5, 10);
	Laser ls("SCX-6x45", "�Ｚ����", 3, 20);
	int pr, pages;
	char yn;

	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : "; ij.show();
	cout << "������ : "; ls.show();

	while (true)
	{
		cout << "\n������ (1 : ��ũ��, 2 : ������)�� �ż� �Է� >> ";
		cin >> pr >> pages;

		if (pr == 1)
			ij.print(pages);
		else if (pr == 2)
			ls.print(pages);
		else
		{
			cout << "���� �޴�" << endl;
		}

		ij.show();
		ls.show();

		cout << "��� ����Ʈ �Ͻðڽ��ϱ�? (y/n) >> ";
		cin >> yn;

		if (yn == 'y')
			continue;
		else if (yn == 'n')
			break;
	}
}