#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int kor, music, art;
	double avg;

	printf("���� ���� �̼� ������? ");
	scanf_s("%d %d %d", &kor, &music, &art);

	printf("====================================\n");
	printf("���� \t���� \t�̼� \t��� \t���\n");
	printf("------------------------------------\n");

	avg = (double)(kor + music + art) / 3.0;
	printf("%3d \t%3d \t%3d \t%4.1lf ", kor, music, art, avg);

	if (avg >= 70)
	{
		printf("\t��� \n");
	}
	else
	{
		printf("\tŻ�� \n");
	}
	printf("====================================\n");

	system("pause");
	return 0;
}