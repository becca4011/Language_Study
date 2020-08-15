#include <Windows.h>
#include <stdio.h>
#define STR(A, B) #A"은(는) "#B "의 멤버입니다."

int main(void)
{
	puts(STR(태양, 빅뱅));
	puts(STR(서현, 소녀시대));

	system("pause");
	return 0;
}