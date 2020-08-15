#include <iostream>
using namespace std;

class UI
{
public:
	static int show_menu();
	static int show_shape();
	static int del_index();
};

int UI::show_menu()
{
	int menu;

	cout << "���� : 1 / ���� : 2 / ��κ��� : 3 / ���� : 4 >> ";
	cin >> menu;
	return menu;
}

int UI::show_shape()
{
	int sh;

	cout << "�� : 1 / �� : 2 / �簢�� : 3 >> ";
	cin >> sh;
	return sh;
}

int UI::del_index()
{
	int index;

	cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
	cin >> index;
	return index;
}

class Shape
{
public:
	virtual void draw() = 0;
};

class Line : public Shape
{
public:
	virtual void draw()
	{
		cout << "Line" << endl;
	}
};

class Rect : public Shape
{
public:
	virtual void draw()
	{
		cout << "Rect" << endl;
	}
};

class Circle : public Shape
{
public:
	virtual void draw()
	{
		cout << "Circle" << endl;
	}
};

class GrapicEditor
{
	int cnt;
	Shape *start;
	Shape *end;
public:
	GrapicEditor() { cnt = 0; }
	void run();
	void input(int n);
	bool del(int n);
	void show();
};

void GrapicEditor::input(int n)
{
	if (n == 1)
	{
		if (cnt == 0)
		{
			start = new Line();
			start = end;
		}
		else
		{
			
		}
		cnt++;
	}
	else if (n == 2)
	{
		if (cnt == 0)
		{
			start = new Rect();
			start = end;
		}
		cnt++;
	}
	else if (n == 3)
	{
		if (cnt == 0)
		{
			start = new Circle();
			start = end;
		}
		cnt++;
	}
	else
	{
		cout << "���� �޴�" << endl;
	}
}

bool GrapicEditor::del(int n)
{

}

void GrapicEditor::show()
{

}

void GrapicEditor::run()
{
	int menu, sh;
	cout << "�׷��� �������Դϴ�." << endl;

	while (true)
	{
		menu = UI::show_menu();

		if (menu == 4)
		{
			break;
		}
		else if (menu == 1)
		{
			sh = UI::show_shape();
			input(sh);
		}
		else if (menu == 2)
		{
			sh = UI::del_index();
			del(sh);
		}
		else if (menu == 3)
		{
			show();
		}
		else
		{
			cout << "���� �޴�" << endl;
		}
	}
}

int main
{
	
}