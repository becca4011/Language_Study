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
	Color screenColor(255, 0, 0); // screenColor 객체 생성
	Color *p; // Color 타입의 포인터 변수 p

	p = &screenColor; // p가 screenColor의 주소 가짐
	p->show(); // screenColor 색 출력

	Color colors[3]; // Color의 배열 선언
	p = colors; // p가 colors 배열을 가리킴
	
	colors[0].setColor(255, 0, 0); // 빨간색
	colors[1].setColor(0, 255, 0); // 초록색
	colors[2].setColor(0, 0, 255); // 파란색

	for (int i = 0; i < 3; i++)
	{
		p->show();
		p++;

		// colors[i].show();
	}
}