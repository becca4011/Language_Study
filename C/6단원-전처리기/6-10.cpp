#include <Windows.h>
#include <stdio.h>
#define PI 3.141592
#define VOLUME(r) (4.0 / 3.0) * PI * (r * r * r)

int main(void)
{
	int r;
	
	printf("������ : ");
	scanf_s("%d", &r);

	printf(">> �������� %d�� ���� ���� = %.2lf \n", r, VOLUME(r));

	system("pause");
	return 0;
}