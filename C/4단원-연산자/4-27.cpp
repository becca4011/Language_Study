#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int kor, eng, math, atd;

	printf("���� : ");
	scanf_s("%d", &kor);

	printf("���� : ");
	scanf_s("%d", &eng);

	printf("���� : ");
	scanf_s("%d", &math);

	printf("��� : ");
	scanf_s("%d", &atd);

	double avg = (kor + eng + math + atd) / 4.0;

	printf("\n--------------------------\n");
	printf(">> %s", (avg >= 70 && atd >= 80) ? "�հ�" : "���հ�");
	printf("\n--------------------------\n");
	printf("�� ������ ��� : %.1lf \n", avg);
	printf("��� ���� : %d", atd);
	printf("\n--------------------------\n");

	system("pause");
	return 0;
}