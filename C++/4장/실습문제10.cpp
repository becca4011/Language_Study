#include <iostream>
#include <string>
using namespace std;

class Person
{
	string name;
public:
	Person(){ name = ""; }
	//Person(string name){ this->name = name; cout << "Person(string name)" << endl; }
	string getName(){ return name; cout << "string getName()" << endl; }
	void fname(string name){ this->name = name; cout << "void fname()" << endl; }
};

class Family
{
	Person *p;
	int size;
public:
	Family(string name, int size);

	void setName(int i, string n);
	void show();

	~Family();
};

Family::Family(string name, int size)
{
	this->size = size;
	p = new Person[size];
	cout << "Family(string name, int size)" << endl;
}

void Family::setName(int i, string n)
{
	p[i].fname(n);
	cout << "setName(int i, string n)" << endl;
}

void Family::show()
{
	cout << p->getName() << "가족은 " << size << "명" << endl;
	
	for (int i = 0; i < size; i++)
	{
		cout << p[i].getName() << "\t";
	}
	cout << endl;
}

Family::~Family()
{
	delete[] p;
}

int main()
{
	Family *simpson = new Family("Simpson", 3);

	simpson->setName(0, "Mr.Simpson");
	simpson->setName(1, "Mrs.Simpson");
	simpson->setName(2, "Bart Simpson");

	simpson->show();

	delete simpson;
}