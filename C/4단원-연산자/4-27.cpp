#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int kor, eng, math, atd;

	printf("국어 : ");
	scanf_s("%d", &kor);

	printf("영어 : ");
	scanf_s("%d", &eng);

	printf("수학 : ");
	scanf_s("%d", &math);

	printf("출결 : ");
	scanf_s("%d", &atd);

	double avg = (kor + eng + math + atd) / 4.0;

	printf("\n--------------------------\n");
	printf(">> %s", (avg >= 70 && atd >= 80) ? "합격" : "불합격");
	printf("\n--------------------------\n");
	printf("네 과목의 평균 : %.1lf \n", avg);
	printf("출결 점수 : %d", atd);
	printf("\n--------------------------\n");

	system("pause");
	return 0;
}