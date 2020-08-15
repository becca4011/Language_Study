#include <iostream>
#include <string>
using namespace std;

class Book
{
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0)
	{
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show()
	{
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }

	// Book &operator+= (int b);
	// Book &operator-= (int b);

	friend Book operator+= (Book &b, int n);
	friend Book operator-= (Book &b, int n);
};
/*
Book &Book::operator+=(int b)
{
	price += b;
	return *this;
}

Book &Book::operator-=(int b)
{
	price -= b;
	return *this;
}
*/

Book operator+=(Book &b, int n)
{
	Book tmp = b;
	b.price += n;
	return tmp;
}

Book operator-=(Book &b, int n)
{
	Book tmp = b;
	b.price -= n;
	return tmp;
}

int main()
{
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;

	a.show();
	b.show();
}