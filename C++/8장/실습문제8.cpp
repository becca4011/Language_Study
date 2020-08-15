#include <iostream>
#include <string>
using namespace std;

class Printer
{
	string model, manufacturer; // �𵨸�, ������
	int printedCount, availableCount; // �μ� �ż�, �μ� ���� �ܷ�
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
	bool print(int pages); // print()�� ȣ��� ������ pages��ŭ ����
};

bool Printer::print(int pages)
{
	printedCount = pages;

	if (pages > availableCount)
	{
		cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
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
	int availableInk; // ��ũ �ܷ�
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
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
		}
	}
}

void InkJet::show()
{
	cout << getModel() << ", " << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��ũ " << getAvailableInk() << endl;
}

class Laser : public Printer
{
	int availableToner; // ��� �ܷ�
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
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
		}
	}
}

void Laser::show()
{
	cout << getModel() << ", " << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��� " << getAvailableToner() << endl;
}

int main()
{
	InkJet ij("Officejet V40", "HP", 5, 10);
	Laser ls("5CX-6x45", "�Ｚ����", 3, 20);
	int pr, pages;
	char yn;

	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : "; ij.show();
	cout << "������ : "; ls.show();

	while (true)
	{
		cout << endl << "������ (1 : ��ũ��, 2 : ������)�� �ż� �Է� >> ";
		cin >> pr >> pages;

		if (pr == 1)
			ij.printInkJet(pages);
		else if (pr == 2)
			ls.printLaser(pages);

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