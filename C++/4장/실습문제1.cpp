#include <iostream>
using namespace std;

class Color
{
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }

	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
};

int main()
{
	Color screenColor(255, 0, 0); // screenColor ��ü ����
	Color *p; // Color Ÿ���� ������ ���� p

	p = &screenColor; // p�� screenColor�� �ּ� ����
	p->show(); // screenColor �� ���

	Color colors[3]; // Color�� �迭 ����
	p = colors; // p�� colors �迭�� ����Ŵ
	
	colors[0].setColor(255, 0, 0); // ������
	colors[1].setColor(0, 255, 0); // �ʷϻ�
	colors[2].setColor(0, 0, 255); // �Ķ���

	for (int i = 0; i < 3; i++)
	{
		p->show();
		p++;

		// colors[i].show();
	}
}