#include <iostream>
using namespace std;

class Color
{
	int red, green, blue;
public:
	Color(int r = 0, int g = 0, int b = 0) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
	/*
	Color operator+ (Color c);
	bool operator== (Color c);
	*/

	friend Color operator+ (Color a, Color b);
	friend bool operator== (Color a, Color b);
};
/*
Color Color::operator+(Color c)
{
	Color a;
	a.red = red + c.red;
	a.green = green + c.green;
	a.blue = blue + c.blue;
	return a;
}

bool Color::operator==(Color c)
{
	if (red == c.red && green == c.green && blue == c.blue)
		return true;
	else
		return false;
}
*/

Color operator+ (Color a, Color b)
{
	Color c;
	c.red = a.red + b.red;
	c.green = a.green + b.green;
	c.blue = a.blue + b.blue;
	return c;
}

bool operator== (Color a, Color b)
{
	if (a.red == b.red && a.green == b.green && a.blue == b.blue)
		return true;
	else
		return false;
}

int main()
{
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음" << endl;
	else
		cout << "보라색 아님" << endl;
}