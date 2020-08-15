#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4;
	int avg;
	int sum;

	printf("°ö¼ÀÀ» ÇÏ°í ½ÍÀº µÎ °³ÀÇ Á¤¼ö´Â? ");
	scanf_s("%d %d", &n1, &n2);
	
	avg = n1 * n2;
	printf("°ö¼À °á°ú: %d\n\n", avg);

	printf("µ¡¼ÀÀ» ÇÏ°í ½ÍÀº µÎ °³ÀÇ Á¤¼ö´Â? ");
	scanf_s("%d %d", &n3, &n4);

	sum = n3 + n4;
	printf("µ¡¼À °á°ú: %d\n", sum);

	system("pause");
	return 0;
}