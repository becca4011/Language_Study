#include <iostream>
#include <string>
using namespace std;

class Book
{
	// char *title;
	string title;
	int price;
public:
	// Book(const Book &b);
	// Book(const char *title, int price);
	Book(string title, int price);
	// ~Book();
	// void set(char *title, int price);
	void set(string title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};
/*
Book::Book(const char *title, int price)
{
	this->price = price;

	int size = strlen(title) + 1;
	this->title = new char[size];
	strcpy(this->title, title);
}
*/

Book::Book(string title, int price)
{
	this->title = title;
	this->price = price;
}
/*
Book::Book(const Book &b)
{
	this->price = b.price;
	
	int size = strlen(b.title) + 1;
	this->title = new char[size];
	strcpy(this->title, b.title);
}
*/
/*
Book::~Book()
{
	delete[] title;
}
*/
/*
void Book::set(char *title, int price)
{
	if (this->title)
		delete[] this->title;

	this->price = price;

	int size = strlen(title) + 1;
	this->title = new char[size];
	strcpy(this->title, title);
}
*/

void Book::set(string title, int price)
{
	this->title = title;
	this->price = price;
}

int main()
{
	Book cpp("명품C++", 10000);
	Book java = cpp; // 복사생성자 호출
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}