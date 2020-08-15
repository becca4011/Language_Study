#include <iostream>
#include <string>
using namespace std;

class Histogram
{
	string text;
public:
	Histogram(string s) { text = s + "\n"; }
	void put(string s);
	void putc(char c);
	void print();
};

void Histogram::put(string s)
{
	text += s;
}

void Histogram::putc(char c)
{
	text += c;
}

void Histogram::print()
{
	int cnt = 0;
	int eng[27] = { 0 };

	cout << text << endl;

	for (int i = 0; i < text.length(); i++)
	{
		text[i] = tolower(text[i]);

		if (isalpha(text[i]))
		{
			cnt++;

			for (char c = 'a'; c <= 'z'; c++)
			{
				if (text[i] == c)
				{
					eng[int(c) - 97] += 1;
				}
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << char(i + 97) << " (" << eng[i] << ")\t: ";

		for (int j = 1; j <= eng[i]; j++)
		{
			cout << "*";
		}

		cout << endl;
	}
}

int main()
{
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}