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

	cout << "삽입 : 1 / 삭제 : 2 / 모두보기 : 3 / 종료 : 4 >> ";
	cin >> menu;
	return menu;
}

int UI::show_shape()
{
	int sh;

	cout << "선 : 1 / 원 : 2 / 사각형 : 3 >> ";
	cin >> sh;
	return sh;
}

int UI::del_index()
{
	int index;

	cout << "삭제하고자 하는 도형의 인덱스 >> ";
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
		cout << "없는 메뉴" << endl;
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
	cout << "그래픽 에디터입니다." << endl;

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
			cout << "없는 메뉴" << endl;
		}
	}
}

int main
{
	
}